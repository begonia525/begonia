
// MFC323View.h : CMFC323View ��Ľӿ�
//

#pragma once


class CMFC323View : public CView
{
protected: // �������л�����
	CMFC323View();
	DECLARE_DYNCREATE(CMFC323View)

// ����
public:
	CMFC323Doc* GetDocument() const;

// ����
public:
	CRect c, cr;
	bool set;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC323View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowcircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFC323View.cpp �еĵ��԰汾
inline CMFC323Doc* CMFC323View::GetDocument() const
   { return reinterpret_cast<CMFC323Doc*>(m_pDocument); }
#endif

