
// MFC317t1.h : MFC317t1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC317t1App:
// 有关此类的实现，请参阅 MFC317t1.cpp
//

class CMFC317t1App : public CWinApp
{
public:
	CMFC317t1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC317t1App theApp;
