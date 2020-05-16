
// DB0506Set.cpp : CDB0506Set ���ʵ��
//

#include "stdafx.h"
#include "DB0506.h"
#include "DB0506Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0506Set ʵ��

// ���������� 2020��5��16��, 9:44

IMPLEMENT_DYNAMIC(CDB0506Set, CRecordset)

CDB0506Set::CDB0506Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0;
	m_3 = 0;
	m_4 = 0;
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CDB0506Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f\x8868;DBQ=E:\\\x9ec4\x98de\x98de\x7684\x7535\x8111\\\x5b66\x751f\x4fe1\x606f\x8868.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CDB0506Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CDB0506Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Long(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Long(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Long(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CDB0506Set ���

#ifdef _DEBUG
void CDB0506Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CDB0506Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

