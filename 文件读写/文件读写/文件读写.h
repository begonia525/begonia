
// �ļ���д.h : �ļ���д Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ļ���дApp:
// �йش����ʵ�֣������ �ļ���д.cpp
//

class C�ļ���дApp : public CWinApp
{
public:
	C�ļ���дApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ļ���дApp theApp;
