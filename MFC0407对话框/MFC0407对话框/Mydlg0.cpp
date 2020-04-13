// Mydlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC0407对话框.h"
#include "Mydlg0.h"
#include "afxdialogex.h"


// Mydlg0 对话框

IMPLEMENT_DYNAMIC(Mydlg0, CDialogEx)

Mydlg0::Mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(_T(""))
{

}

Mydlg0::~Mydlg0()
{
}

void Mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
}


BEGIN_MESSAGE_MAP(Mydlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg0 消息处理程序


void Mydlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CString z;
	z = x;
	x = y;
	y = z;
	UpdateData(false);
}
