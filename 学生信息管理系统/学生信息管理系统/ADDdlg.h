#pragma once
#include "afxwin.h"


// ADDdlg 对话框

class ADDdlg : public CDialogEx
{
	DECLARE_DYNAMIC(ADDdlg)

public:
	ADDdlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADDdlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString a;
	afx_msg void OnEnChangeEdit2();
	CString b;
	CString c;
	CString d;
	CString e;
	CString f;
	CString g;
	CString h;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit7();
};
