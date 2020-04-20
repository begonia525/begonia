
// MFC420t22View.cpp : CMFC420t22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC420t22.h"
#endif

#include "MFC420t22Doc.h"
#include "MFC420t22View.h"
#include"Dlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC420t22View

IMPLEMENT_DYNCREATE(CMFC420t22View, CView)

BEGIN_MESSAGE_MAP(CMFC420t22View, CView)
	ON_COMMAND(ID_INPUT, &CMFC420t22View::OnInput)
END_MESSAGE_MAP()

// CMFC420t22View 构造/析构

CMFC420t22View::CMFC420t22View()
{
	// TODO: 在此处添加构造代码

}

CMFC420t22View::~CMFC420t22View()
{
}

BOOL CMFC420t22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC420t22View 绘制

void CMFC420t22View::OnDraw(CDC* pDC)
{
	CMFC420t22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// CMFC420t22View 诊断

#ifdef _DEBUG
void CMFC420t22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC420t22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC420t22Doc* CMFC420t22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC420t22Doc)));
	return (CMFC420t22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC420t22View 消息处理程序


void CMFC420t22View::OnInput()
{
	// TODO: 在此添加命令处理程序代码
	Dlg0 dlg;
	int r = dlg.DoModal();
	if(r==IDOK)
	{ 
		
		cr.top = 200;
		cr.left = 200;
		cr.right = 200 + 2 * dlg.a;
		cr.bottom = 200 + 2 * dlg.b;
		GetDC()->Ellipse(cr);
	}
}


