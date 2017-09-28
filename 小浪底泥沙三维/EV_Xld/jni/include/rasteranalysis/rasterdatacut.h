#ifndef EARTHVIEW_WORLD_RASTERCUT_H
#define EARTHVIEW_WORLD_RASTERCUT_H


#include "rasteranalysis/rasteranalysisconfig.h"
#include "rasterdataset/rasterdataset.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialobject/geometry/polygon.h"
#include "spatialdatabase/queryfilter.h"
#include "spatialinterface/ifeatureiterator.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				class EV_RASTERANALYSIS_DLL CImageCut: public EarthView::World::Core::CAllocatedObject
				{
					
				public:
					CImageCut();
					~CImageCut();
                ev_private:
					CImageCut(EarthView::World::Core::CNameValuePairList* pList);
				public:
					///<summary>
					///ͼ��aoi���У���·����
					///<summary>
					/// <param = "pszSrcFile">�����ļ�·��</param>
					///<param = "pszDstFile">����ļ�·��</param>
					///<param = "pszAOIWKT">����AOI��ʹ��WKT�ַ�����ʽ��������ͼ�����к�
					///��const char* pszAOIWKT = "POLYGON((400 500,400 1500,1400 1500,400 500))";</param>
					///<returns>����ֵ</returns>
					///<summary>
					ev_int32 ImageCutByAOI(const char* pszSrcFile, const char* pszDstFile, const char* pszAOIWKT);

					///<summary>
					///ͼ��aoi���У������ݼ���
					///<summary>
					/// <param = "Dataset">�����е����ݼ�</param>
					///<param = "pszDstFile">����ļ�·��</param>
					///<param = "feature">Ҫ����</param>
					///<returns>����ֵ</returns>
					///<summary>
//					ev_int32 ImageCutByAOIByFeature(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset, const char* pszDstFile,
//EarthView::World::Spatial::GeoDataset::IFeatureClass* featureclass);

					///<summary>
					///ͼ��aoi���У������ݼ���
					///<summary>
					/// <param = "Dataset">�����е����ݼ�</param>
					///<param = "pszDstFile">����ļ�·��</param>
					///<param = "feature">�������</param>
					///<returns>����ֵ</returns>
					///<summary>
					ev_int32 ImageCutByAOIByPolygon(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset, const char* pszDstFile, 
EarthView::World::Spatial::Geometry::CPolygon *polygon);

				
				};
			}
		}
	}
}

#endif
