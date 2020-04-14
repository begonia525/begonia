
// MFC316View.cpp : CMFC316View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC316.h"
#endif

#include "MFC316Doc.h"
#include "MFC316View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC316View

IMPLEMENT_DYNCREATE(CMFC316View, CView)

BEGIN_MESSAGE_MAP(CMFC316View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC316View ����/����

CMFC316View::CMFC316View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC316View::~CMFC316View()
{
}

BOOL CMFC316View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC316View ����

void CMFC316View::OnDraw(CDC* pDC)
{
	CMFC316Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr(pDoc->c1.x, pDoc->c1.y, pDoc->c2.x, pDoc->c2.y);
	pDC->Rectangle(cr);
	//pDC->Ellipse(cr);
	
}


// CMFC316View ���

#ifdef _DEBUG
void CMFC316View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC316View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC316Doc* CMFC316View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC316Doc)));
	return (CMFC316Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC316View ��Ϣ�������


void CMFC316View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CMFC316Doc*pDoc = GetDocument();
	pDoc->c1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC316View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC316Doc*pDoc = GetDocument();
	pDoc->c2 = point;
//	Invalidate();
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void CMFC316View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	s.Format(_T("����ƶ������е�λ�� X=%d,Y=%d"), point.x, point.y);
	dc.TextOutW(400, 20, s);
	
	CView::OnMouseMove(nFlags, point);
}
