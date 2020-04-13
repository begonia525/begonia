
// MFC0413t3定时器View.h : CMFC0413t3定时器View 类的接口
//

#pragma once


class CMFC0413t3定时器View : public CView
{
protected: // 仅从序列化创建
	CMFC0413t3定时器View();
	DECLARE_DYNCREATE(CMFC0413t3定时器View)

// 特性
public:
	CMFC0413t3定时器Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC0413t3定时器View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect c;
	bool t;

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC0413t3定时器View.cpp 中的调试版本
inline CMFC0413t3定时器Doc* CMFC0413t3定时器View::GetDocument() const
   { return reinterpret_cast<CMFC0413t3定时器Doc*>(m_pDocument); }
#endif

