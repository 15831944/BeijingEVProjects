
#ifndef TERRAINMANAGER_H_
#define TERRAINMANAGER_H_

#include "core\stringdefines.h"
#include "GISDataType.h"
#include "TerrainMovable.h"
#include "globecontrol\globecontrol.h"


namespace EarthView
{
	namespace Xld 
	{
		namespace RenderLib
		{
			class CTerrainManager
			{
				friend class CWaterConservancyManager;
			public:

				~CTerrainManager();

				/// <summary>
				///����ģʽ��ȡCTerrainManager����
				/// </summary>
				static EarthView::Xld::RenderLib::CTerrainManager& getSingleton();

				/// <summary>
				///����ģʽ��ȡCTerrainManagerָ��
				/// </summary>
				static EarthView::Xld::RenderLib::CTerrainManager* getSingletonPtr();

				static ev_real64 CenterX;

				static ev_real64 CenterY;

				static ev_real64 CenterZ;
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name="grdFileName">grd�ļ���</param>
			    void CreateGrdTerrain(const EVString& grdFileName);

				/// <summary>
				/// ��������
				/// </summary>
				/// <param name="name">���ε�����</param>
				/// <param name="pData">grd����</param>
				void CreateTerrain(const EVString& name,EarthView::GISDataType::CGrdData* pData);

				/// <summary>
				/// ��������
				/// </summary>
				/// <param name="name">���ε�����</param>
				void DeleteTerrain(const EVString& name);

				EVString GetTerrainName(const ev_int32 index);

				ev_uint64 GetTerrainCount();

				void SetTerrainVisible(EVString name, ev_bool isVisible);

				ev_bool GetTerrainVisible(EVString name);

				void RaiseTerrain(EVString name,ev_real64 zOffset);

			protected:
				
				static EarthView::Xld::RenderLib::CTerrainManager* mpSingleton;
				static ev_uint64 TerrainCount;

				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
				CTerrainManager();
				ev_map<EVString, EarthView::Xld::RenderableObject::CTerrainMovable*> mTerrainList;
				ev_map<EVString, CSceneNode*> mNodeList;
				vector<EVString> mTerrainNameList;
				vector<EarthView::GISDataType::CGrdData*> grdDatas;

			};
		}

	}
}

#endif


