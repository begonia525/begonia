
// �б��0414.h : �б��0414 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�б��0414App:
// �йش����ʵ�֣������ �б��0414.cpp
//

class C�б��0414App : public CWinApp
{
public:
	C�б��0414App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�б��0414App theApp;
