
// ѧ����Ϣ����ϵͳDoc.h : Cѧ����Ϣ����ϵͳDoc ��Ľӿ�
//


#pragma once
#include "ѧ����Ϣ����ϵͳSet.h"


class Cѧ����Ϣ����ϵͳDoc : public CDocument
{
protected: // �������л�����
	Cѧ����Ϣ����ϵͳDoc();
	DECLARE_DYNCREATE(Cѧ����Ϣ����ϵͳDoc)

// ����
public:
	Cѧ����Ϣ����ϵͳSet m_ѧ����Ϣ����ϵͳSet;

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
	virtual ~Cѧ����Ϣ����ϵͳDoc();
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
