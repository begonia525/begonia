
// �б��0414View.h : C�б��0414View ��Ľӿ�
//

#pragma once


class C�б��0414View : public CView
{
protected: // �������л�����
	C�б��0414View();
	DECLARE_DYNCREATE(C�б��0414View)

// ����
public:
	C�б��0414Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�б��0414View();
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
	afx_msg void On32771();
};

#ifndef _DEBUG  // �б��0414View.cpp �еĵ��԰汾
inline C�б��0414Doc* C�б��0414View::GetDocument() const
   { return reinterpret_cast<C�б��0414Doc*>(m_pDocument); }
#endif

