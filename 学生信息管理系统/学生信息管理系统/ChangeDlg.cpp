// ChangeDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "ChangeDlg.h"
#include "afxdialogex.h"


// ChangeDlg �Ի���

IMPLEMENT_DYNAMIC(ChangeDlg, CDialogEx)

//ChangeDlg::ChangeDlg(CWnd* pParent /*=NULL*/)
//	: CDialogEx(IDD_ADD, pParent)
//	, a(_T(""))
//	, b(_T(""))
//	, c(_T(""))
//	, d(_T(""))
//	, e(_T(""))
//	, f(_T(""))
//	, g(_T(""))
//	, h(_T(""))
//{

//}

//ChangeDlg::~ChangeDlg()
//{
//}

/*void ChangeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT9, a);
	DDX_Text(pDX, IDC_EDIT10, b);
	DDX_Text(pDX, IDC_EDIT11, c);
	DDX_Text(pDX, IDC_EDIT12, d);
	DDX_Text(pDX, IDC_EDIT13, e);
	DDX_Text(pDX, IDC_EDIT14, f);
	DDX_Text(pDX, IDC_EDIT15, g);
	DDX_Text(pDX, IDC_EDIT16, h);
}


BEGIN_MESSAGE_MAP(ChangeDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT14, &ChangeDlg::OnEnChangeEdit14)
END_MESSAGE_MAP()*/


// ChangeDlg ��Ϣ�������


void ChangeDlg::OnEnChangeEdit14()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
