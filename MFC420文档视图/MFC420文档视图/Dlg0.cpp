// Dlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC420�ĵ���ͼ.h"
#include "Dlg0.h"
#include "afxdialogex.h"


// Dlg0 �Ի���

IMPLEMENT_DYNAMIC(Dlg0, CDialogEx)

Dlg0::Dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
{

}

Dlg0::~Dlg0()
{
}

void Dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDV_MinMaxInt(pDX, a, 5, 1000);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDV_MinMaxInt(pDX, b, 5, 1000);
}


BEGIN_MESSAGE_MAP(Dlg0, CDialogEx)
END_MESSAGE_MAP()


// Dlg0 ��Ϣ�������
