// MyChangeDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "MyChangeDlg.h"
#include "afxdialogex.h"


// MyChangeDlg �Ի���

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


// MyChangeDlg ��Ϣ�������


void MyChangeDlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyChangeDlg::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyChangeDlg::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
