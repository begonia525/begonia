#pragma once


// MyChangeDlg �Ի���

class MyChangeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyChangeDlg)

public:
	MyChangeDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyChangeDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
