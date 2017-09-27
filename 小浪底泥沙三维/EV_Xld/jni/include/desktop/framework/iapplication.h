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
// 0			2014/10/16		�Բ���		�ඨ��
//
#ifndef _IFRAMEWORKAPP_INCLUDE__
#define _IFRAMEWORKAPP_INCLUDE__


#include "../interfacequerier.h"

class IApplication : public InterfaceUnknown
{
	PluginInterface(IApplication)
public:
	virtual ~IApplication() {}

	// �����˳��¼���������
	class ExitWatcher
	{
	public:
		/// <summary>
		/// �����˳��¼���
		/// ��д�˺������ػ�����˳��¼���
		/// �ú�������ʱ����һ�����˳����˳����̿��ܱ�������������ֹ��
		/// </summary>
		/// <param name="exit">�����Ƿ��˳�����
		/// Ҳ����ͨ���ò���������ֵ���жϳ����Ƿ��Ѿ���������������ֹ�˳���</param>
		/// <returns></returns>
		virtual void onExitApp(bool& exit){}

		/// <summary>
		/// �����˳��¼���
		/// ��д�˺������ػ�����˳��¼���
		/// ��onExitApp���������ڸú����޷���ֹ�����˳���
		/// </summary>
		/// <returns></returns>
		virtual void onAboutToExit(){}
	};

	/// <summary>
	/// ��ӳ����˳��¼���������
	/// </summary>
	/// <param name="watcher">�¼���������</param>
	/// <returns></returns>
	virtual void addExitWatcher(IApplication::ExitWatcher* watcher) = 0;

	/// <summary>
	/// �жϳ����Ƿ��Ѿ��˳���
	/// </summary>
	/// <returns>�����Ƿ��Ѿ��˳���</returns>
	virtual bool isAboutToQuit() const = 0;
};


#endif // _IFRAMEWORKAPP_INCLUDE__


