// MyChangeDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "MyChangeDlg.h"
#include "afxdialogex.h"


// MyChangeDlg 对话框

IMPLEMENT_DYNAMIC(MyChangeDlg, CDialogEx)

MyChangeDlg::MyChangeDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, a(_T(""))
	, b(_T(""))
	, c(_T(""))
	, d(_T(""))
	, e(_T(""))
	, f(_T(""))
	, g(_T(""))
	, h(_T(""))
{

}

MyChangeDlg::~MyChangeDlg()
{
}

void MyChangeDlg::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(MyChangeDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &MyChangeDlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT5, &MyChangeDlg::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &MyChangeDlg::OnEnChangeEdit6)
END_MESSAGE_MAP()


// MyChangeDlg 消息处理程序


void MyChangeDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void MyChangeDlg::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void MyChangeDlg::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
