
// MFC0413t3��ʱ��View.h : CMFC0413t3��ʱ��View ��Ľӿ�
//

#pragma once


class CMFC0413t3��ʱ��View : public CView
{
protected: // �������л�����
	CMFC0413t3��ʱ��View();
	DECLARE_DYNCREATE(CMFC0413t3��ʱ��View)

// ����
public:
	CMFC0413t3��ʱ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0413t3��ʱ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect c;
	bool t;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC0413t3��ʱ��View.cpp �еĵ��԰汾
inline CMFC0413t3��ʱ��Doc* CMFC0413t3��ʱ��View::GetDocument() const
   { return reinterpret_cast<CMFC0413t3��ʱ��Doc*>(m_pDocument); }
#endif

