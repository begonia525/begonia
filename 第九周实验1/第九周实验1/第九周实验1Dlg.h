
// �ھ���ʵ��1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"

// C�ھ���ʵ��1Dlg �Ի���
class C�ھ���ʵ��1Dlg : public CDialogEx
{
// ����


public:
 	C�ھ���ʵ��1Dlg(CWnd* pParent = NULL);	// ��׼���캯��
    
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY1_DIALOG };
#endif
	CString s1;
	int n;
	CStringArray str0;
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��
  //   public: ~C�ھ���ʵ��1Dlg();
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
	afx_msg void OnBnClickedButton1();
	CListBox LBox;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	CString sss;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnDestroy();
};
