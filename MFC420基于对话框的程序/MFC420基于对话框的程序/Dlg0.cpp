// Dlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC420基于对话框的程序.h"
#include "Dlg0.h"
#include "afxdialogex.h"


// Dlg0 对话框

IMPLEMENT_DYNAMIC(Dlg0, CDialogEx)

Dlg0::Dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	
	, y(0)
{

}

Dlg0::~Dlg0()
{
}

void Dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	
	DDX_Text(pDX, IDC_EDIT1, y);
}


BEGIN_MESSAGE_MAP(Dlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dlg0 消息处理程序


void Dlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

}
