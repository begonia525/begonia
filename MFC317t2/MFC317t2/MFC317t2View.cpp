
// MFC317t2View.cpp : CMFC317t2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC317t2.h"
#endif

#include "MFC317t2Doc.h"
#include "MFC317t2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC317t2View

IMPLEMENT_DYNCREATE(CMFC317t2View, CView)

BEGIN_MESSAGE_MAP(CMFC317t2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC317t2View ����/����

CMFC317t2View::CMFC317t2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC317t2View::~CMFC317t2View()
{
}

BOOL CMFC317t2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC317t2View ����

void CMFC317t2View::OnDraw(CDC* pDC)
{
	CMFC317t2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->c);

}


// CMFC317t2View ���

#ifdef _DEBUG
void CMFC317t2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC317t2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC317t2Doc* CMFC317t2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC317t2Doc)));
	return (CMFC317t2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC317t2View ��Ϣ�������


void CMFC317t2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC317t2Doc*pDoc = GetDocument();
	switch (nChar)
	{
	case(VK_RIGHT):
		pDoc->c.left += 5;
		pDoc->c.right += 5;
		break;
	case(VK_LEFT):
		pDoc->c.left += -5;
		pDoc->c.right += -5;
		break;
	case(VK_UP):
		pDoc->c.bottom += -5;
		pDoc->c.top += -5;
		break;
	case(VK_DOWN):
		pDoc->c.bottom += 5;
		pDoc->c.top += 5;
		break;
	case(VK_HOME):
		pDoc->c.left += -5;
		pDoc->c.top += -5;
		break;
	case(VK_END):
		pDoc->c.right += -5;
		pDoc->c.bottom += -5;
		break;

	}

	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFC317t2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC317t2Doc*pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->c.left = 500;
	pDoc->c.top = 200;
	pDoc->c.bottom = 300; pDoc->c.right = 700;

	InvalidateRect(NULL, TRUE);

	CView::OnLButtonDown(nFlags, point);
}
