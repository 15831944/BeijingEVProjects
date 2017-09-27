#ifndef EARTHVIEW_WORLD_ANNOFEATURE_COFING_H
#define EARTHVIEW_WORLD_ANNOFEATURE_COFING_H
#include "annotation/config.h"
#include "annotation/annofeatureclass.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/ilabelengine.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class EV_ANNOTATION_EXPORTS CAnnoFeature
					: public EarthView::World::Spatial::GeoDataset::IFeature
				{
					friend class CAnnoFeatureClass;
					friend class CAnnoIterator;
				public:	
					/// <summary>
					/// Ĭ����������
					/// </summary>
					virtual ~CAnnoFeature();
				public:
					/// <summary>
					/// ��ȡҪ��ID
					/// </summary>
					/// <returns>ID�ţ�һ������£�����0</returns>
					virtual ev_uint32 getID() const;
					/// <summary>
					/// ��ȡҪ�صļ���������
					/// </summary>
					/// <returns>����������ö��</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// ��ȡҪ���ֶμ���
					/// </summary>
					/// <returns>�ֶμ��ϣ��ڲ����ã��ⲿ�����ͷ�</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;
					/// <summary>
					/// ��ȡҪ���ֶ���Ŀ
					/// </summary>
					/// <returns>�ֶ���Ŀ</returns>
					virtual ev_uint32 getFieldCount() const;
					/// <summary>
					/// ��ȡָ��������Ҫ���ֶ�
					/// </summary>
					/// <param name="index">ָ������</param>
					/// <returns>�ֶζ����ڲ����ã��ⲿ�����ͷ�</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;
					/// <summary>
					/// �ҵ�ָ���ֶ����Ƶ��ֶ�
					/// </summary>
					/// <param name="fieldName">�ֶ�����</param>
					/// <returns>����ҵ������ظ����������û���ҵ�������-1</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
					/// <summary>
					/// ��ȡָ���������ֶ�ֵ
					/// </summary>
					/// <param name="value">������ֶ�ֵ</param>
					/// <param name="index">ָ������</param>
					/// <returns></returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant & value,ev_uint32 index) const;
					/// <summary>
					/// ��ȡҪ�ص����Χ��
					/// </summary>
					/// <returns>�ڲ����ã��ⲿ�����ͷ�</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// ����ָ���������ֶ�ֵ
					/// </summary>
					/// <param name="value">�ֶ�ֵ</param>
					/// <param name="index">ָ������</param>
					/// <returns></returns>
					virtual ev_void setValue(const EarthView::World::Core::CVariant & value,ev_uint32 index);
					/// <summary>
					/// �����ݼ���ɾ��Ҫ��
					/// </summary>
					/// <returns>true���ɹ���false��ʧ��</returns>
					virtual ev_bool deleteFeature();
					/// <summary>
					/// �����ݼ��ϱ���Ҫ��
					/// </summary>
					/// <returns>true���ɹ���false��ʧ��</returns>
					virtual ev_bool saveFeature();
					/// <summary>
					/// ��ȡҪ�صļ��������
					/// </summary>
					/// <returns>�ڲ����ã��ⲿ�����ͷ�</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;
					EarthView::World::Spatial::GeoDataset::IFeature* clone() const;
					// --
					EVString getText();
					const EarthView::World::Spatial::Display::ISymbol *getSymbol();
					ev_bool getState();
					ev_void setSymbol(EarthView::World::Spatial::Display::ISymbol *ref_symbol);
					EarthView::World::Spatial::Display::CLabelElement * getElement();
ev_private:
					/// <summary>
					/// ���ڷ�װ�Ĺ��캯��
					/// </summary>
					CAnnoFeature(EarthView::World::Core::CNameValuePairList *pList);
					// --
				protected:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					CAnnoFeature();
					CAnnoFeature(EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass *pFC);
					ev_void toStream(EarthView::World::Core::CDataStream &stream);
					ev_void initial();
					ev_void makeElementFromStream(EarthView::World::Core::CDataStream &stream);
					ev_void solveAttributes();
					/// <summary>
					/// ����Ҫ�صļ���������ڲ������ü�����
					/// </summary>
					/// <param name="geom">���������</param>
					/// <returns></returns>
					virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
					virtual ev_void updateGeometry();
				protected:
					ev_int32			m_pOID;

					const EarthView::World::Spatial::Geometry::IGeometry		*m_pGeometry;
					
					const EarthView::World::Spatial::GeoDataset::IFields*		m_pFieldSet;

					/* �ֶ�ֵӳ�� */
					ev_vector<EarthView::World::Core::CVariant> m_pValueVector;
					/* ͳ����Щ�ֶ���Ҫ���� */ 
					ev_vector<ev_bool>	m_pDirtyVector;
					/* �Ƿ��ƻ�ԭ��Geom���� */
					ev_bool				m_bDirty;
					
					ev_bool					m_isBufferFeature;
					EarthView::World::Core::CBufferDataStream		m_memBuffer;
			//		ev_vector<ev_size_t>	m_indicator;
					ev_bool					m_isAttributesSolved;

					EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass*	m_pSrcDataset;

					EarthView::World::Spatial::Display::ISymbol * mpAnnoSymbol;

					EarthView::World::Spatial::Display::CLabelElement * mpLabelElement;
	
				};
			}
		}
	}
}

#endif 