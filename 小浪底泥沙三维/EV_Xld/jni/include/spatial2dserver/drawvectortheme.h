#ifndef EARTHVIEW_WORLD_SPATIAL_DRAWVECTORTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DRAWVECTORTHEME_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "tileutility/tilepathenums.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// wmtsӰ����Ⱦ������
				/// </summary>
				class EV_2DWMS_DLL CDrawVectorTheme : public EarthView::World::Spatial::Display::CDrawServerLayerTheme
				{
				public:

					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawVectorTheme();
					/// <summary>
					/// Ĭ����������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					~CDrawVectorTheme();
					/// <summary>
					/// ��Ⱦ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool draw( EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
					/// <summary>
					/// ��Ⱦ����ʹ�û���������
					/// </summary>
					/// <param name="pGeometry">���ݼ�����</param>
					/// <returns></returns>
					virtual ev_bool draw( EVString datasetName, EVString datasourceName,
						EarthView::World::Spatial::Geometry::IEnvelope* pEnv,
						EarthView::World::Spatial::Geometry::ISpatialReference* pSRS);

					virtual ev_void drawTile( EarthView::World::Core::CWorkQueue::RequestPara* req );
				private:
					EVString m_CacheName;
					EVString m_Filter;
					EarthView::World::Spatial::EVTileModeType m_ModeType;
					EarthView::World::Spatial::EVSSCFileFormat m_FileFormat;
					int m_VectorType;
					ev_bool mbIsImage;
					ev_int32 m_TileWidth;
					ev_int32 m_TileHeight;
					EarthView::World::Core::CReadWriteLock m_RenderLock;
					ev_int32 mdMaxLevel;
					ev_int32 mdMinLevel;
				ev_private:
					CDrawVectorTheme( EarthView::World::Core::CNameValuePairList *pList );

				private:
					EarthView::World::Core::MemoryDataStreamPtr getSymbolStream();
					EVString makeCacheName( const EVString& srcName );
					ev_bool equalSymbolStream(EarthView::World::Core::MemoryDataStreamPtr stream);
					ev_bool getParentTileStream(ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Spatial::GeoDataset::IDataset * dataset, EarthView::World::Core::MemoryDataStreamPtr & result);
					ev_bool getTile( ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Spatial::GeoDataset::IDataset * dataset,EarthView::World::Core::MemoryDataStreamPtr& result);
					EarthView::World::Core::MemoryDataStreamPtr clipParentTile( EarthView::World::Core::MemoryDataStreamPtr& parentData,ev_uint32 x,ev_uint32 y);
				};
}}}}

#endif