
// MFC420�ĵ���ͼ.h : MFC420�ĵ���ͼ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC420�ĵ���ͼApp:
// �йش����ʵ�֣������ MFC420�ĵ���ͼ.cpp
//

class CMFC420�ĵ���ͼApp : public CWinApp
{
public:
	CMFC420�ĵ���ͼApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC420�ĵ���ͼApp theApp;
