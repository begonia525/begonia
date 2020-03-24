
// MFC324View.h : CMFC324View ��Ľӿ�
//

#pragma once


class CMFC324View : public CView
{
protected: // �������л�����
	CMFC324View();
	DECLARE_DYNCREATE(CMFC324View)

// ����
public:
	CMFC324Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC324View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint c1;
	CPoint c2;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
	afx_msg void OnLine();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRect();
	afx_msg void OnCircle();
};

#ifndef _DEBUG  // MFC324View.cpp �еĵ��԰汾
inline CMFC324Doc* CMFC324View::GetDocument() const
   { return reinterpret_cast<CMFC324Doc*>(m_pDocument); }
#endif

