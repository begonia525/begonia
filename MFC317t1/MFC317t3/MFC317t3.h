
// MFC317t3.h : MFC317t3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC317t3App:
// �йش����ʵ�֣������ MFC317t3.cpp
//

class CMFC317t3App : public CWinApp
{
public:
	CMFC317t3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC317t3App theApp;
