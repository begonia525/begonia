
// Example1View.cpp : CExample1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Example1.h"
#endif

#include "Example1Doc.h"
#include "Example1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExample1View

IMPLEMENT_DYNCREATE(CExample1View, CView)

BEGIN_MESSAGE_MAP(CExample1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CExample1View ����/����

CExample1View::CExample1View()
{
	// TODO: �ڴ˴���ӹ������

}

CExample1View::~CExample1View()
{
}

BOOL CExample1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExample1View ����

void CExample1View::OnDraw(CDC* pDC)
{
	CExample1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//CString S;
	//S.Format(_T("����***"));
	//int A= 80;
	//CString b;
	//b.Format(_T("%d"), A);
	//pDC->TextOutW(200, 400,S);
	//pDC->TextOutW(200, 300, b);
}


// CExample1View ���

#ifdef _DEBUG
void CExample1View::AssertValid() const
{
	CView::AssertValid();
}

void CExample1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExample1Doc* CExample1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExample1Doc)));
	return (CExample1Doc*)m_pDocument;
}
#endif //_DEBUG


// CExample1View ��Ϣ�������


void CExample1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString S;
	S.Format(_T("������ڱ�����"));
	dc.TextOutW(200, 400, S);
	CView::OnLButtonDown(nFlags, point);
}


void CExample1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString S;
	S.Format(_T("������ڱ�̧��"));
	dc.TextOutW(200, 500, S);
	CView::OnLButtonUp(nFlags, point);
}
