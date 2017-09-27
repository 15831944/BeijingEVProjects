/// Copyright (C) 2011��������ң�������Ϣ�������޹�˾(http://www.ev-image.com)
// All rights reserved.
//
// IGetPluginInfo���������
//
// �� �ߣ��Բ���
// ������ڣ�-
//
// �޸���ʷ��
// [�޸�����]	[�޸�����]		[�޸���]		[�޸�����]
// 0			2014/01/13		�Բ���		�ඨ��
//
#ifndef _IGETPLUGININFO_INCLUDE__
#define _IGETPLUGININFO_INCLUDE__

#include "../interfacequerier.h"

class IGetPluginInfo : public InterfaceUnknown
{
	PluginInterface(IGetPluginInfo)
public:
	virtual ~IGetPluginInfo() {}
	
	/// <summary>
	/// ���ز�����ơ�
	/// </summary>
	/// <returns>������ơ�</returns>
	virtual const char* getPluginName() = 0;

	/// <summary>
	/// ���ز��������
	/// </summary>
	/// <returns>���������</returns>
	virtual const char* getPluginDesc() = 0;

	/// <summary>
	/// ���ز���汾��
	/// </summary>
	/// <returns>����汾��</returns>
	virtual const char* getPluginVersion() = 0;
};

#endif // _IGETPLUGININFO_INCLUDE__

