
// MFC323View.cpp : CMFC323View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC323.h"
#endif

#include "MFC323Doc.h"
#include "MFC323View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC323View

IMPLEMENT_DYNCREATE(CMFC323View, CView)

BEGIN_MESSAGE_MAP(CMFC323View, CView)
	ON_COMMAND(ID_SHOWCIRCLE, &CMFC323View::OnShowcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC323View 构造/析构

CMFC323View::CMFC323View()
{
	// TODO: 在此处添加构造代码
	set = true;
}

CMFC323View::~CMFC323View()
{
}

BOOL CMFC323View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC323View 绘制

void CMFC323View::OnDraw(CDC* /*pDC*/)
{
	CMFC323Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	

}


// CMFC323View 诊断

#ifdef _DEBUG
void CMFC323View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC323View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC323Doc* CMFC323View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC323Doc)));
	return (CMFC323Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC323View 消息处理程序


void CMFC323View::OnShowcircle()
{
	// TODO: 在此添加命令处理程序代码
	GetClientRect(c);
	int a = (c.top + c.bottom) / 2;
	int b = ((c.left + c.right) - 2 * a) / 2;
	cr.left = c.left + b + 300;
	cr.top = c.top + 300;
	cr.right = c.right - b - 200;
	cr.bottom = c.bottom - 200;
//SetTimer(1, 1000, NULL);
	CClientDC dc(this);
	for (int i = 0; i < 20; i++) {
		dc.Ellipse(cr);
		cr.left -= 10;
		cr.top -= 10;
		cr.right += 10;
		cr.bottom += 10;

}
	
	
	
}


void CMFC323View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

//	cr.left -= 10;
//	cr.top -= 10;
	//cr.right += 10;
	//cr.bottom+= 10;
	//Invalidate();
	CView::OnTimer(nIDEvent);
}
