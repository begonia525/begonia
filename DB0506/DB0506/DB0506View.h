
// DB0506View.h : CDB0506View ��Ľӿ�
//

#pragma once

class CDB0506Set;

class CDB0506View : public CRecordView
{
protected: // �������л�����
	CDB0506View();
	DECLARE_DYNCREATE(CDB0506View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB0506_FORM };
#endif
	CDB0506Set* m_pSet;

// ����
public:
	CDB0506Doc* GetDocument() const;

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
	virtual ~CDB0506View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	long sno;
	long age;
	long iphone;
};

#ifndef _DEBUG  // DB0506View.cpp �еĵ��԰汾
inline CDB0506Doc* CDB0506View::GetDocument() const
   { return reinterpret_cast<CDB0506Doc*>(m_pDocument); }
#endif

