#ifndef EARTHVIEW_WORLD_ANNOFEATUREITERATOR_COFING_H
#define EARTHVIEW_WORLD_ANNOFEATUREITERATOR_COFING_H
#include "annotation/config.h"
#include "annotation/annofeatureclass.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialdatabase/fields.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class EV_ANNOTATION_EXPORTS CAnnoIterator
					: public EarthView::World::Spatial::GeoDataset::IFeatureIterator
				{
					friend class CAnnoFeatureClass;
				public:
					/// <summary>
					/// Ĭ����������
					/// </summary>
					virtual ~CAnnoIterator();
				public:
					/// <summary>
					/// ��ȡ��һ����¼
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ��</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next();
					/// <summary>
					/// ��ȡҪ���ֶ���Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ���ֶ���Ϣ</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const;
					/// <summary>
					/// ͨ��������ȡҪ��ĳһ�ֶ���Ϣ
					/// </summary>
					/// <param name="index">������</param>
					/// <returns>����Ҫ��ĳһ�ֶ���Ϣ</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const;
					/// <summary>
					/// ͨ�����Ʋ����ֶ�
					/// </summary>
					/// <param name="fieldName">�ֶ���</param>
					/// <returns>���ز��ҵ����ֶ�����</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
				ev_private:
					CAnnoIterator(EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CAnnoIterator(EVString key,CAnnoFeatureClass* fc);
				private:
					CAnnoIterator(CAnnoIterator & iterator);

					EVString						m_QueryKey;
					EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass			*m_pFC;
					EarthView::World::Spatial::GeoDataset::CFields						*m_pFieldSet;
					EarthView::World::Spatial::Geometry::IGeometry					*m_pGeometry;
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType	m_nSpatialRelation;
					EarthView::World::Spatial::GeoDataset::IFeature					*m_pFeature;
				};
			}
		}
	}
}

#endif 