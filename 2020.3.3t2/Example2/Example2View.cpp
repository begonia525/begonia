
// Example2View.cpp : CExample2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Example2.h"
#endif

#include "Example2Doc.h"
#include "Example2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExample2View

IMPLEMENT_DYNCREATE(CExample2View, CView)

BEGIN_MESSAGE_MAP(CExample2View, CView)
END_MESSAGE_MAP()

// CExample2View 构造/析构

CExample2View::CExample2View()
{
	// TODO: 在此处添加构造代码

}

CExample2View::~CExample2View()
{
}

BOOL CExample2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CExample2View 绘制

void CExample2View::OnDraw(CDC* pDC)
{
	CExample2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
	int b = pDoc->A;
	CString Str;
	Str.Format(_T("%d"), b);
	pDC->TextOutW(100, 200, Str);
	pDC->TextOutW(200, 300, pDoc->S);
}


// CExample2View 诊断

#ifdef _DEBUG
void CExample2View::AssertValid() const
{
	CView::AssertValid();
}

void CExample2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExample2Doc* CExample2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExample2Doc)));
	return (CExample2Doc*)m_pDocument;
}
#endif //_DEBUG


// CExample2View 消息处理程序
