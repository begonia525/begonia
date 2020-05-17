
// �ļ���дView.cpp : C�ļ���дView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ļ���д.h"
#endif

#include "�ļ���дDoc.h"
#include "�ļ���дView.h"

//#include"Dlg0.h"

#include<fstream>
#include<string>
#include<iostream>
using namespace std;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ļ���дView

IMPLEMENT_DYNCREATE(C�ļ���дView, CView)

BEGIN_MESSAGE_MAP(C�ļ���дView, CView)
	ON_COMMAND(ID_FILE_OPEN, &C�ļ���дView::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &C�ļ���дView::OnFileSaveAs)
END_MESSAGE_MAP()

// C�ļ���дView ����/����

C�ļ���дView::C�ļ���дView()
{
	// TODO: �ڴ˴���ӹ������

}

C�ļ���дView::~C�ļ���дView()
{
}

BOOL C�ļ���дView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ļ���дView ����

void C�ļ���дView::OnDraw(CDC* /*pDC*/)
{
	C�ļ���дDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ļ���дView ���

#ifdef _DEBUG
void C�ļ���дView::AssertValid() const
{
	CView::AssertValid();
}

void C�ļ���дView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ļ���дDoc* C�ļ���дView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ļ���дDoc)));
	return (C�ļ���дDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ļ���дView ��Ϣ�������


void C�ļ���дView::OnFileOpen()
{
	// TODO: �ڴ���������������
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


void C�ļ���дView::OnFileSaveAs()
{
	// TODO: �ڴ���������������
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		ofstream ofs("abc.txt");
		CString s = dlg.GetPathName();
		ofs << CT2A(s.GetString())<< endl;

	}
}
