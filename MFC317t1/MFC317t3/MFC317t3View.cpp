
// MFC317t3View.cpp : CMFC317t3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC317t3.h"
#endif

#include "MFC317t3Doc.h"
#include "MFC317t3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC317t3View

IMPLEMENT_DYNCREATE(CMFC317t3View, CView)

BEGIN_MESSAGE_MAP(CMFC317t3View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC317t3View 构造/析构

CMFC317t3View::CMFC317t3View()
{
	// TODO: 在此处添加构造代码

}

CMFC317t3View::~CMFC317t3View()
{
}

BOOL CMFC317t3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC317t3View 绘制

void CMFC317t3View::OnDraw(CDC* /*pDC*/)
{
	CMFC317t3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC317t3View 诊断

#ifdef _DEBUG
void CMFC317t3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC317t3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC317t3Doc* CMFC317t3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC317t3Doc)));
	return (CMFC317t3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC317t3View 消息处理程序


void CMFC317t3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
}
