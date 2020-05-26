#pragma once
#include "afxwin.h"


// LookMDlg 对话框

class LookMDlg : public CDialogEx
{
	DECLARE_DYNAMIC(LookMDlg)

public:
	LookMDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~LookMDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CStringArray str0;
	CListBox Lbox;
	virtual BOOL OnInitDialog();
};
