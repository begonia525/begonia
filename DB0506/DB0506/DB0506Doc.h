
// DB0506Doc.h : CDB0506Doc ��Ľӿ�
//


#pragma once
#include "DB0506Set.h"


class CDB0506Doc : public CDocument
{
protected: // �������л�����
	CDB0506Doc();
	DECLARE_DYNCREATE(CDB0506Doc)

// ����
public:
	CDB0506Set m_DB0506Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CDB0506Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
