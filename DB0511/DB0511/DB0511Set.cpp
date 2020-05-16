
// DB0511Set.cpp : CDB0511Set 类的实现
//

#include "stdafx.h"
#include "DB0511.h"
#include "DB0511Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0511Set 实现

// 代码生成在 2020年5月16日, 10:27

IMPLEMENT_DYNAMIC(CDB0511Set, CRecordset)

CDB0511Set::CDB0511Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CDB0511Set::GetDefaultConnect()
{
	return _T("DSN=\x76f8\x7247\x6587\x4ef6\x540d;DBQ=E:\\\x9ec4\x98de\x98de\x7684\x7535\x8111\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CDB0511Set::GetDefaultSQL()
{
	return _T("[相片文件名]");
}

void CDB0511Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"),m_1 );

}
/////////////////////////////////////////////////////////////////////////////
// CDB0511Set 诊断

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

