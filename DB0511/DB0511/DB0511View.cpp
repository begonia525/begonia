
// DB0511View.cpp : CDB0511View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CDB0511View 构造/析构

CDB0511View::CDB0511View()
	: CRecordView(IDD_DB0511_FORM)
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("E:\\黄飞飞的电脑\\VC\\");

}

CDB0511View::~CDB0511View()
{
}

void CDB0511View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CDB0511View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CDB0511View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_DB0511Set;
	CRecordView::OnInitialUpdate();

}


// CDB0511View 诊断

#ifdef _DEBUG
void CDB0511View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CDB0511View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CDB0511Doc* CDB0511View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDB0511Doc)));
	return (CDB0511Doc*)m_pDocument;
}
#endif //_DEBUG


// CDB0511View 数据库支持
CRecordset* CDB0511View::OnGetRecordset()
{
	return m_pSet;
}



// CDB0511View 消息处理程序


void CDB0511View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename,s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}


void CDB0511View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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