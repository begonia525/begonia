
// ���ڶԻ������λͼ��Դ.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C���ڶԻ������λͼ��ԴApp: 
// �йش����ʵ�֣������ ���ڶԻ������λͼ��Դ.cpp
//

class C���ڶԻ������λͼ��ԴApp : public CWinApp
{
public:
	C���ڶԻ������λͼ��ԴApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C���ڶԻ������λͼ��ԴApp theApp;