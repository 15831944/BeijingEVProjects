#ifndef _OGC_WFS_RELATIVE_SCENE_LAYER
#define _OGC_WFS_RELATIVE_SCENE_LAYER
#include "spatial3dlayer/vectorrelativescenelayer.h"
#include "spatialinterface/idataset.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class EV_3DLAYER_DLL COGCWFSVectorRelativeSceneLayer:public CVectorRelativeSceneLayer
				{
ev_private:
					///<summary>
					///���캯��
					///</summary>
					///<param name="pList">���캯��������ֵ�Ա�</param>
					///<returns></returns>
					COGCWFSVectorRelativeSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					COGCWFSVectorRelativeSceneLayer();
					COGCWFSVectorRelativeSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWFSVectorRelativeSceneLayer(const EVString& name);

					virtual ~COGCWFSVectorRelativeSceneLayer(void);
					/// <summary>
					/// ���л���xml�ı�
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;	
					/// <summary>
					/// ��xml�ָ�ͼ�����
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ����ͼ��
					/// </summary>
					/// <returns>ͼ��ָ��</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;
					///<summary>
					///��ȡͿ������
					///</summary>
					///<param name=""></param>
					///<returns>ͼ�������</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// ����WFS���ݼ�
					/// </summary>
					/// <param name="ds"></param>
					/// <returns></returns>
					void setWFSDataset(EarthView::World::Spatial::GeoDataset::IDataset* ds);
					/// <summary>
					/// �������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// ����WFS���ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getWFSDataset() const;
				protected:
					ev_real64 calculateStatisticsMaxValue(const EarthView::World::Spatial::Theme::ITheme* itheme);
					ev_bool publish(const EVString& path,const EVString& fileName,const CVector3DCacheFieldVector& fieldNames);
				private:
					EarthView::World::Spatial::GeoDataset::IDataset* mpWebWFSDataSet;
				};
				/// <summary>
				/// ����ʸ��ͼ�㹤����
				/// ��������ʸ��ͼ��
				/// </summary>
				class EV_3DLAYER_DLL COGCWFSVectorRelativeSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					COGCWFSVectorRelativeSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWFSVectorRelativeSceneLayerFactory();
					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~COGCWFSVectorRelativeSceneLayerFactory();

				public:
					/// <summary>
					/// ��ȡͼ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ�������</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// ����һ��ͼ��ʵ��
					/// </summary>
					/// <param name="name">ͼ�������</param>
					/// <returns>�����Ĳ�Ʒ</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);

					/// ����һ��ͼ��ʵ��
					/// </summary>
					/// <param name="layerName">ͼ������</param>
					/// <param name="datasourceName">����Դ����</param>
					/// <param name="datasetName">���ݼ�����</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// ����һ��ͼ��
					/// </summary>
					/// <param name="layer">���ٹ����Ĳ�Ʒ</param>
					/// <returns>�Ƿ�ɹ�</returns>
					virtual ev_bool destroyInstance( EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString msSceneLayerFactoryName;
				};
			}
		}
	}
}


#endif//
