// Copyright (C) 2011��������ң�������Ϣ�������޹�˾(http://www.ev-image.com)
// All rights reserved.
//
// ���������
//
// �� �ߣ��Բ���
// ������ڣ�-
//
// �޸���ʷ��
// [�޸�����]	[�޸�����]		[�޸���]		[�޸�����]
// 0			2014/11/05		�Բ���		�ඨ��
//
#ifndef _FRAMEWORKDEFS_INCLUDE__
#define _FRAMEWORKDEFS_INCLUDE__

#ifdef _WIN32
#  include "winsock2.h"
#  include "windows.h"
#endif

namespace FrameworkDefines{

#ifdef _WIN32
	typedef HWND WindowHandle;
#else
	typedef unsigned long  WindowHandle;
#endif

}

#endif // _FRAMEWORKDEFS_INCLUDE__

