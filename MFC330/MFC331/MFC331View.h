
// MFC331View.h : CMFC331View ��Ľӿ�
//

#pragma once


class CMFC331View : public CView
{
protected: // �������л�����
	CMFC331View();
	DECLARE_DYNCREATE(CMFC331View)

// ����
public:
	CMFC331Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC331View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
	CString s1;
	CPoint c;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC331View.cpp �еĵ��԰汾
inline CMFC331Doc* CMFC331View::GetDocument() const
   { return reinterpret_cast<CMFC331Doc*>(m_pDocument); }
#endif

