// Dlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�б��0414.h"
#include "Dlg0.h"
#include "afxdialogex.h"
#include"�б��0414Doc.h"
#include"MainFrm.h"
#include"resource.h"
// Dlg0 �Ի���

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


// Dlg0 ��Ϣ�������


BOOL Dlg0::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	abc.AddString(str0);
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void Dlg0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int n = abc.GetCurSel();
	//abc.GetText(n, str);
}
