
// �ļ���дView.h : C�ļ���дView ��Ľӿ�
//

#pragma once


class C�ļ���дView : public CView
{
protected: // �������л�����
	C�ļ���дView();
	DECLARE_DYNCREATE(C�ļ���дView)

// ����
public:
	C�ļ���дDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ļ���дView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // �ļ���дView.cpp �еĵ��԰汾
inline C�ļ���дDoc* C�ļ���дView::GetDocument() const
   { return reinterpret_cast<C�ļ���дDoc*>(m_pDocument); }
#endif

