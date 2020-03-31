
// MFC331View.cpp : CMFC331View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC331.h"
#endif

#include "MFC331Doc.h"
#include "MFC331View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC331View

IMPLEMENT_DYNCREATE(CMFC331View, CView)

BEGIN_MESSAGE_MAP(CMFC331View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC331View 构造/析构

CMFC331View::CMFC331View()
{
	// TODO: 在此处添加构造代码
	cr.bottom = 200;
	cr.top = 0;
	cr.left = 0;
	cr.right = 400;
	
	s1 = " ";
	c = 0;
}

CMFC331View::~CMFC331View()
{
}

BOOL CMFC331View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC331View 绘制

void CMFC331View::OnDraw(CDC* pDC)
{
	CMFC331Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	

	pDC->Rectangle(cr);
}


// CMFC331View 诊断

#ifdef _DEBUG
void CMFC331View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC331View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC331Doc* CMFC331View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC331Doc)));
	return (CMFC331Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC331View 消息处理程序


void CMFC331View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if (0x0d == nChar) {//处理回车键
		s1.Empty();
		c.x += tm.tmWeight;
		c.y += tm.tmHeight;
		
	}
	else if (0x08 == nChar) {//退格键的删除处理
		COLORREF clr = dc.SetTextColor(dc.GetBkColor());
		dc.TextOutW(c.x, c.y, s1);
		s1 = s1.Left(s1.GetLength() - 1);
		dc.SetTextColor(clr);
	}
	else {
		s1 = (char)nChar;
	}
	CSize sz = dc.GetTextExtent(s1);
	
	if (c.x<cr.right-2&&c.y<cr.bottom) {
 c.x = c.x + sz.cx;


		}
	else if(c.x=cr.right&&c.y<cr.bottom) {
		c.y = c.y + sz.cy;
		c.x = cr.left;
		
	
	}
	SetCaretPos(c);
	dc.TextOutW(c.x, c.y, s1);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFC331View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCaretPos(point);
	s1.Empty();
	c = point;
	CView::OnLButtonDown(nFlags, point);
}
