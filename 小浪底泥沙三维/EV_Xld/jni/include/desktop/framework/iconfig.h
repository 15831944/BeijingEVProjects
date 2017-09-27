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
#ifndef _ICONFIG_INCLUDE__
#define _ICONFIG_INCLUDE__

#include "../interfacequerier.h"
#include "frameworkdefs.h"

class IConfigWidget
{
public:
	~IConfigWidget(){}

	/// <summary>
	/// ��ȡ���ý����widget��
	/// !!! ��Ҫע����Ǹýӿڿ��ܱ����ö�Σ�����Ҫ��֤��ε��øú������ص�QWidget��ͬһ����
	/// </summary>
	/// <returns>QWidget����</returns>
	virtual FrameworkDefines::WindowHandle widget() = 0;

	/// <summary>
	/// �������ý������ơ�
	/// </summary>
	/// <returns>�������ơ�</returns>
	virtual const char* name() const = 0;

	/// <summary>
	/// �������ý��档�ú���һ�������øı䡢��Ҫ���½���Ԫ��ʱ�����á�
	/// </summary>
	/// <returns></returns>
	virtual void updateContents() = 0;

	/// <summary>
	/// ����������Ϣ���������ϵ�������Ϣ���浽�����ļ���
	/// </summary>
	/// <returns>�����Ƿ�ɹ���</returns>
	virtual bool save() = 0;

	/// <summary>
	/// ���ؽ����ϵ�������Ϣ�Ƿ�ı䡣
	/// </summary>
	/// <returns>������Ϣ�Ƿ�ı䡣</returns>
	virtual bool isChanged() = 0;

	/// <summary>
	/// �������ý���ӿڣ��ýӿ��ṩ���ý���ͱ�Ҫ����Ϣ��
	/// </summary>
	/// <param name="IConfigWidget">���ý���ӿڶ���</param>
	/// <returns></returns>
	virtual bool isRestartRequired() = 0;

	/// <summary>
	/// �������ã��ָ�Ĭ��ֵ��
	/// </summary>
	/// <returns></returns>
	virtual void reset() = 0;
};

class IConfig : public InterfaceUnknown
{
	PluginInterface(IConfig)
public:
	virtual ~IConfig(){}
	
	/// <summary>
	/// ��ʾ���ô��ڣ�������ʾ���ǲ���Լ������ý��档
	/// </summary>
	/// <returns></returns>
	virtual void showConfigDialog() = 0;

	/// <summary>
	/// ��ȡ�����ļ�·���������ȡ����ÿ������Լ��������ļ����·����
	/// *** �ú����������롣
	/// </summary>
	/// <returns>�����ļ�·����</returns>
	virtual const char* configPath() const = 0;

	/// <summary>
	/// �������ý���ӿڣ��ýӿ���ʹ����ʵ�֣��ṩ���ý���ͱ�Ҫ����Ϣ��
	/// </summary>
	/// <param name="IConfigWidget">���ý���ӿڶ���</param>
	/// <returns></returns>
	virtual void setConfigWidget(IConfigWidget* cw) = 0;

	/// <summary>
	/// ��ȡ������Ϣ�Ƿ�ı䣨�û��Ƿ���Ӧ�û���ȷ������
	/// ���صĽ���ڵ��ô˺���֮��ᱻ���ã���ÿ�α���֮���һ�ε��÷��صĽ��Ϊtrue����
	/// </summary>
	/// <returns>������Ϣ�Ƿ�ı䡣</returns>
	virtual bool isConfigChanged() const = 0;
};

#endif // _ICONFIG_INCLUDE__

