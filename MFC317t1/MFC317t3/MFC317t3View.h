
// MFC317t3View.h : CMFC317t3View 类的接口
//

#pragma once


class CMFC317t3View : public CView
{
protected: // 仅从序列化创建
	CMFC317t3View();
	DECLARE_DYNCREATE(CMFC317t3View)

// 特性
public:
	CMFC317t3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC317t3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC317t3View.cpp 中的调试版本
inline CMFC317t3Doc* CMFC317t3View::GetDocument() const
   { return reinterpret_cast<CMFC317t3Doc*>(m_pDocument); }
#endif

