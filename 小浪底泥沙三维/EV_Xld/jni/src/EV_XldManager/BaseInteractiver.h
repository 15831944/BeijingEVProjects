#include "globecontrol\globecontrol.h"
#include "ga\guieventhandler.h"
#include "RenderLibDataType.h"
#include "AnalysisEventObject.h"
#ifndef BASEINTERACTIVER_H_
#define BASEINTERACTIVER_H_
namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			namespace Base
			{
				class CBaseInteractiver : public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public:

					CBaseInteractiver(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,ev_bool eventEnable[]);

					CBaseInteractiver(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);

					~CBaseInteractiver();

					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;

					vector<EarthView::World::Spatial::Math::CVector3*>* GetHandlePoints();
				protected:
					EarthView::World::Graphic::CTimer* mpTimer;
					ev_bool mIsDragging ;
					ev_bool mIsLoaded ;
					ev_bool mIsMouseDown ;
					EarthView::Xld::RenderLib::CMousePickState mMousePickState;
					EarthView::World::Spatial::Math::CVector2 mLastMouseDownScreenPos;
					ev_uint32 mLastMouseUpTime;
					EarthView::World::Core::CEventObject* mpEventObj;
					EarthView::World::Core::CEvent* mpEvent;
					/// <summary>
					/// �ö���ָʾ�����һ�βɵ�ĵ�������
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mLastGeoPos;
					/// <summary>
					/// ��ֵָʾ��굱ǰ�ɵ�ĵ�������
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCurrentGeoPos;
					EarthView::World::Spatial::Math::CVector3 mCenterWrdPos;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
					EarthView::Xld::AnalysisTool::CAnalysisEventObject* mObejct;
					/// <summary>
					/// �÷������ڳ�ʼ�������Ĳ��������
					/// </summary>
					virtual void InitializeOthers() {};
					/// <summary>
					/// �÷������ڼ��ؽ����¼�
					/// </summary>
					void Load();
					/// <summary>
					/// �÷�������ж�ؽ����¼�
					/// </summary>
					void Unload();

					void SetInteractiveEnable(ev_bool mouseDown, ev_bool mouseUp, ev_bool mouseMove, ev_bool mouseDoubleClick);

					virtual bool HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					/// <summary>
					/// �÷������ڴ���ɵ���Ϣ,Ĭ������ӵ�Ŀ������ⲿ�������ͷ�
					/// </summary>
					/// <param name="vPos">��ֵָʾ�������ɼ��ĵ���Ϣ��һ��Ϊ��������</param>
					virtual void HandlePoint(EarthView::World::Spatial::Math::CVector3* vPos);

					/// <summary>
					/// �÷������ڴ洢������ĵ�
					/// </summary>
					/// <param name="handledPos">��ֵָʾ��HandlePoint����ĵ�</param>
					void EarthView::Xld::RenderLib::Base::CBaseInteractiver::AddPoint(EarthView::World::Spatial::Math::CVector3* handledPos);

					virtual void EndPickOver();

				private:
					/// <summary>
					/// �÷������ڼ��ؽ����¼�
					/// </summary>
					ev_bool mEvents[4];
					
					/// <summary>
					/// �÷������ڼ��ؽ����¼�
					/// </summary>
					vector<EarthView::World::Spatial::Math::CVector3*> mHandlePoints;
				};
			}
		}
	}
}
#endif // BASEINTERACTIVER_H_


