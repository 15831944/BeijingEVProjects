/// Copyright (C) 2011��������ң�������Ϣ�������޹�˾(http://www.ev-image.com)
// All rights reserved.
//
// IInitializer���������
//
// �� �ߣ��Բ���
// ������ڣ�-
//
// �޸���ʷ��
// [�޸�����]	[�޸�����]		[�޸���]		[�޸�����]
// 0			2014/01/13		�Բ���		�ඨ��
//
#ifndef _IINITIALIZER_INCLUDE__
#define _IINITIALIZER_INCLUDE__

#include "../interfacequerier.h"

class IInitializer : public InterfaceUnknown
{
	PluginInterface(IInitializer);
	virtual ~IInitializer() {}
	
	/// <summary>
	/// ��ʼ�������
	/// </summary>
	/// <returns>�Ƿ�ɹ���</returns>
	virtual bool initialize() = 0;

	/// <summary>
	/// �����׼�����������в���Ѽ�����ϣ���
	/// ��Ϊ��ʱ���в����initialize��ִ����ϣ����Կ�����ȷ��ȡ����initialize��ע��Ĳ���ӿڡ�
	/// �ú������Ǳ���ʵ�֡�
	/// </summary>
	/// <returns></returns>
	virtual void ready(){}

	/// <summary>
	/// ����ʼ�������
	/// </summary>
	/// <returns>�Ƿ�ɹ���</returns>
	virtual bool unInitialize() = 0;
};

#endif // _IINITIALIZER_INCLUDE__

