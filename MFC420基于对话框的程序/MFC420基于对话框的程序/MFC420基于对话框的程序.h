
// MFC420���ڶԻ���ĳ���.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC420���ڶԻ���ĳ���App: 
// �йش����ʵ�֣������ MFC420���ڶԻ���ĳ���.cpp
//

class CMFC420���ڶԻ���ĳ���App : public CWinApp
{
public:
	CMFC420���ڶԻ���ĳ���App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC420���ڶԻ���ĳ���App theApp;