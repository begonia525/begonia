// Dlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "DB0511.h"
#include "Dlg0.h"
#include "afxdialogex.h"


// Dlg0 对话框

IMPLEMENT_DYNAMIC(Dlg0, CDialogEx)

Dlg0::Dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Dlg0::~Dlg0()
{
}

void Dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg0::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Dlg0 消息处理程序


void Dlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	
}


void Dlg0::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码

	CDC*pDC = GetDlgItem(IDC_STATIC)->GetDC();
	CImage image;
	image.Load(name);
	int x, y, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*image.GetWidth() / image.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		x = (rect.Width() - w) / 2;
		y = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		x = 0;
		y = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	image.Draw(pDC->m_hDC, x,y,w,h);
	ReleaseDC(pDC);
					   // 不为绘图消息调用 CDialogEx::OnPaint()
}
