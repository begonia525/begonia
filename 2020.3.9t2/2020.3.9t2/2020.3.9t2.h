
// 2020.3.9t2.h : 2020.3.9t2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy202039t2App:
// �йش����ʵ�֣������ 2020.3.9t2.cpp
//

class CMy202039t2App : public CWinApp
{
public:
	CMy202039t2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy202039t2App theApp;
