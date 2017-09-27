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
// 0			2014/09/09		�Բ���		�ඨ��
//
#ifndef _IREMINDER_INCLUDE__
#define _IREMINDER_INCLUDE__

#include "../interfacequerier.h"

class IReminder : public InterfaceUnknown
{
	PluginInterface(IReminder)
public:
	virtual ~IReminder(){}

	enum ReminderType
	{
		Notice,		// һ�����ѣ���ɫ��
		Normal,		// ��ʾ״̬��������ɫ��
		Warning,	// ���棬��ɫ��
		Error		// ���󣬺�ɫ��
	};

	/// <summary>
	/// ��ʾ���ѡ�
	/// </summary>
	/// <param name="text">�������֡�</param>
	/// <param name="type">�������͡�</param>
	/// <param name="msKeep">���ѱ���ʱ�䡣</param>
	/// <returns></returns>
	virtual void showReminder(const char* text,
		IReminder::ReminderType type, int msKeep = 3000) = 0;

	/// <summary>
	/// ��ʾ���ѡ�ʹ��Ĭ���������ͣ�Notice����
	/// </summary>
	/// <param name="text">�������֡�</param>
	/// <param name="msKeep">���ѱ���ʱ�䡣</param>
	/// <returns></returns>
	virtual void showReminder(const char* text, int msKeep = 3000) = 0;
};

#endif // _IREMINDER_INCLUDE__

