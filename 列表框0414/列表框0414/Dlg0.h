#pragma once
#include "afxwin.h"


// Dlg0 �Ի���

class Dlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg0)

public:
	Dlg0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dlg0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif
	CString str;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox abc;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
};
