#ifndef _OGCWFSCLAMPSCENELAYER_H_
#define _OGCWFSCLAMPSCENELAYER_H_
#include "spatial3dlayer/vectordbclampscenelayer.h"
#include "spatialinterface/idataset.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
				class EV_3DLAYER_DLL COGCWFSVectorClampLayer:public CVectorDBClampSceneLayer
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					COGCWFSVectorClampLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					COGCWFSVectorClampLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					virtual ~COGCWFSVectorClampLayer(void);

					void setCacheDataset(EarthView::World::Spatial::GeoDataset::IDataset* ds);

					/// <summary>
					/// ��ȡͼ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ�������</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// �������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// ���л���xml�ı�
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					//virtual EarthView::World::Core::CXmlElement toXmlElement() const;	
					/// <summary>
					/// Globe����һ��ͼ��֮����õĺ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globeж��һ��ͼ��֮����õĺ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globeˢ��ʱ���õĺ���
					/// </summary>
					/// <param name="camera">��ǰ�����</param>
					/// <param name="updateType">ˢ������</param>
					/// <returns></returns>
					//virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
					/// <summary>
					/// ���ݼ������¼���֪ͨ
					/// </summary>
					/// <param name="strDatasetName">���ݼ�����</param>
					/// <returns></returns>
					//virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
				private:
					EarthView::World::Spatial::GeoDataset::IDataset* mpWebWFSDataSet;
					EarthView::World::Spatial::GeoDataset::IDataset* mpCacheFeatureClass;

				};

				/// <summary>
				/// ����ʸ��ͼ�㹤����
				/// ��������ʸ��ͼ��
				/// </summary>
				class EV_3DLAYER_DLL COGCWFSVectorClampLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					COGCWFSVectorClampLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWFSVectorClampLayerFactory();
					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~COGCWFSVectorClampLayerFactory();

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
#endif