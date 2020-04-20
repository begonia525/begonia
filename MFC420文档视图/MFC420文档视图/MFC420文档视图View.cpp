
// MFC420文档视图View.cpp : CMFC420文档视图View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC420文档视图.h"
#endif

#include "MFC420文档视图Doc.h"
#include "MFC420文档视图View.h"
#include"Dlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC420文档视图View

IMPLEMENT_DYNCREATE(CMFC420文档视图View, CView)

BEGIN_MESSAGE_MAP(CMFC420文档视图View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_DRAW, &CMFC420文档视图View::OnDraw)
	
END_MESSAGE_MAP()

// CMFC420文档视图View 构造/析构

CMFC420文档视图View::CMFC420文档视图View()
{
	// TODO: 在此处添加构造代码

}

CMFC420文档视图View::~CMFC420文档视图View()
{
}

BOOL CMFC420文档视图View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC420文档视图View 绘制

void CMFC420文档视图View::OnDraw(CDC* pDC)
{
	CMFC420文档视图Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(cr);
	Invalidate();
}


// CMFC420文档视图View 诊断

#ifdef _DEBUG
void CMFC420文档视图View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC420文档视图View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC420文档视图Doc* CMFC420文档视图View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC420文档视图Doc)));
	return (CMFC420文档视图Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC420文档视图View 消息处理程序


void CMFC420文档视图View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	cr.right = point.x;
	cr.bottom = point.y;
	CView::OnMouseMove(nFlags, point);
}


void CMFC420文档视图View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	cr.left = point.x;
	cr.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMFC420文档视图View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
    
	CView::OnLButtonUp(nFlags, point);
}


void CMFC420文档视图View::OnDraw()
{
	// TODO: 在此添加命令处理程序代码
	
}


void CMFC420文档视图View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	
}
