#ifndef EARTHVIEW_WORLD_ANNOLAYER_COFING_H
#define EARTHVIEW_WORLD_ANNOLAYER_COFING_H
#include "annotation/config.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ivectorlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				class EV_ANNOTATION_EXPORTS CAnnoLayer
					: public EarthView::World::Spatial::Atlas::IVectorLayer
				{
				
				public:					
					virtual ~CAnnoLayer();
				public:
					/// <summary>
					/// ��ȡͼ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ������</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// ��ȡ��ͼ�������������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// ��ȡ���ݼ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getDatasetName();
					/// <summary>
					/// ��ȡ���ݼ����ڵ�����Դ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource();					
					/// <summary>
					/// ͼ��ѡ��
					/// </summary>
					/// <param name="filter">ѡ���������</param>
					/// <param name="type">ѡ������</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// ���ͼ��ѡ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();
					/// <summary>
					/// ����ͼ���ѡ��
					/// </summary>
					/// <param name="selection">ͼ���ѡ��</param>
					/// <returns></returns>
					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);
					/// <summary>
					/// ��ȡͼ��ѡ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ��ѡ��</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					/// <summary>
					/// ��ȡͼ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ������</returns>
					virtual EVString getName() const;
					/// <summary>
					/// ����ͼ�������
					/// </summary>
					/// <param name="name">ͼ������</param>
					/// <returns></returns>
					virtual ev_void setName( const EVString &name );
					/// <summary>
					/// ��ȡͼ���������Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>������Ϣ</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// ����ͼ���������Ϣ
					/// </summary>
					/// <param name="value">������Ϣ</param>
					/// <returns></returns>
					virtual ev_void setDescription(const EVString& value);
					/// <summary>
					/// ���ͼ��ͼ���Ƿ���Ա༭
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ͼ����Ա༭,�򷵻�true,��֮���</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// ����ͼ���Ƿ����֧�ֱ༭
					/// </summary>
					/// <param name="can">���Ϊtrue,��ͼ����Ա༭,��֮���</param>
					/// <returns></returns>
					virtual ev_void setCanEdit(ev_bool can);
					/// <summary>
					/// ���ͼ���Ƿ����ڱ��༭
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ͼ�����ڱ༭�򷵻�true,��֮���</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// ����ͼ���Ƿ����ڱ༭
					/// </summary>
					/// <param name="editing">���Ϊtrue,������ͼ�����ڱ༭,��֮���</param>
					/// <returns></returns>
					virtual ev_void setEditing(ev_bool editing);
					/// <summary>
					/// ���ͼ���Ƿ����
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ͼ������򷵻�true,��֮���</returns>
					virtual ev_bool isVisible() const;
					/// <summary>
					/// ����ͼ���Ƿ����
					/// </summary>
					/// <param name="visible">���Ϊtrue,��ͼ�����,��֮���</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// ���ͼ���Ƿ���Ч
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����Ч�򷵻�true,��֮���</returns>
					virtual ev_bool isValid() const;

					/// <summary>
					/// �ж�ͼ���Ƿ�֧��ѡ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isSelectable() const;
					/// <summary>
					/// ����ͼ���Ƿ�֧��ѡ��
					/// </summary>
					/// <param name="selectable">�Ƿ��ѡ</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);
					/// <summary>
					/// ���ͼ�����ʱ�Ƿ���Ա����ߵ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>�������,�򷵻�true,��֮���</returns>
					virtual ev_bool ignoreScale() const;
					/// <summary>
					/// ����ͼ��Ļ����Ƿ���Ա����ߵ�����
					/// </summary>
					/// <param name="bIgnore">�Ƿ����</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale( _in ev_bool bIgnore );
					/// <summary>
					/// ��ȡ�����ʾ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>������</returns>
					virtual ev_real64 getDisplayMaxScale() const;
					/// <summary>
					/// ���������ʾ������
					/// </summary>
					/// <param name="scale">������</param>
					/// <returns></returns>
					virtual ev_void setDisplayMaxScale(ev_real64 scale);
					/// <summary>
					/// ��ȡ��С��ʾ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>������</returns>
					virtual ev_real64 getDisplayMinScale() const;
					/// <summary>
					/// ������С��ʾ������
					/// </summary>
					/// <param name="scale">������</param>
					/// <returns></returns>
					virtual ev_void setDisplayMinScale(ev_real64 scale);
					/// <summary>
					/// ��ȡͼ�������ϵͳ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����ϵͳ</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
					/// <summary>
					/// ����ͼ�������ϵͳ
					/// </summary>
					/// <param name="sr">����ϵͳ</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr );
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
					/// ��ȡͼ��ķ�Χ
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ�㷶Χ</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;                    
					/// <summary>
					/// ����ͼ��
					/// </summary>
					/// <param name="display">�ռ���ʾ����</param>
					/// <param name="type">��������</param>
					/// <returns></returns>
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					/// <summary>
					/// ͼ��ĸ���,�ڴ��ⲿ�ͷ�
					/// </summary>
					/// <param name="sr">�ο�����ϵ</param>
					/// <returns>ͼ��</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset * dataset);
					/// <summary>
					/// ��ͼ�����Ϣ���浽����
					/// </summary>
					/// <param name="steam">������</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					/// <summary>
					/// ��xml�лָ�ͼ�������
					/// </summary>
					/// <param name="element">xmlҪ��</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ��ͼ�����Ϣ������xml��
					/// </summary>
					/// <param name=""></param>
					/// <returns>xmlҪ��</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// ����ͼ����ʾ��������
					/// </summary>
					/// <param name="filter">��������</param>
					/// <returns></returns>

					virtual ev_void setDisplayFilter(const EVString & filter);
					/// <summary>
					/// ��ȡͼ����ʾ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ع�������</returns>

					virtual EVString getDisplayFilter() const;
