
// MFC0413t4�Ի���View.h : CMFC0413t4�Ի���View ��Ľӿ�
//

#pragma once


class CMFC0413t4�Ի���View : public CView
{
protected: // �������л�����
	CMFC0413t4�Ի���View();
	DECLARE_DYNCREATE(CMFC0413t4�Ի���View)

// ����
public:
	CMFC0413t4�Ի���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0413t4�Ի���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0413t4�Ի���View.cpp �еĵ��԰汾
inline CMFC0413t4�Ի���Doc* CMFC0413t4�Ի���View::GetDocument() const
   { return reinterpret_cast<CMFC0413t4�Ի���Doc*>(m_pDocument); }
#endif

