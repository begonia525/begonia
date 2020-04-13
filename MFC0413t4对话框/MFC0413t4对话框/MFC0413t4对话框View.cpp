
// MFC0413t4对话框View.cpp : CMFC0413t4对话框View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0413t4对话框.h"
#endif

#include "MFC0413t4对话框Doc.h"
#include "MFC0413t4对话框View.h"
#include"Mydlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0413t4对话框View

IMPLEMENT_DYNCREATE(CMFC0413t4对话框View, CView)

BEGIN_MESSAGE_MAP(CMFC0413t4对话框View, CView)
END_MESSAGE_MAP()

// CMFC0413t4对话框View 构造/析构

CMFC0413t4对话框View::CMFC0413t4对话框View()
{
	// TODO: 在此处添加构造代码

}

CMFC0413t4对话框View::~CMFC0413t4对话框View()
{
}

BOOL CMFC0413t4对话框View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0413t4对话框View 绘制

void CMFC0413t4对话框View::OnDraw(CDC* /*pDC*/)
{
	CMFC0413t4对话框Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	Mydlg0 dlg;
	int r = dlg.DoModal();
}


// CMFC0413t4对话框View 诊断

#ifdef _DEBUG
void CMFC0413t4对话框View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413t4对话框View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413t4对话框Doc* CMFC0413t4对话框View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413t4对话框Doc)));
	return (CMFC0413t4对话框Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413t4对话框View 消息处理程序
