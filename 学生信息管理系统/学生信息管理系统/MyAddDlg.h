#pragma once


// MyAddDlg �Ի���

class MyAddDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyAddDlg)

public:
	MyAddDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyAddDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
