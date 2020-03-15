
// Example3View.h : CExample3View 类的接口
//

#pragma once


class CExample3View : public CView
{
protected: // 仅从序列化创建
	CExample3View();
	DECLARE_DYNCREATE(CExample3View)

// 特性
public:
	CExample3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CExample3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Example3View.cpp 中的调试版本
inline CExample3Doc* CExample3View::GetDocument() const
   { return reinterpret_cast<CExample3Doc*>(m_pDocument); }
#endif

