
// Example2View.cpp : CExample2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Example2.h"
#endif

#include "Example2Doc.h"
#include "Example2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExample2View

IMPLEMENT_DYNCREATE(CExample2View, CView)

BEGIN_MESSAGE_MAP(CExample2View, CView)
END_MESSAGE_MAP()

// CExample2View ����/����

CExample2View::CExample2View()
{
	// TODO: �ڴ˴���ӹ������

}

CExample2View::~CExample2View()
{
}

BOOL CExample2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExample2View ����

void CExample2View::OnDraw(CDC* pDC)
{
	CExample2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int b = pDoc->A;
	CString Str;
	Str.Format(_T("%d"), b);
	pDC->TextOutW(100, 200, Str);
	pDC->TextOutW(200, 300, pDoc->S);
}


// CExample2View ���

#ifdef _DEBUG
void CExample2View::AssertValid() const
{
	CView::AssertValid();
}

void CExample2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExample2Doc* CExample2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExample2Doc)));
	return (CExample2Doc*)m_pDocument;
}
#endif //_DEBUG


// CExample2View ��Ϣ�������
