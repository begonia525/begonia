
// DB0506View.h : CDB0506View 类的接口
//

#pragma once

class CDB0506Set;

class CDB0506View : public CRecordView
{
protected: // 仅从序列化创建
	CDB0506View();
	DECLARE_DYNCREATE(CDB0506View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB0506_FORM };
#endif
	CDB0506Set* m_pSet;

// 特性
public:
	CDB0506Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CDB0506View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	long sno;
	long age;
	long iphone;
};

#ifndef _DEBUG  // DB0506View.cpp 中的调试版本
inline CDB0506Doc* CDB0506View::GetDocument() const
   { return reinterpret_cast<CDB0506Doc*>(m_pDocument); }
#endif

