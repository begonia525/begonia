
// ���ڶԻ���ͼƬ�鿴2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C���ڶԻ���ͼƬ�鿴2App: 
// �йش����ʵ�֣������ ���ڶԻ���ͼƬ�鿴2.cpp
//

class C���ڶԻ���ͼƬ�鿴2App : public CWinApp
{
public:
	C���ڶԻ���ͼƬ�鿴2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C���ڶԻ���ͼƬ�鿴2App theApp;