#ifndef _MODEL_RAY_QUERY_TOOL_H
#define _MODEL_RAY_QUERY_TOOL_H

#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"

#include "spatialgui/itool.h"

#include "graphic/movableobject.h"
#include "graphic/editboundingbox.h"
#include "graphic/selector.h"

#include "core/ev_time.h"

#include "globecontrol/globequerylistener.h"

#include "spatialgui/guievent.h"
#include "graphic/scenemanager.h"





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
		namespace Spatial
		{
			namespace Utility
			{
				class CSpatialReference;
			}

			namespace GeoDataset
			{
				class IQueryFilter;
			}
		}

		namespace Spatial3D
		{
			namespace Atlas
			{
				class CFeatureGroupLayer;
			}

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
				/// ����ѡ����
				/// �����澫ȷѡ��            
				/// </summary>
				class EV_GLOBECONTROL_DLL CModelRaySelector : public EarthView::World::Graphic::CRaySceneQuery
				{
				public:
					CModelRaySelector(EarthView::World::Graphic::CSceneManager* ref_creator);
					~CModelRaySelector();

ev_private:
					CModelRaySelector(EarthView::World::Core::CNameValuePairList* pList);

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


				class EV_GLOBECONTROL_DLL CModelRaySelectTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				protected:
					class CObjectListener : public EarthView::World::Graphic::CMovableObject::CMovableObjectListener
					{
					public:
						CObjectListener(CModelRaySelectTool* parent)
							: mParent(parent)
						{
						}
					public:
						virtual void objectDestroyed(EarthView::World::Graphic::CMovableObject *pMovableObject);
					protected:
						CModelRaySelectTool* mParent;
					};

					class CSelectionListener : public EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener
					{
					public:
						CSelectionListener(CModelRaySelectTool* parent) : mParent(parent)
						{
						}
					public:
						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3D::CGlobeSelection& result);

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::RaySceneQueryResult& result);					

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::SceneQueryResult& result);
					protected:
						CModelRaySelectTool* mParent;
					};

					friend class CObjectListener;
					friend class CSelectionListener;

				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="ref_ctrl">���󳡾��ؼ�</param>
					/// <returns></returns>
					CModelRaySelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl);
					/// <summary>
					/// ��������
					/// </summary>
					virtual ~CModelRaySelectTool();
ev_private:
					CModelRaySelectTool(EarthView::World::Core::CNameValuePairList* pList);

				public:				
					/// <summary>
					/// ���ߴ�����Ϣ��Ӧ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();

					/// <summary>
					/// ��ѯ�����Ƿ��ڼ���״̬
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����true�����򷵻�false</returns>
					virtual ev_bool getChecked() const;
					/// <summary>
					/// ��ѯ�����Ƿ����
					/// </summary>
					/// <param name=""></param>
					/// <returns>���÷���true�����򷵻�false</returns>
					virtual ev_bool getEnabled() const;		

					/// <summary>
					/// ��ȡ�����Ƿ����༭����(Ĭ���ǿ�����)
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����򷵻�true�����򷵻�false</returns>
					ev_bool getEditable()const;

					/// <summary>
					/// ���ù����Ƿ����༭����
					/// </summary>
					/// <param name="editable">�Ƿ�����</param>
					/// <returns></returns>
					void setEditable(ev_bool editable);


					/// <summary>
					/// �����Ƿ񰴾�������
					/// </summary>
					/// <param name="sort">�Ƿ�����</param>
					/// <returns></returns>
					void setSortByDistance(ev_bool sort);
					/// <summary>
					/// �����Ƿ񰴾�������
					/// </summary>
					/// <param name="sort">�Ƿ�����</param>
					/// <param name="sort">���Ľ������</param>
					/// <returns></returns>
					void setSortByDistance(ev_bool sort, ev_uint16 maxresults);
					/// <summary>
					/// ��ѯ�Ƿ񰴾�������
					/// </summary>
					/// <returns>�Ƿ񰴾�������</returns>
					ev_bool getSortByDistance() const;
					/// <summary>
					/// ������������
					/// </summary>
					/// <returns>���������</returns>
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
					/// ��ս����
					/// </summary>
					/// <returns></returns>
					void resetResults();

					/// <summary>
					/// ��ѯ��������
					/// </summary>
					/// <returns>��������EVToolType</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// ��갴���¼���Ӧ
					/// </summary>
					/// <param name="button">GUIMouseButtonMask�����</param>
					/// <param name="shift">GUIModKeyMask�����</param>
					/// <param name="x">��Ļ����x</param>
					/// <param name="y">��Ļ����y</param>
					/// <returns>�Ƿ���Ҫ���´����¼�</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// ���˫���¼���Ӧ
					/// </summary>
					/// <param name="button">GUIMouseButtonMask�����</param>
					/// <param name="shift">GUIModKeyMask�����</param>
					/// <param name="x">��Ļ����x</param>
					/// <param name="y">��Ļ����y</param>
					/// <returns>�Ƿ���Ҫ���´����¼�</returns>
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// ��굯���¼���Ӧ
					/// </summary>
					/// <param name="button">GUIMouseButtonMask�����</param>
					/// <param name="shift">GUIModKeyMask�����</param>
					/// <param name="x">��Ļ����x</param>
					/// <param name="y">��Ļ����y</param>
					/// <returns>�Ƿ���Ҫ���´����¼�</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// ����ƶ��¼���Ӧ
					/// </summary>
					/// <param name="button">GUIMouseButtonMask�����</param>
					/// <param name="shift">GUIModKeyMask�����</param>
					/// <param name="x">��Ļ����x</param>
					/// <param name="y">��Ļ����y</param>
					/// <returns>�Ƿ���Ҫ���´����¼�</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// ���̰����¼�����
					/// </summary>
					/// <param name="key">���µļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <returns>�Ƿ�����򸸿ؼ����͸��¼�</returns>
					virtual ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);
				protected:
					ev_bool pickEditableObjectFromResult(const EarthView::World::Spatial::Math::CRay& ray);
					ev_void updateSelectedObjectTo(ev_int32 key,ev_int32 x,ev_int32 y,EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type);

					EarthView::World::Spatial::Math::CVector3 inverseProject(const EarthView::World::Spatial::Math::CVector3& position);
					ev_bool isEditing()const;

					ev_void clearLayerSelection();
					ev_bool queryClampFeatureLayer(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl,EarthView::World::Spatial::GeoDataset::IQueryFilter* qf,EarthView::World::Spatial3D::CGlobeSelection& selection);
				protected:					
					EarthView::World::Spatial3D::Controls::CGlobeControl* mControl;
					CModelRaySelector mSelector;

					ev_int32 mDownX;
					ev_int32 mDownY;
					EarthView::World::Spatial::Math::CMatrix4 mDownMatrix;
					EarthView::World::Core::CCoreTime mDownTime;

					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask mSelectButton;

					ev_bool mDraging;
					ev_bool mDoubleClicked;

					EarthView::World::Graphic::CEditBoundingBox::TrackingType mTrackingType;					

					EarthView::World::Graphic::RaySceneQueryResultEntry* mPickingMovable;

					CObjectListener* mpObjectListener;
					CSelectionListener* mpSelectionListener;

					ev_bool mEditable;

					EV_AUTO_MUTEX;

					EarthView::World::Spatial::Utility::CSpatialReference* mWgsSR;
				private:
					C_DISABLE_COPY( CModelRaySelectTool );
				};
			}
		}
	}
}


#endif


