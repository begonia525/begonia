
// 列表框0414View.h : C列表框0414View 类的接口
//

#pragma once


class C列表框0414View : public CView
{
protected: // 仅从序列化创建
	C列表框0414View();
	DECLARE_DYNCREATE(C列表框0414View)

// 特性
public:
	C列表框0414Doc* GetDocument() const;

// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C列表框0414View();
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
	afx_msg void On32771();
};

#ifndef _DEBUG  // 列表框0414View.cpp 中的调试版本
inline C列表框0414Doc* C列表框0414View::GetDocument() const
   { return reinterpret_cast<C列表框0414Doc*>(m_pDocument); }
#endif

