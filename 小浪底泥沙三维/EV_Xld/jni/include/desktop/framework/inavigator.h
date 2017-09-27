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
// 0			2014/01/14		�Բ���		�ඨ��
//
#ifndef _INAVIGATOR_INCLUDE__
#define _INAVIGATOR_INCLUDE__

#include "../interfacequerier.h"
#include "frameworkdefs.h"
#include "triggeraction.h"

class NavigatorSection
{
public:
	virtual ~NavigatorSection() {}
	
	/// <summary>
	/// ���action��
	/// </summary>
	/// <param name="actionName">action���ơ�</param>
	/// <param name="iconPath">actionͼ��·����</param>
	/// <param name="triggerAction">ITriggerAction�������ڽ��հ�ť����¼���</param>
	/// <param name="checkable">���ð�ť�Ƿ������ѡ��״̬��Ĭ���ǲ���ѡ�С�</param>
	/// <returns></returns>
	virtual void addAction(const char* actionName, const char* iconPath, 
							ITriggerAction* triggerAction, bool checkable = false) = 0;

	/// <summary>
	/// ������������ӿؼ���
	/// </summary>
	/// <param name="name">��ʾ���ơ�</param>
	/// <param name="wid">�ؼ����ھ����</param>
	/// <returns></returns>
	virtual void addWidget(const char* name, FrameworkDefines::WindowHandle wid) = 0;

	/// <summary>
	/// ���һ���ָ�����
	/// </summary>
	/// <returns></returns>
	virtual void addSeparator() = 0;
};

class INavigator : public InterfaceUnknown
{
	PluginInterface(INavigator)
public:
	virtual ~INavigator() {}

	class SelectChangeWatcher
	{
	public:
		virtual ~SelectChangeWatcher(){}

		virtual void onSelectChanged(const char* currentSelected) = 0;
	};

	/// <summary>
	/// ��ȡ������section����ָ�������������ڣ���ᴴ��һ����
	/// </summary>
	/// <param name="sectionName">���������ơ�</param>
	/// <returns>NavigatorSection�������ڲ�����������</returns>
	virtual NavigatorSection& section(const char* sectionName) = 0;

	/// <summary>
	/// ��ȡר�õ�����section����ָ�������������ڣ���ᴴ��һ����
	/// </summary>
	/// <param name="sectionName">���������ơ�</param>
	/// <returns>NavigatorSection�������ڲ�����������</returns>
	virtual NavigatorSection& featuredSection(const char* sectionName) = 0;

	/// <summary>
	/// �Ƴ���������
	/// </summary>
	/// <param name="text">���������ơ�</param>
	/// <returns></returns>
	virtual void removeSection(const char* sectionName) = 0;

	/// <summary>
	/// �Ƴ�����ר�õ�������
	/// </summary>
	/// <returns></returns>
	virtual void removeAllFeaturedSection() = 0;

	/// <summary>
	/// ���õ�����ר�ð�ť�������⡣
	/// </summary>
	/// <param name="text">�������֡�</param>
	/// <param name="color">������ɫ������"#0f0f0f"��</param>
	/// <returns></returns>
	virtual void setFeatruedTitle(const char* title, const char* color) = 0;

	/// <summary>
	/// ���õ�ǰѡ�еİ�ť��
	/// </summary>
	/// <param name="sectionName">��ť���֡�</param>
	/// <returns></returns>
	virtual void setSelectedSection(const char* sectionName) = 0;

	/// <summary>
	/// ��ȡ��ǰѡ�еİ�ť�����֡�
	/// </summary>
	/// <returns>��ť���֡�</returns>
	virtual const char* selectedSection() const = 0;

	/// <summary>
	/// ��Ӽ��ӵ�������ǩҳѡ��ı�ļ�������
	/// </summary>
	/// <param name="watcher">����������</param>
	/// <returns></returns>
	virtual void addSelectChangeWatcher(SelectChangeWatcher* watcher) = 0;
};

#endif // _INAVIGATOR_INCLUDE__

