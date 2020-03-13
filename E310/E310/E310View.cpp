
// E310View.cpp : CE310View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "E310.h"
#endif

#include "E310Doc.h"
#include "E310View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CE310View

IMPLEMENT_DYNCREATE(CE310View, CView)

BEGIN_MESSAGE_MAP(CE310View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CE310View 构造/析构

CE310View::CE310View()
{
	// TODO: 在此处添加构造代码

}

CE310View::~CE310View()
{
}

BOOL CE310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CE310View 绘制

void CE310View::OnDraw(CDC* /*pDC*/)
{
	CE310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CE310View 诊断

#ifdef _DEBUG
void CE310View::AssertValid() const
{
	CView::AssertValid();
}

void CE310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CE310Doc* CE310View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CE310Doc)));
	return (CE310Doc*)m_pDocument;
}
#endif //_DEBUG


// CE310View 消息处理程序


void CE310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString S;
	S.Format(_T("左键正在被按下"));
	dc.TextOutW(200, 400, S);
	CView::OnLButtonDown(nFlags, point);
}


void CE310View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString S;
	S.Format(_T("左键正在被抬起"));
	dc.TextOutW(200, 500, S);
	CView::OnLButtonUp(nFlags, point);
}
