
// MFC420文档视图View.h : CMFC420文档视图View 类的接口
//

#pragma once


class CMFC420文档视图View : public CView
{
protected: // 仅从序列化创建
	CMFC420文档视图View();
	DECLARE_DYNCREATE(CMFC420文档视图View)

// 特性
public:
	CMFC420文档视图Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC420文档视图View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDraw();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // MFC420文档视图View.cpp 中的调试版本
inline CMFC420文档视图Doc* CMFC420文档视图View::GetDocument() const
   { return reinterpret_cast<CMFC420文档视图Doc*>(m_pDocument); }
#endif

