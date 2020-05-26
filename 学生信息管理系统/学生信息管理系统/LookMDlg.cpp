// LookMDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "学生信息管理系统.h"
#include "LookMDlg.h"
#include "afxdialogex.h"


// LookMDlg 对话框

IMPLEMENT_DYNAMIC(LookMDlg, CDialogEx)

LookMDlg::LookMDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
	//, ShowMessage(_T(""))
{

}

LookMDlg::~LookMDlg()
{
}

void LookMDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
//	DDX_Text(pDX, IDC_EDIT1, ShowMessage);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(LookMDlg, CDialogEx)
END_MESSAGE_MAP()


// LookMDlg 消息处理程序


BOOL LookMDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	for (int i = 0; i < str0.GetSize(); i++) {
		Lbox.AddString(str0[i]);
	}

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
