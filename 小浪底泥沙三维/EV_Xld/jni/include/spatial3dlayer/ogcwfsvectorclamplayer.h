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
					COGCWFSVectorClampLayer();
					COGCWFSVectorClampLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					virtual ~COGCWFSVectorClampLayer(void);
					/// <summary>
					/// ��һ����άͼ��
					/// </summary>
					/// <param name="layer">��άͼ��</param>
					/// <returns></returns>
					virtual ev_void attachLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
					/// <summary>
					/// �ж�ר��ͼ���Ƿ����
					/// </summary>
					/// <param name="stream">�����</param>
					/// <returns>��ȷ���true������false</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);
					/// <summary>
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	
					/// <summary>
					/// ��ȡͼ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ�������</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					///<summary>
					///�������ݼ�
					/// <param name="ds">���ݼ�ָ��</param>
					/// <returns></returns>
					void setWFSDataset(EarthView::World::Spatial::GeoDataset::IDataset* ds);
					/// <summary>
					/// ���ذ󶨵Ķ�άͼ���л��浽���ص����ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// ����WFS�������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getWFSDataset();
					///<summary>
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
					/// ��ȡר��ͼ��
					/// </summary>
					/// <param name="theme">ר��ͼ</param>
					/// <returns></returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
				protected:
					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream);
					void refreshOctree(ev_bool force);
				private:
					ev_real64 calculateStatisticsMaxValue(const EarthView::World::Spatial::Theme::ITheme* itheme);


				private:
					EarthView::World::Spatial::GeoDataset::IDataset* mpWebWFSDataSet;

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
					/// <param name=""></param>
					/// <returns>�����Ĳ�Ʒ</returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
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