
// MFC420t22.h : MFC420t22 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC420t22App:
// �йش����ʵ�֣������ MFC420t22.cpp
//

class CMFC420t22App : public CWinApp
{
public:
	CMFC420t22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC420t22App theApp;
