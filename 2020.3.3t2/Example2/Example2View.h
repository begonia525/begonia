
// Example2View.h : CExample2View 类的接口
//

#pragma once


class CExample2View : public CView
{
protected: // 仅从序列化创建
	CExample2View();
	DECLARE_DYNCREATE(CExample2View)

// 特性
public:
	CExample2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CExample2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Example2View.cpp 中的调试版本
inline CExample2Doc* CExample2View::GetDocument() const
   { return reinterpret_cast<CExample2Doc*>(m_pDocument); }
#endif

