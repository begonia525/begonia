
// MFC324View.h : CMFC324View 类的接口
//

#pragma once


class CMFC324View : public CView
{
protected: // 仅从序列化创建
	CMFC324View();
	DECLARE_DYNCREATE(CMFC324View)

// 特性
public:
	CMFC324Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC324View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint c1;
	CPoint c2;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
	afx_msg void OnLine();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRect();
	afx_msg void OnCircle();
};

#ifndef _DEBUG  // MFC324View.cpp 中的调试版本
inline CMFC324Doc* CMFC324View::GetDocument() const
   { return reinterpret_cast<CMFC324Doc*>(m_pDocument); }
#endif

