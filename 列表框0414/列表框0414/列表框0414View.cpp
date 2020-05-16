
// 列表框0414View.cpp : C列表框0414View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "列表框0414.h"
#endif

#include "列表框0414Doc.h"
#include "列表框0414View.h"
#include"Dlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C列表框0414View

IMPLEMENT_DYNCREATE(C列表框0414View, CView)

BEGIN_MESSAGE_MAP(C列表框0414View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_FILE_OPEN, &C列表框0414View::OnFileOpen)
	ON_COMMAND(ID_32771, &C列表框0414View::On32771)
END_MESSAGE_MAP()

// C列表框0414View 构造/析构

C列表框0414View::C列表框0414View()
{
	// TODO: 在此处添加构造代码

}

C列表框0414View::~C列表框0414View()
{
}

BOOL C列表框0414View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C列表框0414View 绘制

void C列表框0414View::OnDraw(CDC* pDC)
{
	C列表框0414Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	pDC->TextOutW(20, 30, _T("双击鼠标左键弹出文件选择对话框。"));
}


// C列表框0414View 诊断

#ifdef _DEBUG
void C列表框0414View::AssertValid() const
{
	CView::AssertValid();
}

void C列表框0414View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C列表框0414Doc* C列表框0414View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C列表框0414Doc)));
	return (C列表框0414Doc*)m_pDocument;
}
#endif //_DEBUG


// C列表框0414View 消息处理程序


void C列表框0414View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	CClientDC dc(this);
	C列表框0414Doc*pDoc = GetDocument();
	pDoc->name = dlg.GetPathName();
	if (r == IDOK)
	{

		dc.TextOutW(200, 200, pDoc->name);
	}

	CView::OnLButtonDblClk(nFlags, point);
}


void C列表框0414View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	

}


void C列表框0414View::On32771()
{
	// TODO: 在此添加命令处理程序代码
	C列表框0414Doc*pDoc = GetDocument();
	Dlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		GetDC()->TextOutW(300, 400, dlg.str);
	}
}
