
// MFC0413t4�Ի���View.cpp : CMFC0413t4�Ի���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0413t4�Ի���.h"
#endif

#include "MFC0413t4�Ի���Doc.h"
#include "MFC0413t4�Ի���View.h"
#include"Mydlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0413t4�Ի���View

IMPLEMENT_DYNCREATE(CMFC0413t4�Ի���View, CView)

BEGIN_MESSAGE_MAP(CMFC0413t4�Ի���View, CView)
END_MESSAGE_MAP()

// CMFC0413t4�Ի���View ����/����

CMFC0413t4�Ի���View::CMFC0413t4�Ի���View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC0413t4�Ի���View::~CMFC0413t4�Ի���View()
{
}

BOOL CMFC0413t4�Ի���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0413t4�Ի���View ����

void CMFC0413t4�Ի���View::OnDraw(CDC* /*pDC*/)
{
	CMFC0413t4�Ի���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	Mydlg0 dlg;
	int r = dlg.DoModal();
}


// CMFC0413t4�Ի���View ���

#ifdef _DEBUG
void CMFC0413t4�Ի���View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413t4�Ի���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413t4�Ի���Doc* CMFC0413t4�Ի���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413t4�Ի���Doc)));
	return (CMFC0413t4�Ի���Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413t4�Ի���View ��Ϣ�������
