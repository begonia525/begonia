
// MFC317t2.h : MFC317t2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC317t2App:
// �йش����ʵ�֣������ MFC317t2.cpp
//

class CMFC317t2App : public CWinApp
{
public:
	CMFC317t2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC317t2App theApp;
