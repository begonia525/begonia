
// 3t1View.h : CMy3t1View ��Ľӿ�
//

#pragma once


class CMy3t1View : public CView
{
protected: // �������л�����
	CMy3t1View();
	DECLARE_DYNCREATE(CMy3t1View)

// ����
public:
	CMy3t1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy3t1View();
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

#ifndef _DEBUG  // 3t1View.cpp �еĵ��԰汾
inline CMy3t1Doc* CMy3t1View::GetDocument() const
   { return reinterpret_cast<CMy3t1Doc*>(m_pDocument); }
#endif

