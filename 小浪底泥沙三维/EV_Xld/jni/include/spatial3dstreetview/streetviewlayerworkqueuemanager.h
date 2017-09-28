#ifndef _STREETVIEW_LAYER_WORKQUEUEMANAGER_H
#define _STREETVIEW_LAYER_WORKQUEUEMANAGER_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <core/workqueue.h>
#include <core/defaultworkqueuestandard.h>
#include <graphic/framelistener.h>

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			/// <summary>
			/// �־�ͼ���̶߳��й�����
			/// </summary>
			class EV_Spatial3DStreetView_DLL CStreetViewLayerWorkQueueManager : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// ֡����
				/// 
				/// </summary>
				class CStreetViewLayer3dWorkQueueListener : public EarthView::World::Graphic::CFrameListener
				{
				private:
					EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* mpParent;
				public:
					CStreetViewLayer3dWorkQueueListener(EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* pParent);
					virtual ~CStreetViewLayer3dWorkQueueListener();
					/// <summary>
					/// ֡��Ⱦ֮�󱻵���
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
				};
			private:
				static EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* mpSingletonPtr;

				//�������Ĺ�������
				EarthView::World::Core::CWorkQueue* mpStreetViewWorkQueue;
				CStreetViewLayer3dWorkQueueListener* mpListener;

ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CStreetViewLayerWorkQueueManager(_in EarthView::World::Core::CNameValuePairList *pList);

			protected:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CStreetViewLayerWorkQueueManager(); 
			public:
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CStreetViewLayerWorkQueueManager();

				/// <summary>
				/// ��ȡ����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* getSingletonPtr();
				/// <summary>
				/// �ͷŵ���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static ev_void releaseSingleton();

				/// <summary>
				/// ��ȡ����
				/// </summary>
				/// <returns></returns>
				EarthView::World::Core::CWorkQueue* getStreetViewWorkQueue();
			};

		}
	}
}

#endif