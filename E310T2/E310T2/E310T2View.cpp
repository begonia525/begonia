
// E310T2View.cpp : CE310T2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "E310T2.h"
#endif

#include "E310T2Doc.h"
#include "E310T2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CE310T2View

IMPLEMENT_DYNCREATE(CE310T2View, CView)

BEGIN_MESSAGE_MAP(CE310T2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CE310T2View ����/����

CE310T2View::CE310T2View()
{
	// TODO: �ڴ˴���ӹ������

}

CE310T2View::~CE310T2View()
{
}

BOOL CE310T2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CE310T2View ����

void CE310T2View::OnDraw(CDC* /*pDC*/)
{
	CE310T2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CE310T2View ���

#ifdef _DEBUG
void CE310T2View::AssertValid() const
{
	CView::AssertValid();
}

void CE310T2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CE310T2Doc* CE310T2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CE310T2Doc)));
	return (CE310T2Doc*)m_pDocument;
}
#endif //_DEBUG


// CE310T2View ��Ϣ�������


void CE310T2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CE310T2Doc*pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 300, pDoc->s);
	CView::OnLButtonDown(nFlags, point);
}
