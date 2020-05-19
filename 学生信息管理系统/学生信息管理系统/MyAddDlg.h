#pragma once


// MyAddDlg 对话框

class MyAddDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyAddDlg)

public:
	MyAddDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyAddDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CString b;
	CString c;
	CString d;
	CString e;
	afx_msg void OnEnChangeEdit6();
	CString f;
	CString g;
	CString h;
	afx_msg void OnEnChangeEdit3();
};
