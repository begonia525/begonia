// LookMDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "LookMDlg.h"
#include "afxdialogex.h"


// LookMDlg �Ի���

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


// LookMDlg ��Ϣ�������


BOOL LookMDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	for (int i = 0; i < str0.GetSize(); i++) {
		Lbox.AddString(str0[i]);
	}

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
