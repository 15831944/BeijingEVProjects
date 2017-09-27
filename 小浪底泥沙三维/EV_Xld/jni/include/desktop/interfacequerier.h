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
#ifndef _INTERFACEQUERIER_INCLUDE__
#define _INTERFACEQUERIER_INCLUDE__

#include "interfaceunknown.h"

template<class T>
class InterfaceQuerier
{
public:
	~InterfaceQuerier() {}

	InterfaceQuerier(InterfaceUnknown* unknown)
	{
		if (unknown)
		{
			this->unknown = dynamic_cast<T*>(unknown->queryInterface<T>());
		}
		else
		{
			this->unknown = 0;
		}
	}

	operator bool() const
	{
		return (unknown != 0);
	}

	T* operator->() const
	{
		return unknown;
	}

private:
	T* unknown;
};

#endif // _INTERFACEQUERIER_INCLUDE__
