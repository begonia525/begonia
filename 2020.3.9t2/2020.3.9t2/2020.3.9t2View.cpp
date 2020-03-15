
// 2020.3.9t2View.cpp : CMy202039t2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.3.9t2.h"
#endif

#include "2020.3.9t2Doc.h"
#include "2020.3.9t2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy202039t2View

IMPLEMENT_DYNCREATE(CMy202039t2View, CView)

BEGIN_MESSAGE_MAP(CMy202039t2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy202039t2View 构造/析构

CMy202039t2View::CMy202039t2View()
{
	// TODO: 在此处添加构造代码

}

CMy202039t2View::~CMy202039t2View()
{
}

BOOL CMy202039t2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy202039t2View 绘制

void CMy202039t2View::OnDraw(CDC* /*pDC*/)
{
	CMy202039t2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy202039t2View 诊断

#ifdef _DEBUG
void CMy202039t2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy202039t2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy202039t2Doc* CMy202039t2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy202039t2Doc)));
	return (CMy202039t2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy202039t2View 消息处理程序


void CMy202039t2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x, point.y , point.x +3*r, point.y + r);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
