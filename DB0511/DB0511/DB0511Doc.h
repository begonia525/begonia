
// DB0511Doc.h : CDB0511Doc ��Ľӿ�
//


#pragma once
#include "DB0511Set.h"


class CDB0511Doc : public CDocument
{
protected: // �������л�����
	CDB0511Doc();
	DECLARE_DYNCREATE(CDB0511Doc)

// ����
public:
	CDB0511Set m_DB0511Set;

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
	virtual ~CDB0511Doc();
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
