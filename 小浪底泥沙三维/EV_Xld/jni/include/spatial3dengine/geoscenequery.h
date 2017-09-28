#ifndef __GEOSCENEQUERY_H__
#define __GEOSCENEQUERY_H__

#include "graphic/scenequery.h"
#include "spatial3dengine/spatial3denginecomdef.h"

using namespace EarthView::World::Graphic;
using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Atlas;

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			/// <summary>
			/// ������RaySceneQueryResult��ֻ�����ṩһ�������������ⲿobjID��componentֵ,�������ô�;
			/// </summary>
			class EV_Spatial3DEngine_DLL RaySceneQueryResultSimple : public EarthView::World::Graphic::RaySceneQueryResult
			{
			public :
				RaySceneQueryResultSimple();
				RaySceneQueryResultSimple(RaySceneQueryResult *pParentRaySceneQueryResult);
				~RaySceneQueryResultSimple();

			private:
				struct internalInfo
				{
					ev_uint32 _objID;
					EarthView::World::Spatial3D::CComponent mComponent;

					internalInfo()
					{
						_objID = 0;
					}

					internalInfo(const internalInfo& rInfo)
					{
						if(this != &rInfo)
						{
							_objID = rInfo._objID;

							mComponent.mID = rInfo.mComponent.mID;
							mComponent.name = rInfo.mComponent.name;
							mComponent.mSubComponents = rInfo.mComponent.mSubComponents;
							mComponent.mOffsetMatrix = rInfo.mComponent.mOffsetMatrix;
							mComponent.mComponentUnits = rInfo.mComponent.mComponentUnits;
							mComponent.mModelType = rInfo.mComponent.mModelType;
							mComponent.mBounds = rInfo.mComponent.mBounds;
						}
					}

				};

				std::vector<internalInfo> mInternalInfos;

ev_private:
				RaySceneQueryResultSimple(_in EarthView::World::Core::CNameValuePairList *pList);

			public:

				/// <summary>
				/// ͨ��RaySceneQueryResult��ָ��ȥ��ȡ��Ӧ��objectID��componentȻ�󱣴浽vector�У����ⲿʹ��;
				/// </summary>
				/// <returns>����false��ʾ����ʧ��</returns>
				ev_bool queryObjIDAndComponent();

				/// <summary>
				/// ����index��ȡobjID��component
				/// </summary>
				/// <returns>����false��ʾ������</returns>
				ev_bool getComponent(_in ev_uint32 index, _out ev_uint32& objID, _out EarthView::World::Spatial3D::CComponent& component);

				ev_uint32 getComponentsSize()
				{
					return mInternalInfos.size();
				}

			private:
				RaySceneQueryResult *mpParent;

			};
		}
	}
}




#endif