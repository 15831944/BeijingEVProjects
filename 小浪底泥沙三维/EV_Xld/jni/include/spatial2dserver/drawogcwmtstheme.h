#ifndef EARTHVIEW_WORLD_SPATIAL_DRAEOGCWMTSTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DRAEOGCWMTSTHEME_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "tileutility/tilepathenums.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialdisplay/spatialtransformer.h"
#include "spatialserverclient/weblayer.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// wmtsӰ����Ⱦ������
				/// </summary>
				class EV_2DWMS_DLL CDrawOGCWMTSTheme : public EarthView::World::Spatial::Display::CDrawServerLayerTheme
				{
				public:

					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawOGCWMTSTheme();
					/// <summary>
					/// Ĭ����������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					~CDrawOGCWMTSTheme();
					/// <summary>
					/// ��Ⱦ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool draw( EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
					/// <summary>
					/// ��Ⱦ����ʹ�û���������
					/// </summary>
					/// <param name="datasetName">���ݼ�����</param>
					/// <returns></returns>
					virtual ev_bool draw( EVString datasetName, EVString datasourceName,
						EarthView::World::Spatial::Geometry::IEnvelope* pEnv,
						EarthView::World::Spatial::Geometry::ISpatialReference* pSRS);

					virtual ev_void drawTile( EarthView::World::Core::CWorkQueue::RequestPara* req );
				ev_private:
					CDrawOGCWMTSTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVString makeCacheName( const EVString& srcName );
				private:
					EVString m_CacheName;
					EVString m_Filter;
					EarthView::World::Spatial::EVTileModeType m_ModeType;
					EVString m_FileFormat;
					ev_int32 m_TileWidth;
					ev_int32 m_TileHeight;
					EarthView::World::Core::CReadWriteLock m_RenderLock;
				};
}}}}

#endif