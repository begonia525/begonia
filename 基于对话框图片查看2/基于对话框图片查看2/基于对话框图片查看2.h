
// 基于对话框图片查看2.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// C基于对话框图片查看2App: 
// 有关此类的实现，请参阅 基于对话框图片查看2.cpp
//

class C基于对话框图片查看2App : public CWinApp
{
public:
	C基于对话框图片查看2App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern C基于对话框图片查看2App theApp;