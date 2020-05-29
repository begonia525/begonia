
// �ھ���ʵ��2View.cpp : C�ھ���ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ھ���ʵ��2.h"
#endif

#include "�ھ���ʵ��2Doc.h"
#include "�ھ���ʵ��2View.h"
#include<fstream>
#include<string>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ھ���ʵ��2View

IMPLEMENT_DYNCREATE(C�ھ���ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C�ھ���ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_COMMAND(ID_FILE_SAVE_AS, &C�ھ���ʵ��2View::OnFileSaveAs)
	ON_COMMAND(ID_FILE_OPEN, &C�ھ���ʵ��2View::OnFileOpen)
END_MESSAGE_MAP()

// C�ھ���ʵ��2View ����/����

C�ھ���ʵ��2View::C�ھ���ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

	
}

C�ھ���ʵ��2View::~C�ھ���ʵ��2View()
{
}

BOOL C�ھ���ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ھ���ʵ��2View ����

void C�ھ���ʵ��2View::OnDraw(CDC* pDC)
{
	C�ھ���ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	

}


// C�ھ���ʵ��2View ���

#ifdef _DEBUG
void C�ھ���ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C�ھ���ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ھ���ʵ��2Doc* C�ھ���ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ھ���ʵ��2Doc)));
	return (C�ھ���ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ھ���ʵ��2View ��Ϣ�������


void C�ھ���ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CDC*pDC = GetDC();
	C�ھ���ʵ��2Doc*pDoc = GetDocument();
	for (int i = 0; i < pDoc->c.GetSize(); i++)
	{
		//	pDC->Rectangle(pDoc->c[i]);
		pDC->Ellipse(pDoc->c[i]);

	}

	
	//SetTimer(1, 50, NULL);*/



	CView::OnLButtonDown(nFlags, point);
}


void C�ھ���ʵ��2View::OnTimer(UINT_PTR nIDEvent)
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


void C�ھ���ʵ��2View::OnFileSaveAs()
{
	// TODO: �ڴ���������������
	Invalidate();
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		C�ھ���ʵ��2Doc*pDoc = GetDocument();
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


void C�ھ���ʵ��2View::OnFileOpen()
{
	// TODO: �ڴ���������������
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
		C�ھ���ʵ��2Doc* pDoc = GetDocument();
		for (int i = 0; i < pDoc->c.GetSize(); i++)
		{
				//pDC->Rectangle(pDoc->c[i]);
			pDC->Ellipse(pDoc->c[i]);

		}

	}
}
