
// MFC323.h : MFC323 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC323App:
// �йش����ʵ�֣������ MFC323.cpp
//

class CMFC323App : public CWinApp
{
public:
	CMFC323App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC323App theApp;
