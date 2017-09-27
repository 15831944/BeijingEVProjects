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
#ifndef _INTERFACEUNKNOWN_INCLUDE__
#define _INTERFACEUNKNOWN_INCLUDE__

#include "interfacefactory.h"
#include "interfacequerier.h"

#define PluginInterface(x) \
	public: \
	virtual const char* onInterfaceName() {\
	return typeid(x).name(); \
	}

class InterfaceUnknown
{
public:
	InterfaceUnknown()
	{
		this->factory = 0;
	}

	virtual ~InterfaceUnknown() {}

	virtual const char* onInterfaceName() = 0;

	template<class T>
	InterfaceUnknown* queryInterface()
	{
		if (factory)
		{
			return factory->queryInterface<T>();
		}

		return 0;
	}

	void attachFactory(InterfaceFactory* factory)
	{
		this->factory = factory;
	}

private:
	InterfaceFactory* factory;
};

#endif // _INTERFACEUNKNOWN_INCLUDE__
