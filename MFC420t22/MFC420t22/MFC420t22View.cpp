
// MFC420t22View.cpp : CMFC420t22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC420t22.h"
#endif

#include "MFC420t22Doc.h"
#include "MFC420t22View.h"
#include"Dlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC420t22View

IMPLEMENT_DYNCREATE(CMFC420t22View, CView)

BEGIN_MESSAGE_MAP(CMFC420t22View, CView)
	ON_COMMAND(ID_INPUT, &CMFC420t22View::OnInput)
END_MESSAGE_MAP()

// CMFC420t22View ����/����

CMFC420t22View::CMFC420t22View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC420t22View::~CMFC420t22View()
{
}

BOOL CMFC420t22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC420t22View ����

void CMFC420t22View::OnDraw(CDC* pDC)
{
	CMFC420t22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CMFC420t22View ���

#ifdef _DEBUG
void CMFC420t22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC420t22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC420t22Doc* CMFC420t22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC420t22Doc)));
	return (CMFC420t22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC420t22View ��Ϣ�������


void CMFC420t22View::OnInput()
{
	// TODO: �ڴ���������������
	Dlg0 dlg;
	int r = dlg.DoModal();
	if(r==IDOK)
	{ 
		
		cr.top = 200;
		cr.left = 200;
		cr.right = 200 + 2 * dlg.a;
		cr.bottom = 200 + 2 * dlg.b;
		GetDC()->Ellipse(cr);
	}
}


