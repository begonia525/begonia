// MyAddDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "MyAddDlg.h"
#include "afxdialogex.h"


// MyAddDlg �Ի���

IMPLEMENT_DYNAMIC(MyAddDlg, CDialogEx)

MyAddDlg::MyAddDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
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

MyAddDlg::~MyAddDlg()
{
}

void MyAddDlg::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(MyAddDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT6, &MyAddDlg::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT3, &MyAddDlg::OnEnChangeEdit3)
END_MESSAGE_MAP()


// MyAddDlg ��Ϣ�������


void MyAddDlg::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyAddDlg::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
