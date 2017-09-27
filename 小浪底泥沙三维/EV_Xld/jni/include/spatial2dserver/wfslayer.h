#ifndef EARTHVIEW_WORLD_SPATIAL_WFSLAYEREX_H
#define EARTHVIEW_WORLD_SPATIAL_WFSLAYEREX_H
#include "spatial2dserver/config.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/isymbol.h"
#include "spatialserverclient/weblayer.h"
#include "spatialinterface/ivectorlayer.h"
#include "spatialinterface/ilayerselection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				class CWFSLayerSelection;
				
				class EV_2DWMS_DLL CWFSLayer
					: public EarthView::World::Spatial::Atlas::IVectorLayer
				{
				public:
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					~CWFSLayer();

					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					CWFSLayer();
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
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// ��ȡ�������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�������ݼ�</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getCacheDataset();
					/// <summary>
					/// ��ȡ��ʾ�ֶ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����ֶ���</returns>
					virtual EVString getDisplayField() const;
					/// <summary>
					/// ������ʾ�ֶ�
					/// </summary>
					/// <param name="fieldName">��ʾ�ֶ�</param>
					/// <returns></returns>
					virtual ev_void setDisplayField(const EVString& fieldName);
					/// <summary>
					/// ��ȡר��ͼ��Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����ר��ͼ��Ϣ</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// ����ר��ͼ��Ϣ
					/// </summary>
					/// <param name="theme">ר��ͼ��Ϣ</param>
					/// <returns></returns>
					virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// ��ȡͼ���ǩ����
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ���ǩ����</returns>
					virtual EarthView::World::Spatial::Display::ILabelProperty * getLayerLabelProperty() const;
					/// <summary>
					/// ����Ҫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>�������ݼ�</returns>
					ev_void loadFeatures(ev_int32 * finishNum);
					/// <summary>
					/// ��ȡ���ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�������ݼ�</returns>
					virtual void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);

					/// <summary>
					/// ��ȡͼ������
					/// </summary>
					/// <returns></returns>
					virtual EVString getName() const;

					/// <summary>
					/// ����ͼ������
					/// </summary>
					/// <param name="name">ͼ������</param>
					/// <returns></returns>
					virtual ev_void setName(_in  const EVString &name );

					/// <summary>
					/// ��ȡͼ��������Ϣ
					/// </summary>
					/// <returns>ͼ������</returns>
					virtual EVString getDescription() const;

					/// <summary>
					/// ����ͼ��������Ϣ
					/// </summary>
					/// <param name="value">ͼ������</param>
					/// <returns></returns>
					virtual ev_void setDescription(_in const EVString& value);

					/// <summary>
					/// �Ƿ�ɱ༭
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool canEdit() const;

					/// <summary>
					/// �Ƿ����ڱ༭
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool isEditing() const;

					/// <summary>
					/// ���ñ༭
					/// </summary>
					/// <param name="editing">�Ƿ�༭</param>
					/// <returns></returns>
					virtual ev_void setEditing(_in ev_bool editing);

					/// <summary>
					/// ��ȡ�Ƿ�ɼ�
					/// </summary>
					/// <returns>true��ʾ�ɼ�</returns>
					virtual ev_bool isVisible() const;

					/// <summary>
					/// �����Ƿ�ɼ�
					/// </summary>
					/// <param name="visible">true��ʾ�ɼ�</param>
					/// <returns></returns>
					virtual ev_void setVisible(_in ev_bool visible);

					/// <summary>
					/// ��ȡ�Ƿ����
					/// </summary>
					/// <returns>true��ʾ����</returns>
					virtual ev_bool isValid() const;

					/// <summary>
					/// ��ȡ�Ƿ��ѡ
					/// </summary>
					/// <returns>true��ʾ��ѡ</returns>
					virtual ev_bool isSelected() const;

					/// <summary>
					/// �����Ƿ��ѡ
					/// </summary>
					/// <param name="selected">true��ʾ��ѡ</param>
					/// <returns></returns>
					virtual ev_void setSelectable(_in ev_bool selected);
					/// <summary>
					/// �ж�ͼ���Ƿ�֧��ѡ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isSelectable() const;
					/// <summary>
					/// ��ȡ�Ƿ���Ա�����
					/// </summary>
					/// <returns>true��ʾ���Ա�����</returns>
					virtual ev_bool ignoreScale() const;

					/// <summary>
					/// �����Ƿ���Ա�����
					/// </summary>
					/// <param name="bIgnore">true��ʾ���Ա�����</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale( _in ev_bool bIgnore );

					/// <summary>
					/// ��ȡ�����ʾ������
					/// </summary>
					/// <returns>�����ʾ�����߷�ĸ</returns>
					virtual ev_real64 getDisplayMaxScale() const;

					/// <summary>
					/// ���������ʾ������
					/// </summary>
					/// <param name="scale">�����ʾ�����߷�ĸ</param>
					/// <returns></returns>
					virtual ev_void setDisplayMaxScale(_in ev_real64 scale);

					/// <summary>
					/// ��ȡ��С��ʾ������
					/// </summary>
					/// <returns>��С��ʾ�����߷�ĸ</returns>
					virtual ev_real64 getDisplayMinScale() const;

					/// <summary>
					/// ������С��ʾ������
					/// </summary>
					/// <param name="scale">��С��ʾ�����߷�ĸ</param>
					/// <returns></returns>
					virtual ev_void setDisplayMinScale(_in ev_real64 scale);

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
					/// ��ȡͼ��ѡ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>ͼ��ѡ��</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					
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
					/// <summary>
					/// ��¡
					/// </summary>
					/// <returns>��¡����ָ��</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// ����ǰͼ������xml����
					/// </summary>
					/// <returns>xml</returns>
					virtual EVString toXML() const;
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
ev_private:
					CWFSLayer(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_void initQueryFilter( EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Display::ISpatialDisplay* display );
					ev_uint8 m_TransparentValue;
					EarthView::World::Spatial::Theme::ITheme* m_pTheme;
					EVString mDatasetName;
					EVString mDatasourceName;

					EarthView::World::Spatial::Geometry::ISpatialReference* mpSRS;

					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpCacheFeatureClass;
					mutable EarthView::World::Core::CRecursiveMutex mCacheLock;

					EarthView::World::Spatial::Display::ILabelProperty* m_pLabelLayerProperty;

					ev_bool mbVisible;
					ev_bool mbSelectable;

					EarthView::World::Spatial::Atlas::EVLayerType mnLayerType;

					ev_bool	mbIgnoreScale;
					ev_real64 mdfMaxDisplayScale;
					ev_real64 mdfMinDisplayScale;

					EVString m_szFilter;
					EVString m_szDisplayFieldName;
					EVString mstrLayerName;
					EVString mstrDescription;
					mutable EarthView::World::Core::CReadWriteLock mSelectionLock;
					EarthView::World::Core::CRecursiveMutex mIteratorLock;

					CWFSLayerSelection *m_pSelectionSet;
				protected:
					C_DISABLE_COPY( CWFSLayer )
				};
				class EV_2DWMS_DLL CWFSLayerSelection : public EarthView::World::Spatial::Atlas::ILayerSelection
				{
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CWFSLayerSelection();
					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CWFSLayerSelection();

				public:
					/// <summary>
					/// ��ȡѡ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>Ҫ�ؼ���</returns>

					EarthView::World::Spatial::GeoDataset::IFeatureSelection * getSelection() const;
					/// <summary>
					/// ��ȡѡ�񼯵Ļ��Ʒ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>���</returns>

					EarthView::World::Spatial::Display::ISymbol * getSelectionSymbol() const;
					/// <summary>
					/// ����ѡ�񼯵Ļ��Ʒ��
					/// </summary>
					/// <param name="symbol">���</param>
					/// <returns></returns>

					ev_void setSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );

ev_private:
					CWFSLayerSelection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CWFSLayerSelection )

					EarthView::World::Spatial::GeoDataset::IFeatureSelection *m_pSelection;
					EarthView::World::Spatial::Display::ISymbol *m_pSymbol;
					ev_vector<ev_uint32> m_ids;
					friend class CWFSLayer;
				};
				class EV_2DWMS_DLL CWFSLayerFactory
					:public EarthView::World::Spatial::CWebLayerFactory
				{
				public:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <returns></returns>
					CWFSLayerFactory();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					virtual ~CWFSLayerFactory();
ev_private:
					CWFSLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
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
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// ��xml���Ҫ�ػ�ԭͼ�����
					/// </summary>
					/// <param name="element">xml������</param>
					/// <returns>ͼ�����ָ��</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}

#endif