
// MFC323View.cpp : CMFC323View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC323.h"
#endif

#include "MFC323Doc.h"
#include "MFC323View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC323View

IMPLEMENT_DYNCREATE(CMFC323View, CView)

BEGIN_MESSAGE_MAP(CMFC323View, CView)
	ON_COMMAND(ID_SHOWCIRCLE, &CMFC323View::OnShowcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC323View ����/����

CMFC323View::CMFC323View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
}

CMFC323View::~CMFC323View()
{
}

BOOL CMFC323View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC323View ����

void CMFC323View::OnDraw(CDC* /*pDC*/)
{
	CMFC323Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	

}


// CMFC323View ���

#ifdef _DEBUG
void CMFC323View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC323View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC323Doc* CMFC323View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC323Doc)));
	return (CMFC323Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC323View ��Ϣ�������


void CMFC323View::OnShowcircle()
{
	// TODO: �ڴ���������������
	GetClientRect(c);
	int a = (c.top + c.bottom) / 2;
	int b = ((c.left + c.right) - 2 * a) / 2;
	cr.left = c.left + b + 300;
	cr.top = c.top + 300;
	cr.right = c.right - b - 200;
	cr.bottom = c.bottom - 200;
//SetTimer(1, 1000, NULL);
	CClientDC dc(this);
	for (int i = 0; i < 20; i++) {
		dc.Ellipse(cr);
		cr.left -= 10;
		cr.top -= 10;
		cr.right += 10;
		cr.bottom += 10;

}
	
	
	
}


void CMFC323View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

//	cr.left -= 10;
//	cr.top -= 10;
	//cr.right += 10;
	//cr.bottom+= 10;
	//Invalidate();
	CView::OnTimer(nIDEvent);
}
