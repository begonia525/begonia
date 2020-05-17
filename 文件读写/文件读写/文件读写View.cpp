
// 文件读写View.cpp : C文件读写View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "文件读写.h"
#endif

#include "文件读写Doc.h"
#include "文件读写View.h"

//#include"Dlg0.h"

#include<fstream>
#include<string>
#include<iostream>
using namespace std;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C文件读写View

IMPLEMENT_DYNCREATE(C文件读写View, CView)

BEGIN_MESSAGE_MAP(C文件读写View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C文件读写View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &C文件读写View::OnFileSaveAs)
END_MESSAGE_MAP()

// C文件读写View 构造/析构

C文件读写View::C文件读写View()
{
	// TODO: 在此处添加构造代码

}

C文件读写View::~C文件读写View()
{
}

BOOL C文件读写View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C文件读写View 绘制

void C文件读写View::OnDraw(CDC* /*pDC*/)
{
	C文件读写Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C文件读写View 诊断

#ifdef _DEBUG
void C文件读写View::AssertValid() const
{
	CView::AssertValid();
}

void C文件读写View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C文件读写Doc* C文件读写View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C文件读写Doc)));
	return (C文件读写Doc*)m_pDocument;
}
#endif //_DEBUG


// C文件读写View 消息处理程序


void C文件读写View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString filename = dlg.GetPathName();
		ifstream ifs(filename);
		string s;
		
		while (ifs >> s)
		{
			CString str;
			str = CString(s.c_str());
			CClientDC dc(this);
			CImage img;
			img.Load(str);
			img.Draw(dc.m_hDC,0,0,img.GetWidth(),img.GetHeight());
			
			dc.TextOutW(100, 200, CString(s.c_str()));
			
			
		}
	}
}


void C文件读写View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		ofstream ofs("abc.txt");
		CString s = dlg.GetPathName();
		ofs << CT2A(s.GetString())<< endl;

	}
}
