
// ѧ����Ϣ����ϵͳSet.cpp : Cѧ����Ϣ����ϵͳSet ���ʵ��
//

#include "stdafx.h"
#include "ѧ����Ϣ����ϵͳ.h"
#include "ѧ����Ϣ����ϵͳSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cѧ����Ϣ����ϵͳSet ʵ��

// ���������� 2020��5��18��, 19:08

IMPLEMENT_DYNAMIC(Cѧ����Ϣ����ϵͳSet, CRecordset)

Cѧ����Ϣ����ϵͳSet::Cѧ����Ϣ����ϵͳSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = L"";
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cѧ����Ϣ����ϵͳSet::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f\x7ba1\x7406\x7cfb\x7edf_\x7efc\x5408;DBQ=C:\\Users\\\x9ec4\x98de\x98de\x7684\x7535\x8111\\Desktop\\\x5b66\x751f\x4fe1\x606f\x7ba1\x7406\x7cfb\x7edf.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cѧ����Ϣ����ϵͳSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ����ϵͳ]");
}

void Cѧ����Ϣ����ϵͳSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Text(pFX, _T("[��������]"), column5);
	RFX_Text(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[������Ƭ�ļ���]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// Cѧ����Ϣ����ϵͳSet ���

#ifdef _DEBUG
void Cѧ����Ϣ����ϵͳSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cѧ����Ϣ����ϵͳSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

