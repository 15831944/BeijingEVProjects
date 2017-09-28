#ifndef EARTHVIEW_WORLD_RASTERTILEMOSAIC_H
#define EARTHVIEW_WORLD_RASTERTILEMOSAIC_H


#include "rasteranalysis/rasteranalysisconfig.h"
#include "tileutility/itiledataset.h"
#include <list>

#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/irasterdataset.h"
#include "rasterdataset/rasterdataset.h"
#include "rasterdataset/rasterdatasetenume.h"


using namespace std;
/*!�ɹ�ִ��*/
const int RE_SUCCESS		=	0;
/*!�ļ�������*/
const int RE_FILENOTEXIST	=	1;
/*!�ļ���ʽ����֧��*/
const int RE_FILENOTSUPPORT	=	2;
/*!ͼ���������Ͳ���ȷ*/
const int RE_FILETYPEERROR	=	3;
/*!����ͼ��ʧ��*/
const int RE_CREATEFAILED	=	4;
/*!�����������*/
const int RE_PARAMERROR		=	5;
/*!��������*/
const int RE_FAILED			=	6;
/*!ͼ�񲻴��ڹ�������*/
const int RE_NOSAMEEXTENT	=	7;
/*!�û�ȡ������*/
const int RE_USERCANCEL		=	8;
/*!�ļ��Ѿ���ʹ��*/
const int RE_FILEISUESED	=	9;
/*!��֧�ֵ��������*/
const int RE_DEPTHNOTSUPPORT	=	10;
/*!��������������Ҫ��*/
const int RE_BANDCOUNTERROR		=	11;
/*!�ļ�������ͶӰ*/
const int RE_NOPROJECTION		=	12;
/*!ͶӰ��һ��*/
const int RE_PROJECTIONDIFF		=	13;
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				class EV_RASTERANALYSIS_DLL CRasterMosaic: public EarthView::World::Core::CAllocatedObject
				{

				public:
					CRasterMosaic();
					 ~CRasterMosaic();
                ev_private:
					 CRasterMosaic(EarthView::World::Core::CNameValuePairList* pList);
					 ///<summary>
					 /// ͼ����Ƕ����
					 /// ע��������ô˺���֮ǰ�����ȶ�Ӱ����м��ξ�����ͬһͶӰ����ϵͳ�£��ֱ��ʿ��Բ�ͬ��
					 /// ����ͶӰ��Ϣ�Լ�����ĸ������ݵĲ��θ�������һ�£��������ֲ������������Ƕ������
					 /// ͼ��ķֱ��ʻᰴ������Ӱ��ĵ�һ��Ӱ���ȡ������ͶӰ����Ϣ
					 /// <param = "papszSrcFiles">�����ļ��Լ���Ƕ��·�����飬Ĭ�ϵ�һ��Ϊ�ο�Ӱ�񣬵�һ��ͼ�������²㣬�������������</param>
					 /// <param = "pszDstFilename">����ļ�·��</param>
					 /// <param = "eResampleMethod">�ز�����ʽ
					 /// enum EVResampleMethod
					 /// {
					 /// EVR_NearestNeighbour    =0, ///���ڽ�����
					 /// EVR_Bilinear            =1, ///˫���Բ���
					 /// EVR_Cubic               =2, ///�������
					 /// EVR_CubicSpline         =3, ///����B-Spline�������
					 /// EVR_Lanczos             =4, ///Lanczos�������
					 /// EVR_GPUNearestNeighbour =5, ///���ڽ����� ��GPU�Ͻ���  
					 /// EVR_GPUCubic            =6  ///������� ��GPU�Ͻ���
					 /// }; </param>
					 /// <param = "dResX">���Ӱ��X�ֱ��ʣ�Ĭ��Ϊ0����ʾ���յ�һ��Ӱ��Ϊ׼</param>
					 /// <param = "dResY">���Ӱ��Y�ֱ��ʣ�Ĭ��Ϊ0����ʾ���յ�һ��Ӱ��Ϊ׼</param>
					 /// <returns> ����ֵ</returns>
					 ///<summary>

					 
					 ev_int32 mosaic(char** papszSrcFiles, const char* pszDstFilename, 
						 ev_int32 eResampleMethod, 
						 double dResX, double dResY);

					  ///<summary>
					 /// ͼ����Ƕ����
					 /// ע��������ô˺���֮ǰ�����ȶ�Ӱ����м��ξ�����ͬһͶӰ����ϵͳ�£��ֱ��ʿ��Բ�ͬ��
					 /// ����ͶӰ��Ϣ�Լ�����ĸ������ݵĲ��θ�������һ�£��������ֲ������������Ƕ������
					 /// ͼ��ķֱ��ʻᰴ������Ӱ��ĵ�һ��Ӱ���ȡ������ͶӰ����Ϣ
					 /// <param = "dataset1">����Ƕ�ĵ�һ�����ݼ�</param>
					 /// <param = "dataset2">����Ƕ�ĵڶ������ݼ�</param>
					 /// <param = "pszDstFilename">����ļ�·��</param>
					 /// <param = "eResampleMethod">�ز�����ʽ
					 /// enum EVResampleMethod
					 /// {
					 /// EVR_NearestNeighbour    =0, ///���ڽ�����
					 /// EVR_Bilinear            =1, ///˫���Բ���
					 /// EVR_Cubic               =2, ///�������
					 /// EVR_CubicSpline         =3, ///����B-Spline�������
					 /// EVR_Lanczos             =4, ///Lanczos�������
					 /// EVR_GPUNearestNeighbour =5, ///���ڽ����� ��GPU�Ͻ���  
					 /// EVR_GPUCubic            =6  ///������� ��GPU�Ͻ���
					 /// };</param>
					 /// <param = "dResX">���Ӱ��X�ֱ��ʣ�Ĭ��Ϊ0����ʾ���յ�һ��Ӱ��Ϊ׼</param>
					 /// <param = "dResY">���Ӱ��Y�ֱ��ʣ�Ĭ��Ϊ0����ʾ���յ�һ��Ӱ��Ϊ׼</param>
					 /// <returns> ����ֵ</returns>
					 ///<summary>
				 ev_int32 mosaicByData(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset1,EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset2 , const char* pszDstFilename,
					 ev_int32 eResampleMethod,double dResX, double dResY);

				};
			}
		}
	}
}

#endif
