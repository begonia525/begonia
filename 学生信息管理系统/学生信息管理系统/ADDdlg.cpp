// ADDdlg.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "ADDdlg.h"
#include "afxdialogex.h"


// ADDdlg 对话框
//IMPLEMENT_DYNAMIC(ADDdlg, CDialogEx)

//ADDdlg::ADDdlg(CWnd* pParent /*=NULL*/)
/*	: CDialogEx(IDD_ADD, pParent)
	, a(_T(""))
	, b(_T(""))
	, c(_T(""))
	, e(_T(""))
	, g(_T(""))
	, h(_T(""))
{

}

ADDdlg::~ADDdlg()
{
}

void ADDdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDX_Text(pDX, IDC_EDIT4, d);
	DDX_Text(pDX, IDC_EDIT5, e);
	DDX_Text(pDX, IDC_EDIT6, f);
	DDX_Text(pDX, IDC_EDIT7, g);
	DDX_Text(pDX, IDC_EDIT8, h);
}
*/

BEGIN_MESSAGE_MAP(ADDdlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &ADDdlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &ADDdlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &ADDdlg::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &ADDdlg::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT7, &ADDdlg::OnEnChangeEdit7)
END_MESSAGE_MAP()


// ADDdlg 消息处理程序


void ADDdlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ADDdlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ADDdlg::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ADDdlg::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ADDdlg::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
