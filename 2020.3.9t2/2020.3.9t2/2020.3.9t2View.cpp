
// 2020.3.9t2View.cpp : CMy202039t2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.3.9t2.h"
#endif

#include "2020.3.9t2Doc.h"
#include "2020.3.9t2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy202039t2View

IMPLEMENT_DYNCREATE(CMy202039t2View, CView)

BEGIN_MESSAGE_MAP(CMy202039t2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy202039t2View ����/����

CMy202039t2View::CMy202039t2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy202039t2View::~CMy202039t2View()
{
}

BOOL CMy202039t2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy202039t2View ����

void CMy202039t2View::OnDraw(CDC* /*pDC*/)
{
	CMy202039t2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy202039t2View ���

#ifdef _DEBUG
void CMy202039t2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy202039t2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy202039t2Doc* CMy202039t2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy202039t2Doc)));
	return (CMy202039t2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy202039t2View ��Ϣ�������


void CMy202039t2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x, point.y , point.x +3*r, point.y + r);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
