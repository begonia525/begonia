
// MFC0413View.h : CMFC0413View ��Ľӿ�
//

#pragma once


class CMFC0413View : public CView
{
protected: // �������л�����
	CMFC0413View();
	DECLARE_DYNCREATE(CMFC0413View)

// ����
public:
	CMFC0413Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0413View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect c;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC0413View.cpp �еĵ��԰汾
inline CMFC0413Doc* CMFC0413View::GetDocument() const
   { return reinterpret_cast<CMFC0413Doc*>(m_pDocument); }
#endif

