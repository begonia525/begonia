
// MFC0413t4对话框View.h : CMFC0413t4对话框View 类的接口
//

#pragma once


class CMFC0413t4对话框View : public CView
{
protected: // 仅从序列化创建
	CMFC0413t4对话框View();
	DECLARE_DYNCREATE(CMFC0413t4对话框View)

// 特性
public:
	CMFC0413t4对话框Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC0413t4对话框View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0413t4对话框View.cpp 中的调试版本
inline CMFC0413t4对话框Doc* CMFC0413t4对话框View::GetDocument() const
   { return reinterpret_cast<CMFC0413t4对话框Doc*>(m_pDocument); }
#endif

