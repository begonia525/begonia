
// Example3View.cpp : CExample3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Example3.h"
#endif

#include "Example3Doc.h"
#include "Example3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExample3View

IMPLEMENT_DYNCREATE(CExample3View, CView)

BEGIN_MESSAGE_MAP(CExample3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CExample3View 构造/析构

CExample3View::CExample3View()
{
	// TODO: 在此处添加构造代码

}

CExample3View::~CExample3View()
{
}

BOOL CExample3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CExample3View 绘制

void CExample3View::OnDraw(CDC* /*pDC*/)
{
	CExample3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CExample3View 诊断

#ifdef _DEBUG
void CExample3View::AssertValid() const
{
	CView::AssertValid();
}

void CExample3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExample3Doc* CExample3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExample3Doc)));
	return (CExample3Doc*)m_pDocument;
}
#endif //_DEBUG


// CExample3View 消息处理程序


void CExample3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CExample3Doc* pDoc= GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CExample3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CExample3Doc* pDoc= GetDocument();
	int b = pDoc->count;
	CString D;
	D.Format(_T("%d"), b);
	CClientDC dc(this);
	dc.TextOutW(100, 200, D);
	CView::OnRButtonDown(nFlags, point);
}
