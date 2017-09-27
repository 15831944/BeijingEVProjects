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
// 0			2014/10/14		�Բ���		�ඨ��
//
#ifndef _ISTATUSBAR_INCLUDE__
#define _ISTATUSBAR_INCLUDE__

#include "../interfacequerier.h"
#include "triggeraction.h"

class IStatusBar : public InterfaceUnknown
{
	PluginInterface(IStatusBar)
public:
	virtual ~IStatusBar() {}

	/// <summary>
	/// ����״̬�����֡�
	/// </summary>
	/// <param name="text">״̬�����֡�</param>
	/// <returns></returns>
	virtual void setText(const char* text) = 0;

	/// <summary>
	/// ��״̬������ʾ������Ϣ��
	/// </summary>
	/// <param name="n">���ȣ�0-100����</param>
	/// <param name="text">�������Ե�˵�����֡�</param>
	/// <returns></returns>
	virtual void setProgress(int n, const char* text) = 0;

	/// <summary>
	/// ����״̬����ʾ�ȴ�״̬��
	/// </summary>
	/// <returns></returns>
	virtual void setWaiting() = 0;

	/// <summary>
	/// ����״̬����������֡�������Ϣ�͵ȴ�״̬��
	/// </summary>
	/// <returns></returns>
	virtual void reset() = 0;

	/// <summary>
	/// ��״̬������ӹ��߰�ť��
	/// </summary>
	/// <param name="text">��ť���ơ�</param>
	/// <param name="action">ITriggerAction�������ڽ��յ����ť���¼���</param>
	/// <returns></returns>
	virtual void addToolButton(const char* text, ITriggerAction* action) = 0;

	/// <summary>
	/// ���ù��߰�ť����ʾ����Ϣ������
	/// </summary>
	/// <param name="text">��ť���ơ�</param>
	/// <param name="n">��Ϣ������</param>
	/// <returns></returns>
	virtual void setToolButtonMessageCount(const char* text, int n) = 0;

	/// <summary>
	/// ��ȡ���߰�ť����ʾ����Ϣ������
	/// </summary>
	/// <param name="text">��ť���ơ�</param>
	/// <returns>��Ϣ������</returns>
	virtual int toolButtonMessageCount(const char* text) = 0;
};

#endif // _INAVIGATOR_INCLUDE__

