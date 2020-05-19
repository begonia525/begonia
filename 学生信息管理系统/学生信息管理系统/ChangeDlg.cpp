// ChangeDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "ChangeDlg.h"
#include "afxdialogex.h"


// ChangeDlg 对话框

IMPLEMENT_DYNAMIC(ChangeDlg, CDialogEx)

//ChangeDlg::ChangeDlg(CWnd* pParent /*=NULL*/)
//	: CDialogEx(IDD_ADD, pParent)
//	, a(_T(""))
//	, b(_T(""))
//	, c(_T(""))
//	, d(_T(""))
//	, e(_T(""))
//	, f(_T(""))
//	, g(_T(""))
//	, h(_T(""))
//{

//}

//ChangeDlg::~ChangeDlg()
//{
//}

/*void ChangeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT9, a);
	DDX_Text(pDX, IDC_EDIT10, b);
	DDX_Text(pDX, IDC_EDIT11, c);
	DDX_Text(pDX, IDC_EDIT12, d);
	DDX_Text(pDX, IDC_EDIT13, e);
	DDX_Text(pDX, IDC_EDIT14, f);
	DDX_Text(pDX, IDC_EDIT15, g);
	DDX_Text(pDX, IDC_EDIT16, h);
}


BEGIN_MESSAGE_MAP(ChangeDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT14, &ChangeDlg::OnEnChangeEdit14)
END_MESSAGE_MAP()*/


// ChangeDlg 消息处理程序


void ChangeDlg::OnEnChangeEdit14()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
