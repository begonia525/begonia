
// MFC0413View.cpp : CMFC0413View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0413.h"
#endif

#include "MFC0413Doc.h"
#include "MFC0413View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0413View

IMPLEMENT_DYNCREATE(CMFC0413View, CView)

BEGIN_MESSAGE_MAP(CMFC0413View, CView)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC0413View 构造/析构

CMFC0413View::CMFC0413View()
{
	// TODO: 在此处添加构造代码
	c.left = 20;
	c.top = 20;
	c.right = 200;
	c.bottom = 100;

}

CMFC0413View::~CMFC0413View()
{
}

BOOL CMFC0413View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0413View 绘制

void CMFC0413View::OnDraw(CDC* pDC)
{
	CMFC0413Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(c);

}


// CMFC0413View 诊断

#ifdef _DEBUG
void CMFC0413View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413Doc* CMFC0413View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413Doc)));
	return (CMFC0413Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413View 消息处理程序


void CMFC0413View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	c.left = point.x;
	c.top = point.y;
	c.right = point.x + 180;
	c.bottom = point.y + 80;
	dc.Rectangle(c);
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
