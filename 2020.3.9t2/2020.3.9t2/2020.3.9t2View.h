
// 2020.3.9t2View.h : CMy202039t2View ��Ľӿ�
//

#pragma once


class CMy202039t2View : public CView
{
protected: // �������л�����
	CMy202039t2View();
	DECLARE_DYNCREATE(CMy202039t2View)

// ����
public:
	CMy202039t2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy202039t2View();
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

#ifndef _DEBUG  // 2020.3.9t2View.cpp �еĵ��԰汾
inline CMy202039t2Doc* CMy202039t2View::GetDocument() const
   { return reinterpret_cast<CMy202039t2Doc*>(m_pDocument); }
#endif

