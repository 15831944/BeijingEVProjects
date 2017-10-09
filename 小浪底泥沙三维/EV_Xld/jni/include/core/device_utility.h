#ifndef EV_DEVICE_UTILITY_H
#define EV_DEVICE_UTILITY_H
#include "core/global.h"
#include "core/stringdefines.h"
#include "core/classfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class EV_CORE_DLL CDeviceUtility
			{
			public:
				CDeviceUtility(){}
				~CDeviceUtility(){}
			ev_private:
				CDeviceUtility(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// ��ȡ���̿ռ���Ϣ
				/// </summary>
				/// <param name="disk">����</param>
				/// <param name="totalSpace">�����ܿռ䣨MB��</param>
				/// <param name="freeSpace">����ʣ��ռ䣨MB��</param>
				/// <returns>��ȡ��Ϣ�ɹ�����true��ʧ�ܷ���false</returns>
				static ev_bool getDiskFreeSpace(const EVString& disk, ev_uint64& totalSpace, ev_uint64& freeSpace);

				/// <summary>
				/// ��Ļ��ȣ�������Ϊ��λ
				/// </summary>
				static ev_uint16 mScreenWidth;
				/// <summary>
				/// ��Ļ�߶ȣ�������Ϊ��λ
				/// </summary>
				static ev_uint16 mScreenHeight;
				/// <summary>
				/// ��ĻDPI
				/// </summary>
				static ev_uint16 mScreenDpi;
				/// <summary>
				/// ����Ĭ����ĻDPI
				/// </summary>
				static const ev_uint16 mDesktopDefaultDpi;
			};
		}
	}
}

#endif