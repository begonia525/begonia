
// MFC317t1.h : MFC317t1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC317t1App:
// �йش����ʵ�֣������ MFC317t1.cpp
//

class CMFC317t1App : public CWinApp
{
public:
	CMFC317t1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC317t1App theApp;
