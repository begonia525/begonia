
// MFC420�ĵ���ͼView.h : CMFC420�ĵ���ͼView ��Ľӿ�
//

#pragma once


class CMFC420�ĵ���ͼView : public CView
{
protected: // �������л�����
	CMFC420�ĵ���ͼView();
	DECLARE_DYNCREATE(CMFC420�ĵ���ͼView)

// ����
public:
	CMFC420�ĵ���ͼDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC420�ĵ���ͼView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDraw();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // MFC420�ĵ���ͼView.cpp �еĵ��԰汾
inline CMFC420�ĵ���ͼDoc* CMFC420�ĵ���ͼView::GetDocument() const
   { return reinterpret_cast<CMFC420�ĵ���ͼDoc*>(m_pDocument); }
#endif

