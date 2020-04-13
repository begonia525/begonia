
// MFC0413t3定时器View.cpp : CMFC0413t3定时器View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0413t3定时器.h"
#endif

#include "MFC0413t3定时器Doc.h"
#include "MFC0413t3定时器View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0413t3定时器View

IMPLEMENT_DYNCREATE(CMFC0413t3定时器View, CView)

BEGIN_MESSAGE_MAP(CMFC0413t3定时器View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC0413t3定时器View 构造/析构

CMFC0413t3定时器View::CMFC0413t3定时器View()
{
	// TODO: 在此处添加构造代码
	c.left = 400;
	c.top = 200;
	c.right = 450;
	c.bottom = 250;
	t = true;
}

CMFC0413t3定时器View::~CMFC0413t3定时器View()
{
}

BOOL CMFC0413t3定时器View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0413t3定时器View 绘制

void CMFC0413t3定时器View::OnDraw(CDC* pDC)
{
	CMFC0413t3定时器Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(c);
	CRect rect;
	GetClientRect(&rect);
	if (c.right == 1000 )t = false;
	if (c.left == 0)t = true;
}


// CMFC0413t3定时器View 诊断

#ifdef _DEBUG
void CMFC0413t3定时器View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413t3定时器View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413t3定时器Doc* CMFC0413t3定时器View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413t3定时器Doc)));
	return (CMFC0413t3定时器Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413t3定时器View 消息处理程序


void CMFC0413t3定时器View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetTimer(1, rand() % 50 + 100, NULL);
	
	
	
	
	CView::OnLButtonDown(nFlags, point);
}


void CMFC0413t3定时器View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (t) {
	c.left += 10;
	c.right += 10;
	Invalidate();

	}
	else {
		c.left -= 10;
		c.right -= 10;
		Invalidate();
	}
	
	CView::OnTimer(nIDEvent);
}


void CMFC0413t3定时器View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}
