
// 列表框0414.h : 列表框0414 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C列表框0414App:
// 有关此类的实现，请参阅 列表框0414.cpp
//

class C列表框0414App : public CWinApp
{
public:
	C列表框0414App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C列表框0414App theApp;
