
// MFC0407�Ի���View.h : CMFC0407�Ի���View ��Ľӿ�
//

#pragma once


class CMFC0407�Ի���View : public CView
{
protected: // �������л�����
	CMFC0407�Ի���View();
	DECLARE_DYNCREATE(CMFC0407�Ի���View)

// ����
public:
	CMFC0407�Ի���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0407�Ի���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int r;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowdlg();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC0407�Ի���View.cpp �еĵ��԰汾
inline CMFC0407�Ի���Doc* CMFC0407�Ի���View::GetDocument() const
   { return reinterpret_cast<CMFC0407�Ի���Doc*>(m_pDocument); }
#endif

