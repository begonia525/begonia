
// ѧ����Ϣ����ϵͳView.cpp : Cѧ����Ϣ����ϵͳView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ѧ����Ϣ����ϵͳ.h"
#endif

#include "ѧ����Ϣ����ϵͳSet.h"
#include "ѧ����Ϣ����ϵͳDoc.h"
#include "ѧ����Ϣ����ϵͳView.h"
#include"Mydlg.h";
#include"ADDdlg.h"
#include"ChangeDlg.h"
#include"MyAddDlg.h"
#include"MyChangeDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cѧ����Ϣ����ϵͳView

IMPLEMENT_DYNCREATE(Cѧ����Ϣ����ϵͳView, CRecordView)

BEGIN_MESSAGE_MAP(Cѧ����Ϣ����ϵͳView, CRecordView)
	ON_EN_CHANGE(IDC_EDIT2, &Cѧ����Ϣ����ϵͳView::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT6, &Cѧ����Ϣ����ϵͳView::OnEnChangeEdit6)
	ON_COMMAND(ID_RECORD_FIRST, &Cѧ����Ϣ����ϵͳView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cѧ����Ϣ����ϵͳView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cѧ����Ϣ����ϵͳView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cѧ����Ϣ����ϵͳView::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &Cѧ����Ϣ����ϵͳView::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_DELETE, &Cѧ����Ϣ����ϵͳView::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_ADD, &Cѧ����Ϣ����ϵͳView::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_BUTTON3, &Cѧ����Ϣ����ϵͳView::OnBnClickedButton3)
END_MESSAGE_MAP()

// Cѧ����Ϣ����ϵͳView ����/����

Cѧ����Ϣ����ϵͳView::Cѧ����Ϣ����ϵͳView()
	: CRecordView(IDD_MY_FORM)
	, name(_T(""))
	, sno(_T(""))
	, major(_T(""))
	, age(_T(""))
	, birth(_T(""))
	, phone(_T(""))
	, home(_T(""))
	, picture(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("E:\\�Ʒɷɵĵ���\\VCͼƬ\\");
}

Cѧ����Ϣ����ϵͳView::~Cѧ����Ϣ����ϵͳView()
{
}

void Cѧ����Ϣ����ϵͳView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
}

BOOL Cѧ����Ϣ����ϵͳView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cѧ����Ϣ����ϵͳView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_ѧ����Ϣ����ϵͳSet;
	CRecordView::OnInitialUpdate();

}


// Cѧ����Ϣ����ϵͳView ���

#ifdef _DEBUG
void Cѧ����Ϣ����ϵͳView::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cѧ����Ϣ����ϵͳView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cѧ����Ϣ����ϵͳDoc* Cѧ����Ϣ����ϵͳView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cѧ����Ϣ����ϵͳDoc)));
	return (Cѧ����Ϣ����ϵͳDoc*)m_pDocument;
}
#endif //_DEBUG


// Cѧ����Ϣ����ϵͳView ���ݿ�֧��
CRecordset* Cѧ����Ϣ����ϵͳView::OnGetRecordset()
{
	return m_pSet;
}



// Cѧ����Ϣ����ϵͳView ��Ϣ�������


void Cѧ����Ϣ����ϵͳView::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Cѧ����Ϣ����ϵͳView::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Cѧ����Ϣ����ϵͳView::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString s;
	GetDlgItemText(IDC_EDIT8, s);//��ȡ�Ի���༭�ؼ�������
	filename = path + s;
//	Invalidate();
	draw_pic(filename);
}


void Cѧ����Ϣ����ϵͳView::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	CString  s;
	GetDlgItemText(IDC_EDIT8, s);
	filename = path + s;
	draw_pic(filename);
	//Invalidate();
}


void Cѧ����Ϣ����ϵͳView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	CString s;
	GetDlgItemText(IDC_EDIT8, s);
	filename = path + s;
	draw_pic(filename);
		//Invalidate();
}


void Cѧ����Ϣ����ϵͳView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString  s;
	GetDlgItemText(IDC_EDIT8, s);
	filename = path + s;
	draw_pic(filename);
	//Invalidate();
}

void Cѧ����Ϣ����ϵͳView::draw_pic(CString file)
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

void Cѧ����Ϣ����ϵͳView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	/*CImage img;
	img.Load(filename);
	CDC*pDC = GetDlgItem(IDC_STATIC)->GetDC();
	img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	
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
	ReleaseDC(pDC);*/
}


void Cѧ����Ϣ����ϵͳView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydlg dlg;
	dlg.name = filename;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
	
}


void Cѧ����Ϣ����ϵͳView::OnBnClickedDelete()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void Cѧ����Ϣ����ϵͳView::OnBnClickedAdd()//����
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MyAddDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{   
		CString a, b, c, d, e, f, g,h;
		a = dlg.a;
		b = dlg.b;
		c = dlg.c;
		d = dlg.d;
		e = dlg.e;
		f = dlg.f;
		g = dlg.g;
		h = dlg.h;
		m_pSet->AddNew();
		m_pSet->column1 = a;
		m_pSet->column2 = b;
		m_pSet->column3 = c;
		m_pSet->column4 = d;
		m_pSet->column5 = e;
		m_pSet->column6 = f;
		m_pSet->column7 = g;
		m_pSet->column8 = h;
		m_pSet->Update();
		UpdateData(false);
	}
}


void Cѧ����Ϣ����ϵͳView::OnBnClickedButton3()//ɾ��
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	CString s1, s2, s3, s4, s5, s6, s7, s8;
	GetDlgItemText(IDC_EDIT1, s1);
	GetDlgItemText(IDC_EDIT2, s2);
	GetDlgItemText(IDC_EDIT3, s3);
	GetDlgItemText(IDC_EDIT4, s4);
	GetDlgItemText(IDC_EDIT5, s5);
	GetDlgItemText(IDC_EDIT6, s6);
	GetDlgItemText(IDC_EDIT7, s7);
	GetDlgItemText(IDC_EDIT8, s8);
	MyChangeDlg mydlg;
	mydlg.a = s1;
	mydlg.b = s2;
	mydlg.c = s3;
	mydlg.d = s4;
	mydlg.e = s5;
	mydlg.f = s6;
	mydlg.g = s7;
	mydlg.h = s8;
	int r = mydlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->Edit();
		m_pSet->column1 = mydlg.a;
		m_pSet->column2 = mydlg.b;
		m_pSet->column3 = mydlg.c;
		m_pSet->column4 = mydlg.d;
		m_pSet->column5 = mydlg.e;
		m_pSet->column6 = mydlg.f;
		m_pSet->column7 = mydlg.g;
		m_pSet->column8 = mydlg.h;
		m_pSet->Update();
		UpdateData(false);
	}
}
