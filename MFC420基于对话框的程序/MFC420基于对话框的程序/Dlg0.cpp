// Dlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC420���ڶԻ���ĳ���.h"
#include "Dlg0.h"
#include "afxdialogex.h"


// Dlg0 �Ի���

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


// Dlg0 ��Ϣ�������


void Dlg0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

}
