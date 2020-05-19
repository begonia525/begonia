
// 学生信息管理系统View.h : C学生信息管理系统View 类的接口
//

#pragma once

class C学生信息管理系统Set;

class C学生信息管理系统View : public CRecordView
{
protected: // 仅从序列化创建
	C学生信息管理系统View();
	DECLARE_DYNCREATE(C学生信息管理系统View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C学生信息管理系统Set* m_pSet;
	CString path;
	CString filename;
// 特性
public:
	C学生信息管理系统Doc* GetDocument() const;
	void draw_pic(CString file);
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
	virtual ~C学生信息管理系统View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit6();
	CString name;
	CString sno;
	CString major;
	CString age;
	CString birth;
	CString phone;
	CString home;
	CString picture;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedButton3();
};

#ifndef _DEBUG  // 学生信息管理系统View.cpp 中的调试版本
inline C学生信息管理系统Doc* C学生信息管理系统View::GetDocument() const
   { return reinterpret_cast<C学生信息管理系统Doc*>(m_pDocument); }
#endif

