
// Example1View.cpp : CExample1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Example1.h"
#endif

#include "Example1Doc.h"
#include "Example1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExample1View

IMPLEMENT_DYNCREATE(CExample1View, CView)

BEGIN_MESSAGE_MAP(CExample1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CExample1View 构造/析构

CExample1View::CExample1View()
{
	// TODO: 在此处添加构造代码

}

CExample1View::~CExample1View()
{
}

BOOL CExample1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CExample1View 绘制

void CExample1View::OnDraw(CDC* pDC)
{
	CExample1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	//CString S;
	//S.Format(_T("我是***"));
	//int A= 80;
	//CString b;
	//b.Format(_T("%d"), A);
	//pDC->TextOutW(200, 400,S);
	//pDC->TextOutW(200, 300, b);
}


// CExample1View 诊断

#ifdef _DEBUG
void CExample1View::AssertValid() const
{
	CView::AssertValid();
}

void CExample1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExample1Doc* CExample1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExample1Doc)));
	return (CExample1Doc*)m_pDocument;
}
#endif //_DEBUG


// CExample1View 消息处理程序


void CExample1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString S;
	S.Format(_T("左键正在被按下"));
	dc.TextOutW(200, 400, S);
	CView::OnLButtonDown(nFlags, point);
}


void CExample1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString S;
	S.Format(_T("左键正在被抬起"));
	dc.TextOutW(200, 500, S);
	CView::OnLButtonUp(nFlags, point);
}
