
// MFC0407�Ի���.h : MFC0407�Ի��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC0407�Ի���App:
// �йش����ʵ�֣������ MFC0407�Ի���.cpp
//

class CMFC0407�Ի���App : public CWinApp
{
public:
	CMFC0407�Ի���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC0407�Ի���App theApp;
