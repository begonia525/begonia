
// ���л�View.h : C���л�View ��Ľӿ�
//

#pragma once


class C���л�View : public CView
{
protected: // �������л�����
	C���л�View();
	DECLARE_DYNCREATE(C���л�View)

// ����
public:
	C���л�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���л�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // ���л�View.cpp �еĵ��԰汾
inline C���л�Doc* C���л�View::GetDocument() const
   { return reinterpret_cast<C���л�Doc*>(m_pDocument); }
#endif

