
// MFC420t22View.h : CMFC420t22View 类的接口
//

#pragma once


class CMFC420t22View : public CView
{
protected: // 仅从序列化创建
	CMFC420t22View();
	DECLARE_DYNCREATE(CMFC420t22View)

// 特性
public:
	CMFC420t22Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC420t22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect cr;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnInput();
};

#ifndef _DEBUG  // MFC420t22View.cpp 中的调试版本
inline CMFC420t22Doc* CMFC420t22View::GetDocument() const
   { return reinterpret_cast<CMFC420t22Doc*>(m_pDocument); }
#endif

