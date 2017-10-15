#ifndef WATERCONSERVANCYMANAGER_H_
#define WATERCONSERVANCYMANAGER_H_

#include "xldmanager_cfg.h"
#include "globecontrol\globecontrol.h"

namespace EarthView
{
	namespace XldManager
	{
		class EV_XLDMANAGER_DLL CWaterConservancyManager:public EarthView::World::Core::CBaseObject
		{
			
			friend class CTerrainManager;
			friend class CBilloardManager;
			friend class CWaterConservancyDataEngine;
		ev_private:
			CWaterConservancyManager(EarthView::World::Core::CNameValuePairList* pList);
		public:

			static CWaterConservancyManager* GetSingletonPtr();
			~CWaterConservancyManager();
			void Initialise(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globecontrol,EVString& runtimePath);
			void SetExaggerationFactor(const ev_real32& factor);
			void CreateTerrain(const EVString& grdFileName);
			EVString GetTerrainName(const ev_int32 terrainIndex);
			void SetTerrainVisible(const EVString& terrainName,const ev_bool& isVisible);
			void SetTerrainOffset(const EVString& terrainName, const ev_real64 offset);
			void MarkPosistion(const EVString& name, const EVString & imgeFileName, const EVString& tip, ev_real64 longi, ev_real64 lati, ev_real64 alti);
			
			void SetSectionQueryEnable(const ev_bool& isEnable);
			void SetTerrainHeightQueryEnable(const ev_bool& isEnable);
			
			/// <summary>
			/// ����ˮ�棬�÷���������ˮ��ʱʹ�ã����ҽ�ʹ��һ�μ���
			/// </summary>
			/// <param name="waterHeight">ˮ��߶�</param>
			void CreateWaterSurface(const ev_real64& waterHeight);
			/// <summary>
			/// ����ˮ��Ŀɼ���
			/// </summary>
			/// <param name="isVisible">�Ƿ�ɼ�</param>
			void SetWaterSurfaceVisible(const ev_bool& isVisible);
			/// <summary>
			/// ����ˮλ�߶�
			/// </summary>
			/// <param name="waterLineHeight">ˮλ��ֵ</param>
			void SetWaterLineHeight(const ev_real64& waterLineHeight);
			/// <summary>
			/// ɾ��ˮ��
			/// </summary>
			/// <param name="isSure">ȷ�ϣ�</param>
			void DeleteWaterSurface(const ev_bool& isSure);


#pragma region ForTest
			/// <summary>
			/// ������Ŀ��Χģ��ģ��(�����ԣ�
			/// </summary>
			void WriteProjectModelStencil();
			/// <summary>
			/// ��Ⱦ������Ŀ��Χģ��(�����ԣ�
			/// </summary>
			void RenderProjectModelStencil();
			/// <summary>
			/// ɾ��������Ŀ��Χģ��(�����ԣ�
			/// </summary>
			void DeleteProejctModelStencil();
#pragma endregion





			void DrawRectBounds();
			void DrawPolylineBounds();
			ev_uint64 GetTerrainCount();
			EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
		protected:
			CWaterConservancyManager();
			static CWaterConservancyManager* mpSingleton;
			
		};
	}
}


#endif