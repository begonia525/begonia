
// Example2View.h : CExample2View ��Ľӿ�
//

#pragma once


class CExample2View : public CView
{
protected: // �������л�����
	CExample2View();
	DECLARE_DYNCREATE(CExample2View)

// ����
public:
	CExample2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExample2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Example2View.cpp �еĵ��԰汾
inline CExample2Doc* CExample2View::GetDocument() const
   { return reinterpret_cast<CExample2Doc*>(m_pDocument); }
#endif

