
// MFC317t1View.h : CMFC317t1View 类的接口
//

#pragma once


class CMFC317t1View : public CView
{
protected: // 仅从序列化创建
	CMFC317t1View();
	DECLARE_DYNCREATE(CMFC317t1View)

// 特性
public:
	CMFC317t1Doc* GetDocument() const;

// 操作
public:
	CRect c,cr;
	bool set;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC317t1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFC317t1View.cpp 中的调试版本
inline CMFC317t1Doc* CMFC317t1View::GetDocument() const
   { return reinterpret_cast<CMFC317t1Doc*>(m_pDocument); }
#endif

