
// ѧ����Ϣ����ϵͳView.h : Cѧ����Ϣ����ϵͳView ��Ľӿ�
//

#pragma once

class Cѧ����Ϣ����ϵͳSet;

class Cѧ����Ϣ����ϵͳView : public CRecordView
{
protected: // �������л�����
	Cѧ����Ϣ����ϵͳView();
	DECLARE_DYNCREATE(Cѧ����Ϣ����ϵͳView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	Cѧ����Ϣ����ϵͳSet* m_pSet;
	CString path;
	CString filename;
// ����
public:
	Cѧ����Ϣ����ϵͳDoc* GetDocument() const;
	void draw_pic(CString file);
// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Cѧ����Ϣ����ϵͳView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit6();
	CString name;
	CString sno;
	CString major;
	CString age;
	CString birth;
	CString phone;
	CString home;
	CString picture;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedButton3();
};

#ifndef _DEBUG  // ѧ����Ϣ����ϵͳView.cpp �еĵ��԰汾
inline Cѧ����Ϣ����ϵͳDoc* Cѧ����Ϣ����ϵͳView::GetDocument() const
   { return reinterpret_cast<Cѧ����Ϣ����ϵͳDoc*>(m_pDocument); }
#endif

