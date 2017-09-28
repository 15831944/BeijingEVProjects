#ifndef _STREETVIEW_SELECT_TOOL_H
#define _STREETVIEW_SELECT_TOOL_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "core/event.h"
#include "graphic/colourvalue.h"
#include "graphic/camera.h"
#include "spatialgui/itool.h"
#include "download/streetviewserviceconnection.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"
#include "geometry3d/geometry3d/vector_graphics.h"
#include "spatial3dstreetview/streetviewlayer.h"
#include "spatial3dengine/globecamera.h"

//0 billboard;1 movable
#define EV_STREET_PREVIEW 0	

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CManualObject;
		}

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
				//class CStreetViewSelectEventObject;

				class EV_Spatial3DStreetView_DLL CStreetViewSelectTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="ref_ctrl">���󳡾��ؼ�</param>
					/// <returns></returns>
					CStreetViewSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl);
#if EV_STREET_PREVIEW==0
					CStreetViewSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl,ev_real64 crisisDis,ev_real32 bubbleWidth,ev_real32 bubbleHeight,ev_real32 bubbleScale,ev_real32 bubbleTrans,ev_real32 radius);
#else
					CStreetViewSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl,ev_real64 crisisDis,ev_real32 sphereRadius,ev_real32 groundOffset,ev_uint32 cameraToBubbleScale/*ev_real32 bubbleWidth,ev_real32 bubbleHeight,ev_real32 bubbleScale,ev_real32 bubbleTrans,ev_real32 radius*/);
