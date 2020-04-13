
// MFC0413View.cpp : CMFC0413View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0413.h"
#endif

#include "MFC0413Doc.h"
#include "MFC0413View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0413View

IMPLEMENT_DYNCREATE(CMFC0413View, CView)

BEGIN_MESSAGE_MAP(CMFC0413View, CView)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC0413View ����/����

CMFC0413View::CMFC0413View()
{
	// TODO: �ڴ˴���ӹ������
	c.left = 20;
	c.top = 20;
	c.right = 200;
	c.bottom = 100;

}

CMFC0413View::~CMFC0413View()
{
}

BOOL CMFC0413View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0413View ����

void CMFC0413View::OnDraw(CDC* pDC)
{
	CMFC0413Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(c);

}


// CMFC0413View ���

#ifdef _DEBUG
void CMFC0413View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413Doc* CMFC0413View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413Doc)));
	return (CMFC0413Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413View ��Ϣ�������


void CMFC0413View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	c.left = point.x;
	c.top = point.y;
	c.right = point.x + 180;
	c.bottom = point.y + 80;
	dc.Rectangle(c);
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
