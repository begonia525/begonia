
// E310T3View.cpp : CE310T3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "E310T3.h"
#endif

#include "E310T3Doc.h"
#include "E310T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CE310T3View

IMPLEMENT_DYNCREATE(CE310T3View, CView)

BEGIN_MESSAGE_MAP(CE310T3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CE310T3View 构造/析构

CE310T3View::CE310T3View()
{
	// TODO: 在此处添加构造代码
}

CE310T3View::~CE310T3View()
{
}

BOOL CE310T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CE310T3View 绘制

void CE310T3View::OnDraw(CDC* pDC)
{
	CE310T3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	CClientDC dc(this);
	CRect a(20, 20, 200, 100);
	CRect b(600, 20, 700, 100);
	CRect c(300,20,500,100);
	dc.Rectangle(a);
	dc.Rectangle(b);
	dc.Rectangle(c);
	
}


// CE310T3View 诊断

#ifdef _DEBUG
void CE310T3View::AssertValid() const
{
	CView::AssertValid();
}

void CE310T3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CE310T3Doc* CE310T3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CE310T3Doc)));
	return (CE310T3Doc*)m_pDocument;
}
#endif //_DEBUG


// CE310T3View 消息处理程序


void CE310T3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CE310T3Doc*pDoc = GetDocument();
	CClientDC dc(this);
    CRect a(20, 20, 200, 100);
	CRect b(600, 20, 700, 100);
	CRect c(300, 20, 500, 100);
	//int r = rand() % 50 + 4;
	//pDoc->x = rand()%50+5;
	//pDoc->y = rand() % 40 + 5;
	CString s;
	if (a.PtInRect(CPoint(point.x, point.y)))
	{
		s.Format(_T("%d"), pDoc->x);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (c.PtInRect(CPoint(point.x, point.y)))
	{
		s.Format(_T("%d"), pDoc->y);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
s.Format(_T("点击无效"));
	dc.TextOutW(point.x, point.y, s);
	}
		
	
	CView::OnLButtonDown(nFlags, point);
}


void CE310T3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CE310T3Doc*pDoc = GetDocument();
	CRect b(600, 20, 700, 100);
	CClientDC dc(this);
	//int k = pDoc->x + pDoc->y;
	CString s;
	if (b.PtInRect(CPoint(point.x, point.y)))
	{
		s.Format(_T("%d"), pDoc->z);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
