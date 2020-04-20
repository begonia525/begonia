
// MFC420基于对话框的程序.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CMFC420基于对话框的程序App: 
// 有关此类的实现，请参阅 MFC420基于对话框的程序.cpp
//

class CMFC420基于对话框的程序App : public CWinApp
{
public:
	CMFC420基于对话框的程序App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CMFC420基于对话框的程序App theApp;