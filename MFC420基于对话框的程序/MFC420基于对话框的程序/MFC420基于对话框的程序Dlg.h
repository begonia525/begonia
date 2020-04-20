
// MFC420基于对话框的程序Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMFC420基于对话框的程序Dlg 对话框
class CMFC420基于对话框的程序Dlg : public CDialogEx
{
// 构造
public:
	CMFC420基于对话框的程序Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC420_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	CListBox x;
	afx_msg void OnBnClickedButton1();
	float c;
};
