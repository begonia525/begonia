
// 第九周实验2View.cpp : C第九周实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第九周实验2.h"
#endif

#include "第九周实验2Doc.h"
#include "第九周实验2View.h"
#include<fstream>
#include<string>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第九周实验2View

IMPLEMENT_DYNCREATE(C第九周实验2View, CView)

BEGIN_MESSAGE_MAP(C第九周实验2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_COMMAND(ID_FILE_SAVE_AS, &C第九周实验2View::OnFileSaveAs)
	ON_COMMAND(ID_FILE_OPEN, &C第九周实验2View::OnFileOpen)
END_MESSAGE_MAP()

// C第九周实验2View 构造/析构

C第九周实验2View::C第九周实验2View()
{
	// TODO: 在此处添加构造代码

	
}

C第九周实验2View::~C第九周实验2View()
{
}

BOOL C第九周实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第九周实验2View 绘制

void C第九周实验2View::OnDraw(CDC* pDC)
{
	C第九周实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	

}


// C第九周实验2View 诊断

#ifdef _DEBUG
void C第九周实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第九周实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第九周实验2Doc* C第九周实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第九周实验2Doc)));
	return (C第九周实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第九周实验2View 消息处理程序


void C第九周实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC*pDC = GetDC();
	C第九周实验2Doc*pDoc = GetDocument();
	for (int i = 0; i < pDoc->c.GetSize(); i++)
	{
		//	pDC->Rectangle(pDoc->c[i]);
		pDC->Ellipse(pDoc->c[i]);

	}

	
	//SetTimer(1, 50, NULL);*/



	CView::OnLButtonDown(nFlags, point);
}


void C第九周实验2View::OnTimer(UINT_PTR nIDEvent)
{
	/*if(set)
	{
	r.top += 3;
	r.left +=3;
	r.bottom -= 3;
	r.right -= 3;
	Invalidate();
}*/
	
	
	CView::OnTimer(nIDEvent);
}


void C第九周实验2View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	Invalidate();
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		C第九周实验2Doc*pDoc = GetDocument();
		for (int i=0; i < pDoc->c.GetSize(); i++)
		{
			CString s0, s1, s2, s3;
			s0.Format(_T("%d"), pDoc->c[i].top);
			s1.Format(_T("%d"), pDoc->c[i].left);
			s2.Format(_T("%d"), pDoc->c[i].right);
			s3.Format(_T("%d"), pDoc->c[i].bottom);
			ofs << CT2A(s0.GetString()) << " ";
			ofs << CT2A(s1.GetString()) << " ";
			ofs << CT2A(s2.GetString()) << " ";
			ofs << CT2A(s3.GetString()) << " ";
			ofs << endl;
		}
		
		
	}
}


void C第九周实验2View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		/*CString name = dlg.GetPathName();
		ifstream ifs(name);
		string s;
		CArray<int,int> s0;
		CArray<CRect, CRect>rect;
		CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs >> s)
		{
			//dc.TextOutW(x, y, CString(s.c_str()));
			//y += 30;
			s0.Add(INT(s.c_str()));

		}
		for (int i = 0; i < s0.GetSize(); i++)
		{
			CString str;
			str.Format(_T("%d"), s0[i]);
			dc.TextOutW(200 + i, 300, str);
		}
		*/
		CDC*pDC = GetDC();
		C第九周实验2Doc* pDoc = GetDocument();
		for (int i = 0; i < pDoc->c.GetSize(); i++)
		{
				//pDC->Rectangle(pDoc->c[i]);
			pDC->Ellipse(pDoc->c[i]);

		}

	}
}
