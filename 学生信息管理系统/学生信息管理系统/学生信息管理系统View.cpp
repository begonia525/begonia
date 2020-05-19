
// 学生信息管理系统View.cpp : C学生信息管理系统View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "学生信息管理系统.h"
#endif

#include "学生信息管理系统Set.h"
#include "学生信息管理系统Doc.h"
#include "学生信息管理系统View.h"
#include"Mydlg.h";
#include"ADDdlg.h"
#include"ChangeDlg.h"
#include"MyAddDlg.h"
#include"MyChangeDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C学生信息管理系统View

IMPLEMENT_DYNCREATE(C学生信息管理系统View, CRecordView)

BEGIN_MESSAGE_MAP(C学生信息管理系统View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT2, &C学生信息管理系统View::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT6, &C学生信息管理系统View::OnEnChangeEdit6)
	ON_COMMAND(ID_RECORD_FIRST, &C学生信息管理系统View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C学生信息管理系统View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C学生信息管理系统View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C学生信息管理系统View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &C学生信息管理系统View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_DELETE, &C学生信息管理系统View::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_ADD, &C学生信息管理系统View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_BUTTON3, &C学生信息管理系统View::OnBnClickedButton3)
END_MESSAGE_MAP()

// C学生信息管理系统View 构造/析构

C学生信息管理系统View::C学生信息管理系统View()
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
	// TODO: 在此处添加构造代码
	path = _T("E:\\黄飞飞的电脑\\VC图片\\");
}

C学生信息管理系统View::~C学生信息管理系统View()
{
}

void C学生信息管理系统View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
}

BOOL C学生信息管理系统View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C学生信息管理系统View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_学生信息管理系统Set;
	CRecordView::OnInitialUpdate();

}


// C学生信息管理系统View 诊断

#ifdef _DEBUG
void C学生信息管理系统View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C学生信息管理系统View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C学生信息管理系统Doc* C学生信息管理系统View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C学生信息管理系统Doc)));
	return (C学生信息管理系统Doc*)m_pDocument;
}
#endif //_DEBUG


// C学生信息管理系统View 数据库支持
CRecordset* C学生信息管理系统View::OnGetRecordset()
{
	return m_pSet;
}



// C学生信息管理系统View 消息处理程序


void C学生信息管理系统View::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void C学生信息管理系统View::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void C学生信息管理系统View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString s;
	GetDlgItemText(IDC_EDIT8, s);//获取对话框编辑控件的内容
	filename = path + s;
//	Invalidate();
	draw_pic(filename);
}


void C学生信息管理系统View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
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


void C学生信息管理系统View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
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


void C学生信息管理系统View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	CString  s;
	GetDlgItemText(IDC_EDIT8, s);
	filename = path + s;
	draw_pic(filename);
	//Invalidate();
}

void C学生信息管理系统View::draw_pic(CString file)
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

void C学生信息管理系统View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
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


void C学生信息管理系统View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Mydlg dlg;
	dlg.name = filename;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
	
}


void C学生信息管理系统View::OnBnClickedDelete()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C学生信息管理系统View::OnBnClickedAdd()//增加
{
	// TODO: 在此添加控件通知处理程序代码
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


void C学生信息管理系统View::OnBnClickedButton3()//删除
{
	// TODO: 在此添加控件通知处理程序代码
	
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
