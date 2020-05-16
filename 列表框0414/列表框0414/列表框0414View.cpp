
// �б��0414View.cpp : C�б��0414View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�б��0414.h"
#endif

#include "�б��0414Doc.h"
#include "�б��0414View.h"
#include"Dlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�б��0414View

IMPLEMENT_DYNCREATE(C�б��0414View, CView)

BEGIN_MESSAGE_MAP(C�б��0414View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_FILE_OPEN, &C�б��0414View::OnFileOpen)
	ON_COMMAND(ID_32771, &C�б��0414View::On32771)
END_MESSAGE_MAP()

// C�б��0414View ����/����

C�б��0414View::C�б��0414View()
{
	// TODO: �ڴ˴���ӹ������

}

C�б��0414View::~C�б��0414View()
{
}

BOOL C�б��0414View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�б��0414View ����

void C�б��0414View::OnDraw(CDC* pDC)
{
	C�б��0414Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	pDC->TextOutW(20, 30, _T("˫�������������ļ�ѡ��Ի���"));
}


// C�б��0414View ���

#ifdef _DEBUG
void C�б��0414View::AssertValid() const
{
	CView::AssertValid();
}

void C�б��0414View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�б��0414Doc* C�б��0414View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�б��0414Doc)));
	return (C�б��0414Doc*)m_pDocument;
}
#endif //_DEBUG


// C�б��0414View ��Ϣ�������


void C�б��0414View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog dlg(true);
	int r = dlg.DoModal();
	CClientDC dc(this);
	C�б��0414Doc*pDoc = GetDocument();
	pDoc->name = dlg.GetPathName();
	if (r == IDOK)
	{

		dc.TextOutW(200, 200, pDoc->name);
	}

	CView::OnLButtonDblClk(nFlags, point);
}


void C�б��0414View::OnFileOpen()
{
	// TODO: �ڴ���������������
	

}


void C�б��0414View::On32771()
{
	// TODO: �ڴ���������������
	C�б��0414Doc*pDoc = GetDocument();
	Dlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		GetDC()->TextOutW(300, 400, dlg.str);
	}
}
