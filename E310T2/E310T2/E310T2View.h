
// E310T2View.h : CE310T2View ��Ľӿ�
//

#pragma once


class CE310T2View : public CView
{
protected: // �������л�����
	CE310T2View();
	DECLARE_DYNCREATE(CE310T2View)

// ����
public:
	CE310T2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CE310T2View();
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
};

#ifndef _DEBUG  // E310T2View.cpp �еĵ��԰汾
inline CE310T2Doc* CE310T2View::GetDocument() const
   { return reinterpret_cast<CE310T2Doc*>(m_pDocument); }
#endif

