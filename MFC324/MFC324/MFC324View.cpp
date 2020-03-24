
// MFC324View.cpp : CMFC324View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC324.h"
#endif

#include "MFC324Doc.h"
#include "MFC324View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC324View

IMPLEMENT_DYNCREATE(CMFC324View, CView)

BEGIN_MESSAGE_MAP(CMFC324View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMFC324View::OnShowname)
	ON_COMMAND(ID_LINE, &CMFC324View::OnLine)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_RECT, &CMFC324View::OnRect)
	ON_COMMAND(ID_CIRCLE, &CMFC324View::OnCircle)
END_MESSAGE_MAP()

// CMFC324View ����/����

CMFC324View::CMFC324View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFC324View::~CMFC324View()
{
}

BOOL CMFC324View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC324View ����

void CMFC324View::OnDraw(CDC* pDC)
{
	CMFC324Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMFC324View ���

#ifdef _DEBUG
void CMFC324View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC324View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC324Doc* CMFC324View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC324Doc)));
	return (CMFC324Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC324View ��Ϣ�������


void CMFC324View::OnShowname()
{
	// TODO: �ڴ���������������
	CString S;
	S = _T("�Ʒɷ�");
	CClientDC dc(this);
	dc.TextOutW(100, 20,S);
}





void CMFC324View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC324Doc*pDoc = GetDocument();
	c1 = point;
	CView::OnLButtonDown(nFlags, point);
}

void CMFC324View::OnLine()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	dc.MoveTo(c1);
	dc.LineTo(c2);
	
	
}

void CMFC324View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	c2 = point;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC324View::OnRect()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect cr(c1.x, c1.y, c2.x, c2.y);
	dc.Rectangle(cr);
}


void CMFC324View::OnCircle()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect cr(c1.x, c1.y, c2.x, c2.y);
	dc.Ellipse(cr);
}
