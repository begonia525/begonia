
// MFC420�ĵ���ͼView.cpp : CMFC420�ĵ���ͼView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC420�ĵ���ͼ.h"
#endif

#include "MFC420�ĵ���ͼDoc.h"
#include "MFC420�ĵ���ͼView.h"
#include"Dlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC420�ĵ���ͼView

IMPLEMENT_DYNCREATE(CMFC420�ĵ���ͼView, CView)

BEGIN_MESSAGE_MAP(CMFC420�ĵ���ͼView, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_DRAW, &CMFC420�ĵ���ͼView::OnDraw)
	
END_MESSAGE_MAP()

// CMFC420�ĵ���ͼView ����/����

CMFC420�ĵ���ͼView::CMFC420�ĵ���ͼView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC420�ĵ���ͼView::~CMFC420�ĵ���ͼView()
{
}

BOOL CMFC420�ĵ���ͼView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC420�ĵ���ͼView ����

void CMFC420�ĵ���ͼView::OnDraw(CDC* pDC)
{
	CMFC420�ĵ���ͼDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(cr);
	Invalidate();
}


// CMFC420�ĵ���ͼView ���

#ifdef _DEBUG
void CMFC420�ĵ���ͼView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC420�ĵ���ͼView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC420�ĵ���ͼDoc* CMFC420�ĵ���ͼView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC420�ĵ���ͼDoc)));
	return (CMFC420�ĵ���ͼDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC420�ĵ���ͼView ��Ϣ�������


void CMFC420�ĵ���ͼView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	cr.right = point.x;
	cr.bottom = point.y;
	CView::OnMouseMove(nFlags, point);
}


void CMFC420�ĵ���ͼView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left = point.x;
	cr.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMFC420�ĵ���ͼView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
    
	CView::OnLButtonUp(nFlags, point);
}


void CMFC420�ĵ���ͼView::OnDraw()
{
	// TODO: �ڴ���������������
	
}


void CMFC420�ĵ���ͼView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
}
