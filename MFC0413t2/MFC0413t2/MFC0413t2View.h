
// MFC0413t2View.h : CMFC0413t2View ��Ľӿ�
//

#pragma once


class CMFC0413t2View : public CView
{
protected: // �������л�����
	CMFC0413t2View();
	DECLARE_DYNCREATE(CMFC0413t2View)

// ����
public:
	CMFC0413t2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0413t2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowdlg();
};

#ifndef _DEBUG  // MFC0413t2View.cpp �еĵ��԰汾
inline CMFC0413t2Doc* CMFC0413t2View::GetDocument() const
   { return reinterpret_cast<CMFC0413t2Doc*>(m_pDocument); }
#endif

