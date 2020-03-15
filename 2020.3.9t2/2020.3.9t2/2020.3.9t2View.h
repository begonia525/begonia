
// 2020.3.9t2View.h : CMy202039t2View 类的接口
//

#pragma once


class CMy202039t2View : public CView
{
protected: // 仅从序列化创建
	CMy202039t2View();
	DECLARE_DYNCREATE(CMy202039t2View)

// 特性
public:
	CMy202039t2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy202039t2View();
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
};

#ifndef _DEBUG  // 2020.3.9t2View.cpp 中的调试版本
inline CMy202039t2Doc* CMy202039t2View::GetDocument() const
   { return reinterpret_cast<CMy202039t2Doc*>(m_pDocument); }
#endif

