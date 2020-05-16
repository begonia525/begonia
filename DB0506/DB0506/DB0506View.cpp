
// DB0506View.cpp : CDB0506View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "DB0506.h"
#endif

#include "DB0506Set.h"
#include "DB0506Doc.h"
#include "DB0506View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0506View

IMPLEMENT_DYNCREATE(CDB0506View, CRecordView)

BEGIN_MESSAGE_MAP(CDB0506View, CRecordView)
END_MESSAGE_MAP()

// CDB0506View ����/����

CDB0506View::CDB0506View()
	: CRecordView(IDD_DB0506_FORM)
	, ID(0)
	, name(_T(""))
	, sno(0)
	, age(0)
	, iphone(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CDB0506View::~CDB0506View()
{
}

void CDB0506View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CDB0506View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CDB0506View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_DB0506Set;
	CRecordView::OnInitialUpdate();

}


// CDB0506View ���

#ifdef _DEBUG
void CDB0506View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CDB0506View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CDB0506Doc* CDB0506View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDB0506Doc)));
	return (CDB0506Doc*)m_pDocument;
}
#endif //_DEBUG


// CDB0506View ���ݿ�֧��
CRecordset* CDB0506View::OnGetRecordset()
{
	return m_pSet;
}



// CDB0506View ��Ϣ�������
