
// MFC317t1View.cpp : CMFC317t1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC317t1.h"
#endif

#include "MFC317t1Doc.h"
#include "MFC317t1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC317t1View

IMPLEMENT_DYNCREATE(CMFC317t1View, CView)

BEGIN_MESSAGE_MAP(CMFC317t1View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC317t1View ����/����

CMFC317t1View::CMFC317t1View()
{
	// TODO: �ڴ˴���ӹ������
	c.left = 200;
	c.top = 200;
	c.right =250;
	c.bottom = 250;
	set = true;
}

CMFC317t1View::~CMFC317t1View()
{
}

BOOL CMFC317t1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC317t1View ����

void CMFC317t1View::OnDraw(CDC* pDC)
{
	CMFC317t1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(cr);

	SetTimer(1, rand() % 500 + 80, NULL);


	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(c);
	//pDC->Rectangle(cr);

}


// CMFC317t1View ���

#ifdef _DEBUG
void CMFC317t1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC317t1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC317t1Doc* CMFC317t1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC317t1Doc)));
	return (CMFC317t1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC317t1View ��Ϣ�������


void CMFC317t1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	   c.top += 10;
		c.bottom += 10;
		
        Invalidate();
	
		
		
		
	
	
	CView::OnTimer(nIDEvent);
}
