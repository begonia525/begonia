
// MFC0413t3��ʱ��View.cpp : CMFC0413t3��ʱ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0413t3��ʱ��.h"
#endif

#include "MFC0413t3��ʱ��Doc.h"
#include "MFC0413t3��ʱ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0413t3��ʱ��View

IMPLEMENT_DYNCREATE(CMFC0413t3��ʱ��View, CView)

BEGIN_MESSAGE_MAP(CMFC0413t3��ʱ��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFC0413t3��ʱ��View ����/����

CMFC0413t3��ʱ��View::CMFC0413t3��ʱ��View()
{
	// TODO: �ڴ˴���ӹ������
	c.left = 400;
	c.top = 200;
	c.right = 450;
	c.bottom = 250;
	t = true;
}

CMFC0413t3��ʱ��View::~CMFC0413t3��ʱ��View()
{
}

BOOL CMFC0413t3��ʱ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0413t3��ʱ��View ����

void CMFC0413t3��ʱ��View::OnDraw(CDC* pDC)
{
	CMFC0413t3��ʱ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(c);
	CRect rect;
	GetClientRect(&rect);
	if (c.right == 1000 )t = false;
	if (c.left == 0)t = true;
}


// CMFC0413t3��ʱ��View ���

#ifdef _DEBUG
void CMFC0413t3��ʱ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0413t3��ʱ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0413t3��ʱ��Doc* CMFC0413t3��ʱ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0413t3��ʱ��Doc)));
	return (CMFC0413t3��ʱ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0413t3��ʱ��View ��Ϣ�������


void CMFC0413t3��ʱ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetTimer(1, rand() % 50 + 100, NULL);
	
	
	
	
	CView::OnLButtonDown(nFlags, point);
}


void CMFC0413t3��ʱ��View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (t) {
	c.left += 10;
	c.right += 10;
	Invalidate();

	}
	else {
		c.left -= 10;
		c.right -= 10;
		Invalidate();
	}
	
	CView::OnTimer(nIDEvent);
}


void CMFC0413t3��ʱ��View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}