ev_private:
					CAnnoLayer( EarthView::World::Core::CNameValuePairList *pList );
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				public:
					CAnnoLayer();
				private:
					ev_void initQueryFilter(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Display::ISpatialDisplay* display);
					C_DISABLE_COPY( CAnnoLayer )
				private:
					/// <summary>
					/// ͼ������
					/// </summary>
					EVString m_szLayerName;
					/// <summary>
					/// ������Ϣ
					/// </summary>
					EVString m_szDescription;
					/// <summary>
					/// ͼ���Ƿ��ڱ༭
					/// </summary>
					ev_bool m_bIsEditing;
					/// <summary>
					/// �Ƿ�ɼ�
					/// </summary>
					bool m_bIsVisible;
					/// <summary>
					/// �Ƿ���Ч
					/// </summary>
					bool m_bIsValid;
					/// <summary>
					/// ͼ���Ƿ��ѡ
					/// </summary>
					bool m_bIsSelectable;
					/// <summary>
					/// �Ƿ񰴱�������ʾ
					/// </summary>
					ev_bool m_bIgnoreScale;
					/// <summary>
					/// ��С��ʾ������
					/// </summary>
					ev_real64 m_dDisplayMinScale;
					/// <summary>
					/// �����ʾ������
					/// </summary>
					ev_real64 m_dDisplayMaxScale;
					/// <summary>
					/// �ο�����ϵ
					/// </summary>
					EarthView::World::Spatial::Geometry::ISpatialReference* m_pSpatialReference;
					/// <summary>
					/// ����(����Դ)
					/// </summary>
					EarthView::World::Spatial::GeoDataset::IDataset* mpData;
					/// <summary>
					/// �Ƿ���ʾ��ʾ
					/// </summary>
					bool m_bShowTip;
					/// <summary>
					/// ͼ��ѡ��Ҫ�ؼ���
					/// </summary>
					EarthView::World::Spatial::Atlas::ILayerSelection* m_pSelectionSet;
					/// <summary>
					/// ͼ��ѡ��Ҫ�ؼ��ϵ�ͬ����
					/// </summary>
					mutable EarthView::World::Core::CReadWriteLock mSelectionLock;
					/// <summary>
					/// ͼ����ʾ����
					/// </summary>
					EVString m_szFilter;
					//0-100
					//0:��ȫ��͸��
					//100:��ȫ͸��
					ev_uint8 m_nTransparent;
					//ͼ��ķ�Χ
					EarthView::World::Spatial::Geometry::IEnvelope* mpSpatialReferenceEnve;
				};
				class EV_ANNOTATION_EXPORTS CAnnoLayerFactory: public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				public:
					CAnnoLayerFactory();
					~CAnnoLayerFactory();
				public:
					/// <summary>
					/// ��ȡ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns>��������</returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// ����һ��ͼ��ʵ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ��</returns>
					
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// ��xmlҪ���лָ�һ��ͼ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ��</returns>
					
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ɾ��ͼ��ʵ��
					/// </summary>
					/// <param name="layer">��ɾ����ͼ��</param>
					/// <returns>���ɾ���ɹ��򷵻�true,��֮���</returns>
					
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				ev_private:
					CAnnoLayerFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CAnnoLayerFactory );
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}

#endif 