
// E310View.cpp : CE310View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "E310.h"
#endif

#include "E310Doc.h"
#include "E310View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CE310View

IMPLEMENT_DYNCREATE(CE310View, CView)

BEGIN_MESSAGE_MAP(CE310View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CE310View ����/����

CE310View::CE310View()
{
	// TODO: �ڴ˴���ӹ������

}

CE310View::~CE310View()
{
}

BOOL CE310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CE310View ����

void CE310View::OnDraw(CDC* /*pDC*/)
{
	CE310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CE310View ���

#ifdef _DEBUG
void CE310View::AssertValid() const
{
	CView::AssertValid();
}

void CE310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CE310Doc* CE310View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CE310Doc)));
	return (CE310Doc*)m_pDocument;
}
#endif //_DEBUG


// CE310View ��Ϣ�������


void CE310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString S;
	S.Format(_T("������ڱ�����"));
	dc.TextOutW(200, 400, S);
	CView::OnLButtonDown(nFlags, point);
}


void CE310View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString S;
	S.Format(_T("������ڱ�̧��"));
	dc.TextOutW(200, 500, S);
	CView::OnLButtonUp(nFlags, point);
}
