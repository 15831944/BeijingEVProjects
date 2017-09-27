#ifndef EARTHVIEW_WORLD_SPATIAL_DRAEIMAGETHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DRAEIMAGETHEME_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "tileutility/tilepathenums.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialdisplay/spatialtransformer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				/// <summary>
				/// wmtsӰ����Ⱦ������
				/// </summary>
				class EV_2DWMS_DLL CDrawImageTheme : public EarthView::World::Spatial::Display::CDrawServerLayerTheme
				{
				public:

					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawImageTheme();
					/// <summary>
					/// Ĭ����������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					~CDrawImageTheme();
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
					EVString makeCacheName( const EVString& srcName );
					EVString m_CacheName;
					EVString m_Filter;
					EarthView::World::Spatial::EVTileModeType m_ModeType;
					EarthView::World::Spatial::EVSSCFileFormat m_FileFormat;
					EarthView::World::Display::IPaintDevice * m_pDevice;
					//	EarthView::World::Spatial::Theme::CEVWMTSVectorThemeTheme m_VectorTheme;
					ev_bool m_bIsChart;
					EarthView::World::Core::CReadWriteLock m_RenderLock;
				ev_private:
					CDrawImageTheme( EarthView::World::Core::CNameValuePairList *pList );
				};
			}
		}
	}
}

#endif