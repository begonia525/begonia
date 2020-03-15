
// E310T3View.cpp : CE310T3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "E310T3.h"
#endif

#include "E310T3Doc.h"
#include "E310T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CE310T3View

IMPLEMENT_DYNCREATE(CE310T3View, CView)

BEGIN_MESSAGE_MAP(CE310T3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CE310T3View ����/����

CE310T3View::CE310T3View()
{
	// TODO: �ڴ˴���ӹ������
}

CE310T3View::~CE310T3View()
{
}

BOOL CE310T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CE310T3View ����

void CE310T3View::OnDraw(CDC* pDC)
{
	CE310T3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	CClientDC dc(this);
	CRect a(20, 20, 200, 100);
	CRect b(600, 20, 700, 100);
	CRect c(300,20,500,100);
	dc.Rectangle(a);
	dc.Rectangle(b);
	dc.Rectangle(c);
	
}


// CE310T3View ���

#ifdef _DEBUG
void CE310T3View::AssertValid() const
{
	CView::AssertValid();
}

void CE310T3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CE310T3Doc* CE310T3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CE310T3Doc)));
	return (CE310T3Doc*)m_pDocument;
}
#endif //_DEBUG


// CE310T3View ��Ϣ�������


void CE310T3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CE310T3Doc*pDoc = GetDocument();
	CClientDC dc(this);
    CRect a(20, 20, 200, 100);
	CRect b(600, 20, 700, 100);
	CRect c(300, 20, 500, 100);
	//int r = rand() % 50 + 4;
	//pDoc->x = rand()%50+5;
	//pDoc->y = rand() % 40 + 5;
	CString s;
	if (a.PtInRect(CPoint(point.x, point.y)))
	{
		s.Format(_T("%d"), pDoc->x);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (c.PtInRect(CPoint(point.x, point.y)))
	{
		s.Format(_T("%d"), pDoc->y);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
s.Format(_T("�����Ч"));
	dc.TextOutW(point.x, point.y, s);
	}
		
	
	CView::OnLButtonDown(nFlags, point);
}


void CE310T3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CE310T3Doc*pDoc = GetDocument();
	CRect b(600, 20, 700, 100);
	CClientDC dc(this);
	//int k = pDoc->x + pDoc->y;
	CString s;
	if (b.PtInRect(CPoint(point.x, point.y)))
	{
		s.Format(_T("%d"), pDoc->z);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
