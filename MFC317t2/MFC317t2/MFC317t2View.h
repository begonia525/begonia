
// MFC317t2View.h : CMFC317t2View ��Ľӿ�
//

#pragma once


class CMFC317t2View : public CView
{
protected: // �������л�����
	CMFC317t2View();
	DECLARE_DYNCREATE(CMFC317t2View)

// ����
public:
	CMFC317t2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC317t2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC317t2View.cpp �еĵ��԰汾
inline CMFC317t2Doc* CMFC317t2View::GetDocument() const
   { return reinterpret_cast<CMFC317t2Doc*>(m_pDocument); }
#endif

