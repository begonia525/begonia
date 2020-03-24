
// MFC317t1View.cpp : CMFC317t1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC317t1.h"
#endif

#include "MFC317t1Doc.h"
#include "MFC317t1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC317t1View

IMPLEMENT_DYNCREATE(CMFC317t1View, CView)

BEGIN_MESSAGE_MAP(CMFC317t1View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC317t1View 构造/析构

CMFC317t1View::CMFC317t1View()
{
	// TODO: 在此处添加构造代码
	c.left = 200;
	c.top = 200;
	c.right =250;
	c.bottom = 250;
	set = true;
}

CMFC317t1View::~CMFC317t1View()
{
}

BOOL CMFC317t1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC317t1View 绘制

void CMFC317t1View::OnDraw(CDC* pDC)
{
	CMFC317t1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(cr);

	SetTimer(1, rand() % 500 + 80, NULL);


	
	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(c);
	//pDC->Rectangle(cr);

}


// CMFC317t1View 诊断

#ifdef _DEBUG
void CMFC317t1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC317t1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC317t1Doc* CMFC317t1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC317t1Doc)));
	return (CMFC317t1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC317t1View 消息处理程序


void CMFC317t1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	   c.top += 10;
		c.bottom += 10;
		
        Invalidate();
	
		
		
		
	
	
	CView::OnTimer(nIDEvent);
}
