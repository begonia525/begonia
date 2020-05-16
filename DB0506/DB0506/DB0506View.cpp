
// DB0506View.cpp : CDB0506View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CDB0506View 构造/析构

CDB0506View::CDB0506View()
	: CRecordView(IDD_DB0506_FORM)
	, ID(0)
	, name(_T(""))
	, sno(0)
	, age(0)
	, iphone(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CDB0506View::~CDB0506View()
{
}

void CDB0506View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CDB0506View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CDB0506View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_DB0506Set;
	CRecordView::OnInitialUpdate();

}


// CDB0506View 诊断

#ifdef _DEBUG
void CDB0506View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CDB0506View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CDB0506Doc* CDB0506View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDB0506Doc)));
	return (CDB0506Doc*)m_pDocument;
}
#endif //_DEBUG


// CDB0506View 数据库支持
CRecordset* CDB0506View::OnGetRecordset()
{
	return m_pSet;
}



// CDB0506View 消息处理程序
