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
#ifndef _INTERFACEFACTORY_INCLUDE__
#define _INTERFACEFACTORY_INCLUDE__

#include <string>
#include <map>
#include <typeinfo>
class InterfaceUnknown;
class InterfaceFactory
{
public:
	InterfaceFactory() {}
	~InterfaceFactory() {}

	template<class T>
	T* createInterface()
	{
		T* obj = new T;
		obj->attachFactory(this);
		addInterface(obj);
		return obj;
	}

	template<class T, class P1>
	T* createInterface(P1 p)
	{
		T* obj = new T(p);
		obj->attachFactory(this);
		addInterface(obj);
		return obj;
	}

	template<class T>
	void addInterface(T* obj)
	{
		std::string interfaceName = obj->onInterfaceName();
		interfaceMap[interfaceName] = obj;
	}
	
	template<class T>
	InterfaceUnknown* queryInterface()
	{
		return interfaceMap[typeid(T).name()];
	}

	std::map<std::string, InterfaceUnknown*> interfaceMap;
};

#endif // _INTERFACEFACTORY_INCLUDE__
