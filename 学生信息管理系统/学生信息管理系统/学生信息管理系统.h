
// ѧ����Ϣ����ϵͳ.h : ѧ����Ϣ����ϵͳ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cѧ����Ϣ����ϵͳApp:
// �йش����ʵ�֣������ ѧ����Ϣ����ϵͳ.cpp
//

class Cѧ����Ϣ����ϵͳApp : public CWinApp
{
public:
	Cѧ����Ϣ����ϵͳApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cѧ����Ϣ����ϵͳApp theApp;
