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
// 0			2014/01/10		�Բ���		�ඨ��
//
#ifndef _WINDOWINTERFACE_INCLUDE__
#define _WINDOWINTERFACE_INCLUDE__

#include "../interfacequerier.h"
#include "frameworkdefs.h"

class FloatWindow
{
public:

	/// <summary>
	/// ��ʾ�������ڡ�
	/// </summary>
	/// <returns></returns>
	virtual void show() = 0;

	/// <summary>
	/// �����������ڡ�
	/// </summary>
	/// <returns></returns>
	virtual void eject() = 0;

	/// <summary>
	/// ��ȡ�������ڵ���ʾ״̬����Ϊ�ô��ڿ��Ա��û��رա�
	/// </summary>
	/// <returns>�Ƿ�����ʾ״̬��</returns>
	virtual bool isVisible() const = 0;

	/// <summary>
	/// ��ȡ���ڶ���
	/// </summary>
	/// <returns>���ڶ�������</returns>
	virtual FrameworkDefines::WindowHandle window() const = 0;
};

class IWindow : public InterfaceUnknown
{
	PluginInterface(IWindow)
public:
	virtual ~IWindow(){}

	/// <summary>
	/// ��ȡ�����ڶ���
	/// </summary>
	/// <returns>�����ڶ���</returns>
	virtual FrameworkDefines::WindowHandle window() const = 0;

	/// <summary>
	/// ����������
	/// </summary>
	/// <param name="widget">����QWidget��</param>
	/// <param name="name">�������ơ�</param>
	/// <param name="icon">����ͼ�ꡣ</param>
	/// <returns></returns>
	virtual void addLeftSideBar(FrameworkDefines::WindowHandle wid, const char* name, const char* iconPath) = 0;

	/// <summary>
	/// ����ұ�����
	/// </summary>
	/// <param name="widget">����QWidget��</param>
	/// <param name="name">�������ơ�</param>
	/// <param name="icon">����ͼ�ꡣ</param>
	/// <returns></returns>
	virtual void addRightSideBar(FrameworkDefines::WindowHandle wid, const char* name, const char* iconPath) = 0;

	/// <summary>
	/// ��ʾ�������
	/// </summary>
	/// <param name="name">�������ơ�</param>
	/// <returns></returns>
	virtual void showSideBar(const char* name) = 0;

	/// <summary>
	/// ������Ҫ��QWidget��
	/// </summary>
	/// <param name="widget">QWidget��</param>
	/// <returns></returns>
	virtual void setCentralWidget(FrameworkDefines::WindowHandle widget) = 0;

	/// <summary>
	/// </summary>
	/// <param name="widget"></param>
	/// <returns></returns>
	virtual FloatWindow& addFloatWindow(FrameworkDefines::WindowHandle wid, const char* title) = 0;
};

#endif // _WINDOWINTERFACE_INCLUDE__

