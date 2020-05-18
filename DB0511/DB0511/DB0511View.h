
// DB0511View.h : CDB0511View 类的接口
//

#pragma once

class CDB0511Set;

class CDB0511View : public CRecordView
{
protected: // 仅从序列化创建
	CDB0511View();
	DECLARE_DYNCREATE(CDB0511View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB0511_FORM };
#endif
	CDB0511Set* m_pSet;
	CString path;
	
// 特性
public:
	CDB0511Doc* GetDocument() const;
	void draw_pic(CString file);
	
// 操作
public:
	CString filename;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CDB0511View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // DB0511View.cpp 中的调试版本
inline CDB0511Doc* CDB0511View::GetDocument() const
   { return reinterpret_cast<CDB0511Doc*>(m_pDocument); }
#endif

