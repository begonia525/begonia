
// E310T3View.h : CE310T3View ��Ľӿ�
//

#pragma once


class CE310T3View : public CView
{
protected: // �������л�����
	CE310T3View();
	DECLARE_DYNCREATE(CE310T3View)

// ����
public:
	CE310T3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CE310T3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // E310T3View.cpp �еĵ��԰汾
inline CE310T3Doc* CE310T3View::GetDocument() const
   { return reinterpret_cast<CE310T3Doc*>(m_pDocument); }
#endif

