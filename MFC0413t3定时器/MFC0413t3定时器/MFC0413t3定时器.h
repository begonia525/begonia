
// MFC0413t3��ʱ��.h : MFC0413t3��ʱ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC0413t3��ʱ��App:
// �йش����ʵ�֣������ MFC0413t3��ʱ��.cpp
//

class CMFC0413t3��ʱ��App : public CWinApp
{
public:
	CMFC0413t3��ʱ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC0413t3��ʱ��App theApp;
