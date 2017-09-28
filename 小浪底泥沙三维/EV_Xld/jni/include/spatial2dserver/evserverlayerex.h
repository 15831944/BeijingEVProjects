#ifndef EARTHVIEW_WORLD_SPATIAL_EVSERVERLAYEREX_H
#define EARTHVIEW_WORLD_SPATIAL_EVSERVERLAYEREX_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialserverclient/weblayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				class EV_2DWMS_DLL CEVServerLayerEx
					: public EarthView::World::Spatial::CWebLayer
				{
				public:
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					~CEVServerLayerEx();

					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					CEVServerLayerEx();
					/// <summary>
					/// ��ȡͼ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ������</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// ��ȡ���ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�������ݼ�</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset() const;
					/// <summary>
					/// ��ȡ���ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�������ݼ�</returns>
					virtual void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);
					/// <summary>
					/// ����ͼ���͸����
					/// </summary>
					/// <param name="transparent">͸��ֵ</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					/// <summary>
					/// ��ȡͼ���͸��ֵ
					/// </summary>
					/// <param name=""></param>
					/// <returns>͸��ֵ</returns>
					virtual ev_uint8 getTransparentValue() const;
					/// <summary>
					/// ��Ⱦ
					/// </summary>
					/// <param name="display">��Ⱦ�豸��Ϣ</param>
					/// <param name="type">��Ⱦ����</param>
					/// <returns>�ɹ�����true</returns>
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);

					/// <summary>
					/// ��ȡ��Χ����Ϣ
					/// </summary>
					/// <returns>��Χ�ж���ָ�룬�����ͷ�</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent()const;
					/// <summary>
					/// ��ȡ�ռ�ο���Ϣ
					/// </summary>
					/// <returns>�ռ�ο�����ָ�룬�����ͷ�</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
					/// <summary>
					/// ���ÿռ�ο�
					/// </summary>
					/// <param name="sr">�ռ�ο�����</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr );
					/// <summary>
					/// ��ȡר��ͼ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// ����ר��ͼ
					/// </summary>
					/// <param name="theme">ר��ͼ</param>
					/// <returns></returns>

					ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// ��¡
					/// </summary>
					/// <returns>��¡����ָ��</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// ��xml�лָ�ͼ�������
					/// </summary>
					/// <param name="element">xmlҪ��</param>
					/// <returns></returns>

					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ��ͼ�����Ϣ������xml��
					/// </summary>
					/// <param name=""></param>
					/// <returns>xmlҪ��</returns>

					EarthView::World::Core::CXmlElement toXmlElement() const;

					virtual ev_int32 baseMapFalg();// 0 ��֧�֣�1 ֧�ֵ��������� 2 ֧�ֿ����ÿ���
					virtual ev_bool getBaseMapActive();
					virtual ev_void setBaseMapActive(ev_bool b);
					ev_bool makeBaseMapping(EarthView::World::Spatial::Display::ISpatialDisplay* display,
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);

					ev_bool getNoBoundaryRoamActive();
					ev_void setNoBoundaryRoamActive(ev_bool b);
ev_private:
					CEVServerLayerEx(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_void iniBaseMapDrawTheme();
					EVString makeCacheName( const EVString& srcName );
					ev_uint8 m_TransparentValue;

					EarthView::World::Spatial::Display::CDrawServerLayerTheme* m_pBaseMapDrawTheme;
					EarthView::World::Spatial::Theme::ITheme* m_pTheme;
					EarthView::World::Spatial::Geometry::IEnvelope *mGeoExtent;
					EVString mDatasetName;
					EVString mDatasourceName;
					ev_bool  mbBaseMapActive;
					ev_bool  mbNoBoundaryRoamActive;
				};

				class EV_2DWMS_DLL CEVServerLayerExFactory
					:public EarthView::World::Spatial::CWebLayerFactory
				{
				public:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <returns></returns>
					CEVServerLayerExFactory();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					virtual ~CEVServerLayerExFactory();
ev_private:
					CEVServerLayerExFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// ��ȡ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns>��������</returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// ����ͼ��ʵ��
					/// </summary>
					/// <returns>ͼ�����ָ�룬����Ӧͼ���๤������</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// ��xml���Ҫ�ػ�ԭͼ�����
					/// </summary>
					/// <param name="element">xml������</param>
					/// <returns>ͼ�����ָ��</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}

#endif