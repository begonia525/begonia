
// MFC0407�Ի���View.cpp : CMFC0407�Ի���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0407�Ի���.h"
#endif

#include "MFC0407�Ի���Doc.h"
#include "MFC0407�Ի���View.h"
#include"Mydlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0407�Ի���View

IMPLEMENT_DYNCREATE(CMFC0407�Ի���View, CView)

BEGIN_MESSAGE_MAP(CMFC0407�Ի���View, CView)
	ON_COMMAND(ID_SHOWDLG, &CMFC0407�Ի���View::OnShowdlg)
END_MESSAGE_MAP()

// CMFC0407�Ի���View ����/����

CMFC0407�Ի���View::CMFC0407�Ի���View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC0407�Ի���View::~CMFC0407�Ի���View()
{
}

BOOL CMFC0407�Ի���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0407�Ի���View ����

void CMFC0407�Ի���View::OnDraw(CDC* /*pDC*/)
{
	CMFC0407�Ի���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC0407�Ի���View ���

#ifdef _DEBUG
void CMFC0407�Ի���View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0407�Ի���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0407�Ի���Doc* CMFC0407�Ի���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0407�Ի���Doc)));
	return (CMFC0407�Ի���Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0407�Ի���View ��Ϣ�������


void CMFC0407�Ի���View::OnShowdlg()
{
	// TODO: �ڴ���������������
	Mydlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK || r == IDCANCEL)
	{
		CClientDC dc(this);
		CString s;
		s.Format(_T("�����˳��Ի���......"));
		dc.TextOutW(20,20,s);
	}
}
