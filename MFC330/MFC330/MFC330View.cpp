
// MFC330View.cpp : CMFC330View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC330.h"
#endif

#include "MFC330Doc.h"
#include "MFC330View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC330View

IMPLEMENT_DYNCREATE(CMFC330View, CView)

BEGIN_MESSAGE_MAP(CMFC330View, CView)
END_MESSAGE_MAP()

// CMFC330View ����/����

CMFC330View::CMFC330View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC330View::~CMFC330View()
{
}

BOOL CMFC330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC330View ����

void CMFC330View::OnDraw(CDC* /*pDC*/)
{
	CMFC330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC330View ���

#ifdef _DEBUG
void CMFC330View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC330Doc* CMFC330View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC330Doc)));
	return (CMFC330Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC330View ��Ϣ�������
