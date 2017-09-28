#ifndef EARTHVIEW_WORLD_RASTERDATAANALYSIS_H
#define EARTHVIEW_WORLD_RASTERDATAANALYSIS_H

#include "rasteranalysis/rasteranalysisconfig.h"
#include "spatialinterface/irasterdataset.h"
#include "spatialinterface/progressinfo.h"
#include "rasterdataset/rasterdataset.h"
#include "gdal-1.6.3/gdal_priv.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				typedef float (*CGeneric3x3ProcessingAlg)(float *pafWindow, float fDstNoDataValue, void *pData);
				class EV_RASTERANALYSIS_DLL CRasterDataAnalysis: public EarthView::World::Core::CAllocatedObject
				{
				public:
					CRasterDataAnalysis();
					~CRasterDataAnalysis();
                ev_private:
					CRasterDataAnalysis(EarthView::World::Core::CNameValuePairList* pList);
				public:
					typedef float (*CGeneric3x3ProcessingAlg)(float *pafWindow, float fDstNoDataValue, void *pData);
					//�¶ȼ���
					ev_int32 CreateSlope(const char *pszSrcFile, const char *pszDstFile, double scale,int slopeFormat,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag);
					ev_int32 CreateSlope(EarthView::World::Spatial2D::Raster::CRasterDataSet*psrcData,const char*pszDstFile,double scale,int slopeFormat,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag);
					//�������
					ev_int32 CreateAspect(const char *pszSrcFile, const char *pszDstFile,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag ,int bAngleAsAzimuth);
					ev_int32 CreateAspect(EarthView::World::Spatial2D::Raster::CRasterDataSet*psrcData, const char *pszDstFile,EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, const char *pszFormat,int NoDataFlag ,int bAngleAsAzimuth);
					///<summary>
					///դ��ʸ����
					///<summary>
					///<param = "pszSrcFile">�����ļ�·��</param>
					///<param = "pszDstFile">����ļ�·��</param>
					///<param = "iBandIndex">ָ�����դ���ļ�Ҫ����Ĳ��Σ�Ĭ��Ϊ��һ����</param>
					///<param = "bIs8Con">��ͨ��ʽ������ͨ��������ͨ��trueΪ8��ͨ��Ĭ�ϣ���falseΪ����ͨ</param>
					///<param = "pszFormat">����ļ���ʽ��Ĭ��ΪESRI Shapefile</param>
					///<returns>����ֵ</returns>
					///<summary>
					ev_bool ImagePolygonize(const char* pszSrcFile, const char* pszDstFile, int iBandIndex = 1, bool bIs8Con = true,const char* pszFormat = "ESRI Shapefile",EarthView::World::Spatial2D::Raster::CProgressInfo *pProgressArg= NULL);
				    //ʸ��դ��
					ev_bool VectorRasterize(const char*pszGeomrtry,const char*pszDstFile,int nBandcount,int rasterwidth,int rasterhigth);
				private:	
					void CGeneric3x3Processing(GDALRasterBandH hSrcBand,GDALRasterBandH hDstBand, CGeneric3x3ProcessingAlg pfnAlg, void *pData);
					void CGeneric3x3Processing1(GDALRasterBandH hSrcBand,GDALRasterBandH hDstBand, CGeneric3x3ProcessingAlg pfnAlg, void *pData,GDALDataType eDT);
				};
			}
		}
	}
}

#endif