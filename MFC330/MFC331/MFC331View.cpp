
// MFC331View.cpp : CMFC331View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC331.h"
#endif

#include "MFC331Doc.h"
#include "MFC331View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC331View

IMPLEMENT_DYNCREATE(CMFC331View, CView)

BEGIN_MESSAGE_MAP(CMFC331View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC331View ����/����

CMFC331View::CMFC331View()
{
	// TODO: �ڴ˴���ӹ������
	cr.bottom = 200;
	cr.top = 0;
	cr.left = 0;
	cr.right = 400;
	
	s1 = " ";
	c = 0;
}

CMFC331View::~CMFC331View()
{
}

BOOL CMFC331View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC331View ����

void CMFC331View::OnDraw(CDC* pDC)
{
	CMFC331Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	

	pDC->Rectangle(cr);
}


// CMFC331View ���

#ifdef _DEBUG
void CMFC331View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC331View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC331Doc* CMFC331View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC331Doc)));
	return (CMFC331Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC331View ��Ϣ�������


void CMFC331View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if (0x0d == nChar) {//����س���
		s1.Empty();
		c.x += tm.tmWeight;
		c.y += tm.tmHeight;
		
	}
	else if (0x08 == nChar) {//�˸����ɾ������
		COLORREF clr = dc.SetTextColor(dc.GetBkColor());
		dc.TextOutW(c.x, c.y, s1);
		s1 = s1.Left(s1.GetLength() - 1);
		dc.SetTextColor(clr);
	}
	else {
		s1 = (char)nChar;
	}
	CSize sz = dc.GetTextExtent(s1);
	
	if (c.x<cr.right-2&&c.y<cr.bottom) {
 c.x = c.x + sz.cx;


		}
	else if(c.x=cr.right&&c.y<cr.bottom) {
		c.y = c.y + sz.cy;
		c.x = cr.left;
		
	
	}
	SetCaretPos(c);
	dc.TextOutW(c.x, c.y, s1);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFC331View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCaretPos(point);
	s1.Empty();
	c = point;
	CView::OnLButtonDown(nFlags, point);
}
