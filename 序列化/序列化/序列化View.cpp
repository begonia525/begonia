
// ���л�View.cpp : C���л�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���л�.h"
#endif

#include "���л�Doc.h"
#include "���л�View.h"

#include<fstream>
#include<string>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���л�View

IMPLEMENT_DYNCREATE(C���л�View, CView)

BEGIN_MESSAGE_MAP(C���л�View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_FILE_OPEN, &C���л�View::OnFileOpen)
END_MESSAGE_MAP()

// C���л�View ����/����

C���л�View::C���л�View()
{
	// TODO: �ڴ˴���ӹ������

}

C���л�View::~C���л�View()
{
}

BOOL C���л�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���л�View ����

void C���л�View::OnDraw(CDC* pDC)
{
	C���л�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(20, 30, _T("˫��������ѡ��ͼƬ"));
}


// C���л�View ���

#ifdef _DEBUG
void C���л�View::AssertValid() const
{
	CView::AssertValid();
}

void C���л�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���л�Doc* C���л�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���л�Doc)));
	return (C���л�Doc*)m_pDocument;
}
#endif //_DEBUG


// C���л�View ��Ϣ�������


void C���л�View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		C���л�Doc*pDoc = GetDocument();
		pDoc->filename = dlg.GetPathName();
		CClientDC dc(this);
		dc.TextOutW(200, 200, pDoc->filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C���л�View::OnFileOpen()
{
	// TODO: �ڴ���������������
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
