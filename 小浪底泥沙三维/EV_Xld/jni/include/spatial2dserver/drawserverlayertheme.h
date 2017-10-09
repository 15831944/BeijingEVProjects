#ifndef EARTHVIEW_WORLD_SPATIAL_DRAESERVERLAYERTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DRAESERVERLAYERTHEME_H
#include "spatial2dserver/config.h"
#include "core/workqueue.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ibitmap.h"
#include "tileutility/tiledata.h"
#include "spatialserverclient/evmetaobjectinfo.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				/// <summary>
				/// ������ͼ����Ⱦ������
				/// </summary>
				class EV_2DWMS_DLL CDrawServerLayerTheme : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// Ĭ����������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual ~CDrawServerLayerTheme();
				public:

					/// <summary>
					/// ��ʼ��Ⱦ
					/// </summary>
					/// <param name="display">�豸</param>
					/// <param name="pSymbol">��Ⱦ����</param>
					/// <returns></returns>

					virtual ev_void startDraw(EarthView::World::Spatial::Display::ISpatialDisplay *ref_display,ev_uint8 transparent,EarthView::World::Spatial::Theme::ITheme* ref_pTheme = NULL,ev_int32 mode = 1);

					/// <summary>
					/// ֹͣ��Ⱦ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual ev_void endDraw();

					/// <summary>
					/// ��Ⱦ
					/// </summary>
					/// <param name="pDataset">���ݼ�</param>
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

					virtual ev_void drawTile( EarthView::World::Core::CWorkQueue::RequestPara* req ){}	

				ev_private:
					CDrawServerLayerTheme( EarthView::World::Core::CNameValuePairList *pList );

				protected:
					class ObjectGuard
					{
					private:
						CBaseObject* mpObject;
					public:
						ObjectGuard(CBaseObject* obj)
							: mpObject(obj)
						{

						}
						ObjectGuard(const CBaseObject* obj)
							: mpObject(const_cast<CBaseObject*>(obj))
						{

						}
						~ObjectGuard()
						{
							if(mpObject)
								delete mpObject;
						}
					};

				private:
					C_DISABLE_COPY( CDrawServerLayerTheme );
				protected:

					CDrawServerLayerTheme();
					EarthView::World::Spatial::Display::ISpatialDisplay *m_pDisplay;
					EarthView::World::Spatial::Theme::ITheme* m_pTheme;
					ev_int32 mMode ;
					ev_uint8 m_Transparent;
					EarthView::World::Display::IBitmap * m_pNullTileBitmap;
				};
			}
		}
	}
}

#endif