
// Example1View.h : CExample1View ��Ľӿ�
//

#pragma once


class CExample1View : public CView
{
protected: // �������л�����
	CExample1View();
	DECLARE_DYNCREATE(CExample1View)

// ����
public:
	CExample1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExample1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Example1View.cpp �еĵ��԰汾
inline CExample1Doc* CExample1View::GetDocument() const
   { return reinterpret_cast<CExample1Doc*>(m_pDocument); }
#endif