#endif
					virtual ~CStreetViewSelectTool();
				ev_private:
					CStreetViewSelectTool(EarthView::World::Core::CNameValuePairList* pList);

				public:
					class EV_Spatial3DStreetView_DLL ToolListener  : public EarthView::World::Core::CAllocatedObject
					{
ev_private:
						ToolListener(_in EarthView::World::Core::CNameValuePairList *pList){};
					public:
						ToolListener(){};

						virtual ~ToolListener(){};
						virtual ev_void onCreateMovableHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point){};
						virtual ev_void mouseClickHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point){};
						virtual ev_void onDestroyMovableHandle(){};
					protected:
					private:
					};

					class EV_Spatial3DStreetView_DLL CStreetCameraListener:public CGlobeCamera::CGlobeCameraListener
					{
ev_private:
						CStreetCameraListener(_in EarthView::World::Core::CNameValuePairList *pList);
					public:
						CStreetCameraListener(CStreetViewSelectTool* ref_streetTool);

						virtual ~CStreetCameraListener();

						virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera);

					private:
						CStreetViewSelectTool* mpStreetTool;
					};

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
					/// ���˫���¼���Ӧ
					/// </summary>
					/// <param name="button">GUIMouseButtonMask�����</param>
					/// <param name="shift">GUIModKeyMask�����</param>
					/// <param name="x">��Ļ����x</param>
					/// <param name="y">��Ļ����y</param>
					/// <returns>�Ƿ���Ҫ���´����¼�</returns>
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
				public:
					/// <summary>
					/// ���ѡ�񼯣���������
					/// </summary>
					ev_void clearLayerSelection();

					/// <summary>
					/// ��������
					/// </summary>
					/// <param name="lat">γ��</param>
					/// <param name="lon">����</param>
					/// <param name="memPtr">ͼƬ��</param>
					ev_void createMovable(const EarthView::World::Spatial::Download::CStreetPoint& point,const ev_bool fromPreview);

					ev_bool mouseClickEventHandle(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					ev_bool mouseMoveEventHandle(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y,ev_real32 trans,ev_real32 scaleFactor);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void addToolListener(EarthView::World::Spatial3D::SystemUI::CStreetViewSelectTool::ToolListener* pListener);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeToolListener(EarthView::World::Spatial3D::SystemUI::CStreetViewSelectTool::ToolListener* pListener);

					ev_void updateMovable(EarthView::World::Spatial3D::CGlobeCamera* globeCamera);

					ev_void updateMovable(const ev_real32 newSphereRadius,const EVString newNodeName);

					
					
				protected:

					ev_void init();

					ev_bool queryStreetViewLayer(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl,ev_real64 lat,ev_real64 lon,EarthView::World::Spatial::Download::CStreetPointList& streetPointList);
					ev_bool findNearestPoint(ev_real64 lat,ev_real64 lon,EarthView::World::Spatial::Download::CStreetPointList& streetPointList,EarthView::World::Spatial::Download::CStreetPoint& point);
					ev_bool isSelected(EarthView::World::Graphic::CViewport* viewPort,ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					//����movable�ɹ�ʱ�����������ⲿ����
					ev_void onCreateMovableHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point);

					//��굥���������ⲿ����
					ev_void mouseClickHandle(const EarthView::World::Spatial3D::CStreetViewLayer* layer,const EarthView::World::Spatial::Download::CStreetPoint& point);

					//����movableʧ��ʱ�����������ⲿ����
					ev_void onDestroyMovableHandle();
					
				protected:					
					EarthView::World::Spatial3D::Controls::CGlobeControl* mControl;

					ev_int32 mDownX;
					ev_int32 mDownY;

					//��С����ķ�ֵ
					ev_real64 mCrisisDis;

					//����Ƿ�λ��������
					ev_bool mbMouseOnBubble;

					ev_bool mbNormalState;

					//���ݵĴ���ʱ��
					EarthView::World::Core::CCoreTime mCreateTime;

					//����С�����ʱ��
					EarthView::World::Core::CCoreTime mShowPreviewTime;

					//ͼ��������Ӿ���
					ev_real64 mLayerVisibleDis;

					ev_bool mFlyBack;

#if EV_STREET_PREVIEW==0
					ev_real32 m_radius;
					
					//���ݿ��
					ev_real32 mBubbleWidth;
					//���ݸ߶�
					ev_real32 mBubbleHeight;
					//�������ű���
					ev_real32 mBubbleScale;
					//����͸����0~1
					ev_real32 mBubbleTrans;

					//����ͼƬ·��
					EVString m_iconFilePath;

					EarthView::World::Spatial::Utility::CSpatialReference* mWgsSR;
					EarthView::World::Geometry3D::CMultiPoint3DExtension* mBBS;

#else					

					//���ݵĳ�ʼ��С
					ev_real32 mSphereRadius;

					//movable������ƫ��
					ev_real32 mGroundOffset;					

					//��������ݾ�������ű�������������������������ʾ�Ĵ�С
					ev_uint32 mCameraToBubbleScale;

					EarthView::World::Geometry3D::CMovableSphere* mpMovable;
#endif
					CStreetCameraListener* mpStreetCameraListener;

					EarthView::World::Spatial::Download::CStreetPoint mCurrentNearestPoint;

					EarthView::World::Spatial3D::CStreetViewLayer* mCurrentLayer;


					//CStreetViewSelectEventObject *mpEventReceiver;

					//EV_AUTO_MUTEX;
				public:
					
					ev_void setCrisisDis(ev_real64 dis);
					ev_real64 getCrisisiDis();

					ev_void setFlyBack(const ev_bool flyBack);
#if EV_STREET_PREVIEW==0
					ev_void setRadius(ev_real32 r);
					ev_real32 getRadius();

					ev_void setBubbleWidth(ev_real32 bWidth);
					ev_real32 getBubbleWidth();

					ev_void setBubbleHeight(ev_real32 bHeight);
					ev_real32 getBubbleHeight();

					ev_void setBubbleScale(ev_real32 scale);
					ev_real32 getBubbleScale();

					ev_void setIconPath(const EVString& path);
#else
					ev_void setSphereRadius(ev_real32 radius);
					ev_real32 getSphereRadius();

					ev_void setGroundOffset(ev_real32 groundOffset);
					ev_real32 getGroundOffset();

					ev_void setCameraToBubbleScale(ev_uint32 scale);
					ev_uint32 getCameraToBubbleScale();

#endif					

					EarthView::World::Spatial3D::CStreetViewLayer* getSelectedLayer();

				private:
					C_DISABLE_COPY( CStreetViewSelectTool );

					ev_vector<EarthView::World::Spatial3D::CStreetViewLayer*> mStreetViewLayerList;
					list<EarthView::World::Spatial3D::SystemUI::CStreetViewSelectTool::ToolListener*> mToolListenerList;
				};


				/*class EV_Spatial3DStreetView_DLL CStreetViewSelectEvent : public EarthView::World::Core::CEvent
				{
				public:
					CStreetViewSelectEvent(ev_uint16 type);
					~CStreetViewSelectEvent();
ev_private:
					CStreetViewSelectEvent(EarthView::World::Core::CNameValuePairList *pList);

				public:
					EarthView::World::Spatial3D::CStreetViewLayer* getStreetViewLayer()const;
					ev_void setStreetViewLayer(EarthView::World::Spatial3D::CStreetViewLayer* ref_layer);

					EarthView::World::Spatial::Download::CStreetPoint getStreetPoint()const;
					ev_void setStreetPoint(EarthView::World::Spatial::Download::CStreetPoint& point);

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);

				protected:
					EarthView::World::Spatial3D::CStreetViewLayer* mpStreetViewLayer;
					EarthView::World::Spatial::Download::CStreetPoint mStreetPoint;
					ev_bool mResponseState;
				};


				class EV_Spatial3DStreetView_DLL CStreetViewSelectEventObject : public EarthView::World::Core::CEventObject
				{
				public:
					CStreetViewSelectEventObject(CStreetViewSelectTool* ref_streetViewTool);
					~CStreetViewSelectEventObject();
ev_private:
					CStreetViewSelectEventObject(EarthView::World::Core::CNameValuePairList *pList);

ev_internal:
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
				private:
					CStreetViewSelectTool* mpStreetViewSelectTool;
				};*/
			}
		}
	}
}

#endif