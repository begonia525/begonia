
// 3t1View.cpp : CMy3t1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3t1.h"
#endif

#include "3t1Doc.h"
#include "3t1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3t1View

IMPLEMENT_DYNCREATE(CMy3t1View, CView)

BEGIN_MESSAGE_MAP(CMy3t1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3t1View ����/����

CMy3t1View::CMy3t1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3t1View::~CMy3t1View()
{
}

BOOL CMy3t1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3t1View ����

void CMy3t1View::OnDraw(CDC* /*pDC*/)
{
	CMy3t1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3t1View ���

#ifdef _DEBUG
void CMy3t1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3t1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3t1Doc* CMy3t1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3t1Doc)));
	return (CMy3t1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3t1View ��Ϣ�������


void CMy3t1View::OnLButtonDown(UINT nFlags, CPoint point)
{

	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	//int a = rand() % 50 + 5;
	//int b = rand() % 50 + 7;
	//CClientDC dc(this);
	//CRect cr(point.x - a, point.y - b,point.x+a,point.y+b);
	this->GetClientRect(&cr);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
