
// ���ڶԻ���ͼƬ���.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C���ڶԻ���ͼƬ���App: 
// �йش����ʵ�֣������ ���ڶԻ���ͼƬ���.cpp
//

class C���ڶԻ���ͼƬ���App : public CWinApp
{
public:
	C���ڶԻ���ͼƬ���App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C���ڶԻ���ͼƬ���App theApp;