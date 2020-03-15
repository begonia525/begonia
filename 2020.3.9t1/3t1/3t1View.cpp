
// 3t1View.cpp : CMy3t1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3t1.h"
#endif

#include "3t1Doc.h"
#include "3t1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3t1View

IMPLEMENT_DYNCREATE(CMy3t1View, CView)

BEGIN_MESSAGE_MAP(CMy3t1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3t1View 构造/析构

CMy3t1View::CMy3t1View()
{
	// TODO: 在此处添加构造代码

}

CMy3t1View::~CMy3t1View()
{
}

BOOL CMy3t1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3t1View 绘制

void CMy3t1View::OnDraw(CDC* /*pDC*/)
{
	CMy3t1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy3t1View 诊断

#ifdef _DEBUG
void CMy3t1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3t1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3t1Doc* CMy3t1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3t1Doc)));
	return (CMy3t1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3t1View 消息处理程序


void CMy3t1View::OnLButtonDown(UINT nFlags, CPoint point)
{

	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	//int a = rand() % 50 + 5;
	//int b = rand() % 50 + 7;
	//CClientDC dc(this);
	//CRect cr(point.x - a, point.y - b,point.x+a,point.y+b);
	this->GetClientRect(&cr);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
