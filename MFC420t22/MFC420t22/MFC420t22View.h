
// MFC420t22View.h : CMFC420t22View ��Ľӿ�
//

#pragma once


class CMFC420t22View : public CView
{
protected: // �������л�����
	CMFC420t22View();
	DECLARE_DYNCREATE(CMFC420t22View)

// ����
public:
	CMFC420t22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC420t22View();
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
	afx_msg void OnInput();
};

#ifndef _DEBUG  // MFC420t22View.cpp �еĵ��԰汾
inline CMFC420t22Doc* CMFC420t22View::GetDocument() const
   { return reinterpret_cast<CMFC420t22Doc*>(m_pDocument); }
#endif

