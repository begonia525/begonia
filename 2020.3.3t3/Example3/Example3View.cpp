
// Example3View.cpp : CExample3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Example3.h"
#endif

#include "Example3Doc.h"
#include "Example3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExample3View

IMPLEMENT_DYNCREATE(CExample3View, CView)

BEGIN_MESSAGE_MAP(CExample3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CExample3View ����/����

CExample3View::CExample3View()
{
	// TODO: �ڴ˴���ӹ������

}

CExample3View::~CExample3View()
{
}

BOOL CExample3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExample3View ����

void CExample3View::OnDraw(CDC* /*pDC*/)
{
	CExample3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CExample3View ���

#ifdef _DEBUG
void CExample3View::AssertValid() const
{
	CView::AssertValid();
}

void CExample3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExample3Doc* CExample3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExample3Doc)));
	return (CExample3Doc*)m_pDocument;
}
#endif //_DEBUG


// CExample3View ��Ϣ�������


void CExample3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CExample3Doc* pDoc= GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CExample3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CExample3Doc* pDoc= GetDocument();
	int b = pDoc->count;
	CString D;
	D.Format(_T("%d"), b);
	CClientDC dc(this);
	dc.TextOutW(100, 200, D);
	CView::OnRButtonDown(nFlags, point);
}
