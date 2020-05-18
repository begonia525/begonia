
// 序列化View.h : C序列化View 类的接口
//

#pragma once


class C序列化View : public CView
{
protected: // 仅从序列化创建
	C序列化View();
	DECLARE_DYNCREATE(C序列化View)

// 特性
public:
	C序列化Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C序列化View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 序列化View.cpp 中的调试版本
inline C序列化Doc* C序列化View::GetDocument() const
   { return reinterpret_cast<C序列化Doc*>(m_pDocument); }
#endif

