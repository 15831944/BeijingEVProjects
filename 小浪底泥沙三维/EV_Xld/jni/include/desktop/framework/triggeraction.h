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
#ifndef _TRIGGERACTION_INCLUDE__
#define _TRIGGERACTION_INCLUDE__

class ITriggerAction
{
public:
	virtual ~ITriggerAction(){}

	/// <summary>
	/// ��ť����¼���
	/// </summary>
	/// <returns>
	/// </returns>
	virtual void onClicked(){}

	/// <summary>
	/// ��ť����¼���
	/// </summary>
	/// <param name="checked">��ť��check״̬��</param>
	/// <returns>
	/// </returns>
	virtual void onClicked(bool checked){}

	/// <summary>
	/// ��ť����¼���
	/// </summary>
	/// <param name="name">��ť���ƣ�����һ��ITriggerAction��������ť����¼�ʱ��
	/// ��д�˺���ͨ���������ֲ�ͬ�İ�ť��</param>
	/// <returns>
	/// </returns>
	virtual void onClicked(const char* name){}

	/// <summary>
	/// ��ť����¼���
	/// </summary>
	/// <param name="name">��ť���ƣ�����һ��ITriggerAction��������ť����¼�ʱ��
	/// ��д�˺���ͨ���������ֲ�ͬ�İ�ť��</param>
	/// <param name="checked">��ť��check״̬��</param>
	/// <returns>
	/// </returns>
	virtual void onClicked(const char* name, bool checked){}
};

#endif // _TRIGGERACTION_INCLUDE__

