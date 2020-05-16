
// DB0511Set.cpp : CDB0511Set ���ʵ��
//

#include "stdafx.h"
#include "DB0511.h"
#include "DB0511Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0511Set ʵ��

// ���������� 2020��5��16��, 10:27

IMPLEMENT_DYNAMIC(CDB0511Set, CRecordset)

CDB0511Set::CDB0511Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CDB0511Set::GetDefaultConnect()
{
	return _T("DSN=\x76f8\x7247\x6587\x4ef6\x540d;DBQ=E:\\\x9ec4\x98de\x98de\x7684\x7535\x8111\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CDB0511Set::GetDefaultSQL()
{
	return _T("[��Ƭ�ļ���]");
}

void CDB0511Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"),m_1 );

}
/////////////////////////////////////////////////////////////////////////////
// CDB0511Set ���

#ifdef _DEBUG
void CDB0511Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CDB0511Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

