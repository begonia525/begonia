
// MFC0413t2View.cpp : CMFC0413t2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFC0413t2View ����/����

CMFC0413t2View::CMFC0413t2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC0413t2View::~CMFC0413t2View()
{
}

BOOL CMFC0413t2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0413t2View ����

void CMFC0413t2View::OnDraw(CDC* /*pDC*/)
{
	CMFC0413t2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC0413t2View ���

#ifdef _DEBUG
void CMFC0413t2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413t2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413t2Doc* CMFC0413t2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413t2Doc)));
	return (CMFC0413t2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413t2View ��Ϣ�������


void CMFC0413t2View::OnShowdlg()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int r = dlg.DoModal();
	
}
