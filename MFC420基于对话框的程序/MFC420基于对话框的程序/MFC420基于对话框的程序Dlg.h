
// MFC420���ڶԻ���ĳ���Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMFC420���ڶԻ���ĳ���Dlg �Ի���
class CMFC420���ڶԻ���ĳ���Dlg : public CDialogEx
{
// ����
public:
	CMFC420���ڶԻ���ĳ���Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC420_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
