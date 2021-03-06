
// MFC0407对话框View.cpp : CMFC0407对话框View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0407对话框.h"
#endif

#include "MFC0407对话框Doc.h"
#include "MFC0407对话框View.h"
#include"Mydlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0407对话框View

IMPLEMENT_DYNCREATE(CMFC0407对话框View, CView)

BEGIN_MESSAGE_MAP(CMFC0407对话框View, CView)
	ON_COMMAND(ID_SHOWDLG, &CMFC0407对话框View::OnShowdlg)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC0407对话框View 构造/析构

CMFC0407对话框View::CMFC0407对话框View()
{
	// TODO: 在此处添加构造代码

}

CMFC0407对话框View::~CMFC0407对话框View()
{
}

BOOL CMFC0407对话框View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0407对话框View 绘制

void CMFC0407对话框View::OnDraw(CDC* pDC)
{
	CMFC0407对话框Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	
}


// CMFC0407对话框View 诊断

#ifdef _DEBUG
void CMFC0407对话框View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0407对话框View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0407对话框Doc* CMFC0407对话框View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0407对话框Doc)));
	return (CMFC0407对话框Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0407对话框View 消息处理程序


void CMFC0407对话框View::OnShowdlg()
{
	// TODO: 在此添加命令处理程序代码
	Mydlg0 dlg;
	 r = dlg.DoModal();
	 CClientDC dc(this);
	 if (r == IDOK || r == IDCANCEL)
	 {
		 CString s;
		 s.Format(_T("你已退出对话框......"));
		dc.TextOutW(20, 20, s);
	 }
	
}


void CMFC0407对话框View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
