/// Copyright (C) 2011��������ң�������Ϣ�������޹�˾(http://www.ev-image.com)
// All rights reserved.
//
// ���������
//
// �� �ߣ��Բ���
// ������ڣ�-
//
// �޸���ʷ��
// [�޸�����]	[�޸�����]		[�޸���]		[�޸�����]
// 0			2014/01/13		�Բ���		�ඨ��
//
#ifndef _IFRAMEWORK_INCLUDE__
#define _IFRAMEWORK_INCLUDE__

#include "../interfacequerier.h"

class IFramework : public InterfaceUnknown
{
	PluginInterface(IFramework)
public:
	virtual ~IFramework() {}
	
	/// <summary>
	/// ע��ӿڹ��������ʹ�ã�
	/// ע��Ľӿڹ����ڱ�����£��������ͨ������������Ʋ�ѯ�ýӿڡ�
	/// </summary>
	/// <param name="itfc">�ӿڶ���</param>
	/// <returns></returns>
	virtual void registerInterface(InterfaceUnknown* itfc) = 0;

	/// <summary>
	/// ��ȡָ������Ľӿڡ�
	/// </summary>
	/// <param name="name">������ơ�</param>
	/// <returns>InterfaceUnknown���󣬿���ͨ���˶������InterfaceQuerier��ѯ�ò�������нӿڡ�</returns>
	virtual InterfaceUnknown* componentInterface(const char* name) = 0;
};

#endif // _IFRAMEWORK_INCLUDE__

