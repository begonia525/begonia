
// E310View.h : CE310View ��Ľӿ�
//

#pragma once


class CE310View : public CView
{
protected: // �������л�����
	CE310View();
	DECLARE_DYNCREATE(CE310View)

// ����
public:
	CE310Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CE310View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // E310View.cpp �еĵ��԰汾
inline CE310Doc* CE310View::GetDocument() const
   { return reinterpret_cast<CE310Doc*>(m_pDocument); }
#endif

