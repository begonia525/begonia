#pragma once


// MyChangeDlg 对话框

class MyChangeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyChangeDlg)

public:
	MyChangeDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyChangeDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString a;
	CString b;
	CString c;
	CString d;
	afx_msg void OnEnChangeEdit5();
	CString e;
	CString f;
	CString g;
	CString h;
	afx_msg void OnEnChangeEdit6();
};
