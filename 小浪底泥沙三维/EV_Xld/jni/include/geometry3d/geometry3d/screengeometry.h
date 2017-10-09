#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENGEOMETRY_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENGEOMETRY_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "graphic/scenemanager.h"
#include "graphic/viewport.h"
#include "graphic/camera.h"

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geometry3d/simplerenderableex.h"

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// ��Ļʸ����������
			/// <summary>
			enum  ScreenGeometryCoordinateType
			{
				/// <summary>
				/// �����������꣬ԭ��Ϊ�ӿ����Ͻ�
				/// <summary>
				SGCT_Pixel = 0,
				/// <summary>
				/// ���õ�λ����ԭ��Ϊ�ӿ����ģ�x����������-1.0-1.0,y����������-1.0-1.0
				/// <summary>
				SGCT_Identity
			};

			/// <summary>
			///��Ļʸ������
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenGeometry : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// ���캯��,�����ڳ����򿪺����,Ĭ�������ֻ�����ӿ���Ⱦ,����ֵ�ο�Ϊ���ӿ�
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CScreenGeometry(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// ���캯��,�����ڳ����򿪺����,Ĭ�������ֻ�����ӿ���Ⱦ,����ֵ�ο�Ϊ���ӿ�
				/// </summary>
				/// <param name="scenemanager">����������</param>
				/// <returns></returns>
				CScreenGeometry(EarthView::World::Graphic::CSceneManager* ref_scenemanager);
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenGeometry();

			public:		
				/// <summary>
				/// ������������,������begin֮ǰ���ò���Ч
				/// </summary>
				/// <param name="type">����</param>
				/// <returns></returns>
				void setCoordinateType(ScreenGeometryCoordinateType type);
				/// <summary>
				/// ��ȡ��������
				/// </summary>
				/// <returns></returns>
				ScreenGeometryCoordinateType getCoordinateType();

				/// <summary>
				/// ������Ⱦ��Ļʸ�������ӿ�
				/// </summary>
				/// <param name="type">����</param>
				/// <returns></returns>
				void addChildViewport(EarthView::World::Graphic::CViewport* ref_viewport);

				/// <summary>
				/// ����Ƿ���Ⱦ����Ļʸ��
				/// </summary>
				/// <param name="type">����</param>
				/// <returns></returns>
				ev_bool hasChildViewport(EarthView::World::Graphic::CViewport* ref_viewport);

				/// <summary>
				/// �Ƴ���Ⱦ��Ļʸ�������ӿ����
				/// </summary>
				/// <param name="type">����</param>
				/// <returns></returns>
				ev_bool removeChildViewport(EarthView::World::Graphic::CViewport* ref_viewport);

				/// <summary>
				/// �������ӿ��Ƿ���Ⱦ�˶���
				/// </summary>
				/// <param name="type">����</param>
				/// <returns></returns>
				ev_bool setVisibleInGlobeViewport(ev_bool value);

				/// <summary>
				/// �ҽ�
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void render();

				/// <summary>
				/// ���ҽ�
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void derender();
				
				/// <summary>
				/// �����Ƿ�ɼ�               
				/// </summary>
				/// <param name="visible">�Ƿ�ɼ�</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);

				/// <summary>
				/// �Ƿ�ɼ�               
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool getVisible() const;

				/// <summary>
				/// ������Ⱦ��������Ϣ
				/// </summary>
				/// <param name="queueID">����ID��</param>
				/// <returns></returns>
				virtual void setRenderQueueGroup(ev_uint8 queueID);
				/// <summary>
				/// ������Ⱦ��������Ϣ�Ͷ������ȼ�
				/// </summary>
				/// <param name="queueID">����ID��</param>
				/// <param name="priority">���ȼ�</param>
				/// <returns></returns>
				virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
				/// <summary>
				/// ��ȡ��ʵ�����Ⱦ������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint8 getRenderQueueGroup() const;
				/// <summary>
				/// ��ȡ����				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				virtual EarthView::World::Graphic::CMaterialPtr& getMaterial();
				/// <summary>
				/// ��˸
				/// <param name="color">������ɫ</param>
				/// <param name="hightLight_ms">����ʱ��(��λ������)</param>
				/// <param name="normally_ms">�Ǹ���ʱ��(��λ������)</param>
				/// <param name="flashCount">��˸����</param>
				/// </summary>
				/// <returns></returns>
				virtual void flash(const EarthView::World::Graphic::CColourValue& color, ev_uint32 hightLight_ms, ev_uint32 normally_ms,ev_uint32 flashCount);
				/// <summary>
				/// ������˸
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();

			protected:

				class CScreenGeometrySceneManagerListener : public EarthView::World::Graphic::CSceneManager::CSceneManagerListener
				{
				public:
					CScreenGeometrySceneManagerListener(CScreenGeometry* parent);

					 virtual void preFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v);
					 virtual void postFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source,EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v);
				private:
					CScreenGeometry* mParent;
				};

				class CScreenGeometryViewportListener : public EarthView::World::Graphic::CViewport::CViewportListener
				{
				public:
					CScreenGeometryViewportListener(CScreenGeometry* parent);

					virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport *viewport);
				private:
					CScreenGeometry* mParent;
				};

				void initial();

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);

				virtual void setInternalVisible(ev_bool visible);

				static EarthView::World::Graphic::CMaterialPtr createOrGetDefaultMaterial();

				void preRenderScene( _in EarthView::World::Graphic::CViewport*viewport);
				void postRenderScene( _in EarthView::World::Graphic::CViewport*viewport);

				Real change2PiexlCoords(Real vw,Real vh,Real w,EarthView::World::Spatial::Math::CVector2& p);
				void change2IdentityCoords(Real vw,Real vh,EarthView::World::Spatial::Math::CVector3& p);

			private:
				/// <summary>
				/// ���ƹ��캯��
				/// </summary>
				/// <param name="obj">����</param>
				/// <returns></returns>
				CScreenGeometry(const CScreenGeometry& obj);
			protected:
				ScreenGeometryCoordinateType mCoordinateType;

				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				EarthView::World::Graphic::CViewport* mpGlobeViewport;

				EarthView::World::Graphic::CMaterialPtr mpMaterial;
				CSimpleRenderableEx* mpRenderable;

				friend class CScreenGeometrySceneManagerListener;
				set<EarthView::World::Graphic::CViewport*> mSetRenderViewports;
				CScreenGeometrySceneManagerListener* mpSceneManagerListener;
				CScreenGeometryViewportListener* mpViewportListener;

				ev_bool mVisible;
			};
		}
	}
}
#endif
