
// MFC317t3View.h : CMFC317t3View ��Ľӿ�
//

#pragma once


class CMFC317t3View : public CView
{
protected: // �������л�����
	CMFC317t3View();
	DECLARE_DYNCREATE(CMFC317t3View)

// ����
public:
	CMFC317t3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC317t3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC317t3View.cpp �еĵ��԰汾
inline CMFC317t3Doc* CMFC317t3View::GetDocument() const
   { return reinterpret_cast<CMFC317t3Doc*>(m_pDocument); }
#endif

