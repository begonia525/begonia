
// 序列化View.cpp : C序列化View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "序列化.h"
#endif

#include "序列化Doc.h"
#include "序列化View.h"

#include<fstream>
#include<string>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C序列化View

IMPLEMENT_DYNCREATE(C序列化View, CView)

BEGIN_MESSAGE_MAP(C序列化View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_FILE_OPEN, &C序列化View::OnFileOpen)
END_MESSAGE_MAP()

// C序列化View 构造/析构

C序列化View::C序列化View()
{
	// TODO: 在此处添加构造代码

}

C序列化View::~C序列化View()
{
}

BOOL C序列化View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C序列化View 绘制

void C序列化View::OnDraw(CDC* pDC)
{
	C序列化Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(20, 30, _T("双击鼠标左键选择图片"));
}


// C序列化View 诊断

#ifdef _DEBUG
void C序列化View::AssertValid() const
{
	CView::AssertValid();
}

void C序列化View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C序列化Doc* C序列化View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C序列化Doc)));
	return (C序列化Doc*)m_pDocument;
}
#endif //_DEBUG


// C序列化View 消息处理程序


void C序列化View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		C序列化Doc*pDoc = GetDocument();
		pDoc->filename = dlg.GetPathName();
		CClientDC dc(this);
		dc.TextOutW(200, 200, pDoc->filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C序列化View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	CClientDC dc(this);
	if (r == IDOK) {
		CString filename,str;
		filename = dlg.GetPathName();
		ifstream ifs(filename);
		string s;
		int x = 200, y = 300;
		while (ifs >> s)
		{
			dc.TextOutW(x, y, CString(s.c_str()));
		//	y += 30;
		}
		
		
	}
}
