#ifndef _MODEL_COMPONENT_SELECT_TOOL_H
#define _MODEL_COMPONENT_SELECT_TOOL_H

#include "core/memoryallocatedobject.h"

#include "spatialgui/itool.h"

#include "graphic/movableobject.h"
#include "graphic/selector.h"
#include "spatial3dengine/entitylayer.h"

#include "globecontrol/globequerylistener.h"
#include "graphic/scenemanager.h"
#include "spatialgui/guievent.h"
#include "graphic/scenequery.h"
#include "spatial3dengine/i3dlayer.h"
#include "spatial3dengine/entitylayer.h"
#include "spatial3dlayer/featuregrouplayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CGlobeControl;
			}
		}
	}
}


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				/// <summary>
				/// ���ѡ����
				/// �������������ཻ
				/// ѡ��Ŀ���ĳ�����
				/// </summary>
				class EV_GLOBECONTROL_DLL CModelComponentSelector : public EarthView::World::Graphic::CRaySceneQuery
				{
				public:
					CModelComponentSelector(EarthView::World::Graphic::CSceneManager* ref_creator);
					~CModelComponentSelector();

ev_private:
					CModelComponentSelector(EarthView::World::Core::CNameValuePairList* pList);

				public:
					virtual void execute(EarthView::World::Graphic::CRaySceneQueryListener *listener);
					virtual EarthView::World::Graphic::RaySceneQueryResult &execute();
					virtual void clearResults();

					ev_void setRenderSelected(ev_bool render);
					ev_bool getRenderSelected() const;

					ev_void setViewport(EarthView::World::Graphic::CViewport* viewport);
					const EarthView::World::Graphic::CViewport* getViewport()const{return mViewport;}
				protected:
					ev_bool mRender;
					EarthView::World::Graphic::CViewport* mViewport;
					EarthView::World::Graphic::CSceneManager* mpSceneManger;
				private:
					typedef vector<	EarthView::World::Spatial3D::Atlas::IGlobeLayer *>CModelLayers;
					CModelLayers mModelLayers;
					void getFeatureLayers(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer *gl);
				};
				/// <summary>
				/// ģ�Ͳ���ѡ�񹤾���
				/// </summary>
				class EV_GLOBECONTROL_DLL CModelComponentSelectTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				protected:
					class CObjectListener : public EarthView::World::Graphic::CMovableObject::CMovableObjectListener
					{
					public:
						CObjectListener(CModelComponentSelectTool* parent)
							: mParent(parent)
						{
						}
					public:
						virtual void objectDestroyed(EarthView::World::Graphic::CMovableObject *pMovableObject);
					protected:
						CModelComponentSelectTool* mParent;
					};

					class CSelectionListener : public EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener
					{
					public:
						CSelectionListener(CModelComponentSelectTool* parent) : mParent(parent)
						{
						}
					public:
						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3D::CGlobeSelection& result);

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::RaySceneQueryResult& result);		

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::SceneQueryResult& result);
					protected:
						CModelComponentSelectTool* mParent;
					};

					friend class CObjectListener;
					friend class CSelectionListener;

				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="ref_ctrl">������ά�����ؼ�</param>
					/// <returns></returns>	
					CModelComponentSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl);
					virtual ~CModelComponentSelectTool();				
ev_private:
					CModelComponentSelectTool(EarthView::World::Core::CNameValuePairList* pList);
				public:				
					/// <summary>
					/// ��Ӧ�������ִ������
					/// </summary>
					/// <returns></returns>	
					virtual ev_void onClicked();

					/// <summary>
					/// �鿴������ά�����ؼ��Ƿ�ʹ�õ�ǰ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>�Ƿ���true,�񷵻�false</returns>	
					virtual ev_bool getChecked() const;
					/// <summary>
					/// �鿴������ά�����ؼ��Ƿ������úó���
					/// </summary>
					/// <param name=""></param>
					/// <returns>�з���true,û�з���false</returns>	
					virtual ev_bool getEnabled() const;					

					/// <summary>
					/// �����Ƿ��յ�����ľ�������
					/// </summary>
					/// <param name="sort">�Ƿ�����</param>
					/// <returns></returns>	
					void setSortByDistance(ev_bool sort);
					/// <summary>
					/// �����Ƿ��յ�����ľ�������ͽ������С
					/// </summary>
					/// <param name="sort">�Ƿ�����</param>
					/// <param name="maxresults">�������С</param>
					/// <returns></returns>	
					void setSortByDistance(ev_bool sort, ev_uint16 maxresults);
					/// <summary>
					/// �鿴�Ƿ��յ�����ľ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns>�Ƿ���true,�񷵻�false</returns>
					ev_bool getSortByDistance() const;
					/// <summary>
					/// ��ý������С
					/// </summary>
					/// <param name=""></param>
					/// <returns>�������С</returns>	
					ev_uint16 getMaxResults() const;

					/// <summary>
					/// ��ȡѡ��ʱʹ��������м������Ҽ�
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask getSelectButton()const{return mSelectButton;}

					/// <summary>
					/// ����ѡ��ʱʹ��������м������Ҽ�
					/// </summary>
					/// <returns></returns>
					void setSelectButton(EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask button){ mSelectButton = button;}

					/// <summary>
					/// ���ý����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					void resetResults();

					/// <summary>
					/// ���ص�ǰ�����ͱ�ʶ
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ͱ�ʶ</returns>	
					virtual ev_uint32 getType() const;
					/// <summary>
					/// ��갴�´���
					/// </summary>
					/// <param name="button">��갴ť��ʶ</param>
					/// <param name="shift">shift��ʶ</param>
					/// <param name="x">��갴�µĵ���x���ϵ�λ��</param>
					/// <param name="y">��갴�µĵ���y���ϵ�λ��</param>
					/// <returns>������Ϸ���false,���߲����Χ���ཻ����true</returns>	
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);					
					/// <summary>
					/// ����ͷŴ���
					/// </summary>
					/// <param name="button">��갴ť��ʶ</param>
					/// <param name="shift">shift��ʶ</param>
					/// <param name="x">��갴�µĵ���x���ϵ�λ��</param>
					/// <param name="y">��갴�µĵ���y���ϵ�λ��</param>
					/// <returns>����false</returns>	
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);


				protected:	
					ev_void clearLayerSelection();
				protected:					
					EarthView::World::Spatial3D::Controls::CGlobeControl* mControl;
					CModelComponentSelector mSelector;
					//EarthView::World::Graphic::CComponentSelector mSelector;
					ev_int32 mDownX;
					ev_int32 mDownY;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask mSelectButton;

					CObjectListener* mpObjectListener;
					CSelectionListener* mpSelectionListener;

					EV_AUTO_MUTEX;
				private:

					C_DISABLE_COPY( CModelComponentSelectTool );
				};


			}
		}
	}
}


#endif


