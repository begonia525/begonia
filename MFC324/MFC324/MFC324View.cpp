
// MFC324View.cpp : CMFC324View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC324.h"
#endif

#include "MFC324Doc.h"
#include "MFC324View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC324View

IMPLEMENT_DYNCREATE(CMFC324View, CView)

BEGIN_MESSAGE_MAP(CMFC324View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMFC324View::OnShowname)
	ON_COMMAND(ID_LINE, &CMFC324View::OnLine)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_RECT, &CMFC324View::OnRect)
	ON_COMMAND(ID_CIRCLE, &CMFC324View::OnCircle)
END_MESSAGE_MAP()

// CMFC324View 构造/析构

CMFC324View::CMFC324View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFC324View::~CMFC324View()
{
}

BOOL CMFC324View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC324View 绘制

void CMFC324View::OnDraw(CDC* pDC)
{
	CMFC324Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMFC324View 诊断

#ifdef _DEBUG
void CMFC324View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC324View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC324Doc* CMFC324View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC324Doc)));
	return (CMFC324Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC324View 消息处理程序


void CMFC324View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString S;
	S = _T("黄飞飞");
	CClientDC dc(this);
	dc.TextOutW(100, 20,S);
}





void CMFC324View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC324Doc*pDoc = GetDocument();
	c1 = point;
	CView::OnLButtonDown(nFlags, point);
}

void CMFC324View::OnLine()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	dc.MoveTo(c1);
	dc.LineTo(c2);
	
	
}

void CMFC324View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	c2 = point;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC324View::OnRect()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CRect cr(c1.x, c1.y, c2.x, c2.y);
	dc.Rectangle(cr);
}


void CMFC324View::OnCircle()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CRect cr(c1.x, c1.y, c2.x, c2.y);
	dc.Ellipse(cr);
}
