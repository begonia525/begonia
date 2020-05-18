
// DB0511View.h : CDB0511View ��Ľӿ�
//

#pragma once

class CDB0511Set;

class CDB0511View : public CRecordView
{
protected: // �������л�����
	CDB0511View();
	DECLARE_DYNCREATE(CDB0511View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB0511_FORM };
#endif
	CDB0511Set* m_pSet;
	CString path;
	
// ����
public:
	CDB0511Doc* GetDocument() const;
	void draw_pic(CString file);
	
// ����
public:
	CString filename;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CDB0511View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // DB0511View.cpp �еĵ��԰汾
inline CDB0511Doc* CDB0511View::GetDocument() const
   { return reinterpret_cast<CDB0511Doc*>(m_pDocument); }
#endif

