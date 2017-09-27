#include "..\..\include\globecontrol\globecontrol.h"
#include "..\..\include\ga\guieventhandler.h"
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
					CBaseInteractiver(ev_bool eventEnable[]);
					~CBaseInteractiver();

					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;

				protected:
					EarthView::World::Graphic::CTimer* mpTimer;
					ev_bool mIsDragging = false;
					ev_bool mIsLoaded = false;
					ev_bool mIsMouseDown = false;
					EarthView::World::Spatial::Math::CVector2 mLastMouseDownScreenPos;
					
					/// <summary>
					/// �ö���ָʾ�����һ�βɵ�ĵ�������
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mLastGeoPos;
					/// <summary>
					/// ��ֵָʾ��굱ǰ�ɵ�ĵ�������
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCurrentGeoPos;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
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

					virtual bool HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

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


