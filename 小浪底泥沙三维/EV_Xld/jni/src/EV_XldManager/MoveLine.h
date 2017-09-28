
#ifndef MOVELINE_H_
#define  MOVELINE_H_
#include "RenderLibDataType.h"
#include "globecontrol\globecontrol.h"
#include "mathengine\vector3.h"
#include "graphic\scenenode.h"
#include "spatial3danalysisobject\mathutility3d.h"
namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			class CMoveLine
			{
			public:
				CMoveLine(const EVString& name, EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, CMoveLineType style);
				~CMoveLine();
				/// <summary>
				/// �������ĵ�
				/// </summary>
				/// <param name="center">���ĵ��������(����,γ��,�߶�)</param>
				void SetCenter(EarthView::World::Spatial::Math::CVector3& point);
				/// <summary>
				/// �ı��ƶ���
				/// </summary>
				/// <param name="current">�ƶ����������(����,γ��,0)</param>
				void ChangeCurrent(EarthView::World::Spatial::Math::CVector3& currentPoint);
			private:
				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
				CMoveLineType mLineType;
				EarthView::World::Graphic::CManualObject* mpManualObject;
				EarthView::World::Spatial::Math::CVector3 mGeoFirstPoint;
				EarthView::World::Spatial::Math::CVector3 mGeoCenterPoint;
				EarthView::World::Spatial::Math::CVector3 mGeoCurrentPoint;
				EarthView::World::Graphic::CSceneNode* mpSceneNode;
				EarthView::World::Spatial::Math::CVector3 mPosition;
				EarthView::World::Graphic::CColourValue mLineColor;
				EVString mName;
				ev_int32 mInsertCount;
				EarthView::World::Spatial3D::Analysis::CMathUtility3D mMathUtility3D;
				void CreateMesh();
			};
		}
	}
}
#endif
