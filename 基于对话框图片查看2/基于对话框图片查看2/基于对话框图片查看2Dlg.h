
// ���ڶԻ���ͼƬ�鿴2Dlg.h : ͷ�ļ�
//

#pragma once


// C���ڶԻ���ͼƬ�鿴2Dlg �Ի���
class C���ڶԻ���ͼƬ�鿴2Dlg : public CDialogEx
{
// ����
public:
	C���ڶԻ���ͼƬ�鿴2Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY2_DIALOG };
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
};
