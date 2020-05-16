
// DB0511View.cpp : CDB0511View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "DB0511.h"
#endif

#include "DB0511Set.h"
#include "DB0511Doc.h"
#include "DB0511View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0511View

IMPLEMENT_DYNCREATE(CDB0511View, CRecordView)

BEGIN_MESSAGE_MAP(CDB0511View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CDB0511View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CDB0511View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CDB0511View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CDB0511View::OnRecordLast)
END_MESSAGE_MAP()

// CDB0511View ����/����

CDB0511View::CDB0511View()
	: CRecordView(IDD_DB0511_FORM)
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("E:\\�Ʒɷɵĵ���\\VC\\");

}

CDB0511View::~CDB0511View()
{
}

void CDB0511View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CDB0511View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CDB0511View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_DB0511Set;
	CRecordView::OnInitialUpdate();

}


// CDB0511View ���

#ifdef _DEBUG
void CDB0511View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CDB0511View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CDB0511Doc* CDB0511View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDB0511Doc)));
	return (CDB0511Doc*)m_pDocument;
}
#endif //_DEBUG


// CDB0511View ���ݿ�֧��
CRecordset* CDB0511View::OnGetRecordset()
{
	return m_pSet;
}



// CDB0511View ��Ϣ�������


void CDB0511View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename,s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}


void CDB0511View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
	
}


void CDB0511View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}


void CDB0511View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}
void CDB0511View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC*pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int x, y, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		x = (rect.Width() - w) / 2;
		y = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		x = 0;
		y = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, x, y, w, h);
	ReleaseDC(pDC);

}