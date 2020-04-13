
// MFC0413t2View.cpp : CMFC0413t2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0413t2.h"
#endif

#include "MFC0413t2Doc.h"
#include "MFC0413t2View.h"
#include"MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0413t2View

IMPLEMENT_DYNCREATE(CMFC0413t2View, CView)

BEGIN_MESSAGE_MAP(CMFC0413t2View, CView)
	ON_COMMAND(Showdlg, &CMFC0413t2View::OnShowdlg)
END_MESSAGE_MAP()

// CMFC0413t2View 构造/析构

CMFC0413t2View::CMFC0413t2View()
{
	// TODO: 在此处添加构造代码

}

CMFC0413t2View::~CMFC0413t2View()
{
}

BOOL CMFC0413t2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0413t2View 绘制

void CMFC0413t2View::OnDraw(CDC* /*pDC*/)
{
	CMFC0413t2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC0413t2View 诊断

#ifdef _DEBUG
void CMFC0413t2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413t2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413t2Doc* CMFC0413t2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413t2Doc)));
	return (CMFC0413t2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413t2View 消息处理程序


void CMFC0413t2View::OnShowdlg()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int r = dlg.DoModal();
	
}
