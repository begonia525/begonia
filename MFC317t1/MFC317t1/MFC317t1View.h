
// MFC317t1View.h : CMFC317t1View ��Ľӿ�
//

#pragma once


class CMFC317t1View : public CView
{
protected: // �������л�����
	CMFC317t1View();
	DECLARE_DYNCREATE(CMFC317t1View)

// ����
public:
	CMFC317t1Doc* GetDocument() const;

// ����
public:
	CRect c,cr;
	bool set;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC317t1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFC317t1View.cpp �еĵ��԰汾
inline CMFC317t1Doc* CMFC317t1View::GetDocument() const
   { return reinterpret_cast<CMFC317t1Doc*>(m_pDocument); }
#endif

