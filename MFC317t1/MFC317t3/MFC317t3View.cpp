
// MFC317t3View.cpp : CMFC317t3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC317t3.h"
#endif

#include "MFC317t3Doc.h"
#include "MFC317t3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC317t3View

IMPLEMENT_DYNCREATE(CMFC317t3View, CView)

BEGIN_MESSAGE_MAP(CMFC317t3View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC317t3View ����/����

CMFC317t3View::CMFC317t3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC317t3View::~CMFC317t3View()
{
}

BOOL CMFC317t3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC317t3View ����

void CMFC317t3View::OnDraw(CDC* /*pDC*/)
{
	CMFC317t3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC317t3View ���

#ifdef _DEBUG
void CMFC317t3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC317t3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC317t3Doc* CMFC317t3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC317t3Doc)));
	return (CMFC317t3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC317t3View ��Ϣ�������


void CMFC317t3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
}
