// Mydlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC0413t4�Ի���.h"
#include "Mydlg0.h"
#include "afxdialogex.h"


// Mydlg0 �Ի���

IMPLEMENT_DYNAMIC(Mydlg0, CDialogEx)

Mydlg0::Mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
	, b(0)
	, c(_T(""))
{

}

Mydlg0::~Mydlg0()
{
}

void Mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
}


BEGIN_MESSAGE_MAP(Mydlg0, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &Mydlg0::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg0 ��Ϣ�������


void Mydlg0::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString d;
	d.Format(_T("%d"), b);
	c = a+d;
	UpdateData(false);
}
