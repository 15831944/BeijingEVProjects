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
#ifndef _IPROJECT_INCLUDE__
#define _IPROJECT_INCLUDE__

#include "../interfacequerier.h"

class IWorkspace : public InterfaceUnknown
{
	PluginInterface(IWorkspace)
public:
	virtual ~IWorkspace() {}
	
	// �����ļ������¼���������
	class ChangedWatcher
	{
	public:
		virtual ~ChangedWatcher(){}

		/// <summary>
		/// �����¼���
		/// ���ú���������ʱ�������ļ��ı��������ִ����ϡ�
		/// </summary>
		/// <param name="success">ָ�����湤���ļ��Ĳ����Ƿ�ɹ���</param>
		/// <param name="path">ָ������Ĺ����ļ�λ�á�</param>
		/// <returns></returns>
		virtual void onSaved(const bool success, const char* path){}

		/// <summary>
		/// �����¼���
		/// ���ú���������ʱ�������ļ��ı��������ִ����ϡ�
		/// </summary>
		/// <param name="success">ָ�����湤���ļ��Ĳ����Ƿ�ɹ���</param>
		/// <param name="path">ָ������Ĺ����ļ�λ�á�</param>
		/// <returns></returns>
		virtual void onOpened(const bool success, const char* path){}

		/// <summary>
		/// �����ļ������¼���
		/// ���ú���������ʱ���ոմ�����һ���µĹ����ļ���
		/// </summary>
		/// <param name="success">ָ�����������ļ��Ĳ����Ƿ�ɹ���</param>
		/// <returns></returns>
		virtual void onCreated(const bool success){}

		/// <summary>
		/// �����ļ��޸��¼���
		/// ���ú���������ʱ�������ļ��ս��й��޸ġ�
		/// </summary>
		/// <param name="path">ָ����ǰ�򿪵Ĺ����ļ�λ�á�</param>
		/// <returns></returns>
		virtual void onChanged(const char* path){}
	};

	/// <summary>
	/// ���湤���ռ䡣�����ǰû���Ѵ򿪵Ĺ����ռ䣬�򵯳��Ի���ѡ���ļ�����λ�á�
	/// </summary>
	/// <returns></returns>
	virtual void save() = 0;

	/// <summary>
	/// ���Ϊ�����ռ䡣�����Ի���ѡ���ļ�����λ�á�
	/// </summary>
	/// <returns></returns>
	virtual void saveAs() = 0;

	/// <summary>
	/// �رչ����ռ䡣�����ǰ���ѸĶ����Ĺ����ռ䣬�򵯳��Ի�����ʾ�Ƿ񱣴档
	/// </summary>
	/// <returns>
	/// ����ֵָ���رղ����Ƿ���ı�ִ�У���Ϊ���ǵ��ô˺��������ռ��һ���ᱻ�رգ��ò������ܱ���ֹ��
	/// �����������ʾ�����е����ȡ��������᷵��false��������ǡ��򡰷񡱶��᷵��true��
	/// </returns>
	virtual bool close() = 0;

	/// <summary>
	/// ��ӹ����ļ������¼���������
	/// </summary>
	/// <param name="watcher">�¼���������</param>
	/// <returns></returns>
	virtual void addSaveWatcher(IWorkspace::ChangedWatcher* watcher) = 0;
};


#endif // _IPROJECT_INCLUDE__


