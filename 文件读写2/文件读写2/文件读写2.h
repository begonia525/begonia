
// �ļ���д2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C�ļ���д2App: 
// �йش����ʵ�֣������ �ļ���д2.cpp
//

class C�ļ���д2App : public CWinApp
{
public:
	C�ļ���д2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C�ļ���д2App theApp;