// Dlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "列表框0414.h"
#include "Dlg0.h"
#include "afxdialogex.h"
#include"列表框0414Doc.h"
#include"MainFrm.h"
#include"resource.h"
// Dlg0 对话框

IMPLEMENT_DYNAMIC(Dlg0, CDialogEx)

Dlg0::Dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str0(_T(""))
{

}

Dlg0::~Dlg0()
{
}

void Dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, abc);
	DDX_Text(pDX, IDC_EDIT1, str0);
}


BEGIN_MESSAGE_MAP(Dlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dlg0 消息处理程序


BOOL Dlg0::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	abc.AddString(str0);
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Dlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int n = abc.GetCurSel();
	//abc.GetText(n, str);
}
