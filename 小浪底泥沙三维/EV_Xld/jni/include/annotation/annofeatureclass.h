#ifndef EARTHVIEW_WORLD_ANNOFEATURECLASS_COFING_H
#define EARTHVIEW_WORLD_ANNOFEATURECLASS_COFING_H
#include "annotation/config.h"
#include "annotation/annotationoperator.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/ifeatureiterator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class CAnnotationOperator;
				class CAnnoFeatureClassEditor;
				class CAnnoIterator;
				class EV_ANNOTATION_EXPORTS CAnnoFeatureClass
					: public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
					friend class CAnnoDataSource;
				public:
					/// <summary>
					/// Ĭ����������
					/// </summary>
					~CAnnoFeatureClass();
				public:
					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�����</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�����</returns>
					virtual EVString getName() const;
					/// <summary>
					/// ��ȡ���ݼ��汾�ţ��÷�����ȷ�����ݱ�������
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ��汾��</returns>
					virtual ev_uint64 getDataVersion() const;
					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�����</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// ��ȡ���ݼ�����ʱ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�����ʱ��</returns>
					virtual EVString getUpdateTime() const;
					/// <summary>
					/// �ж��Ƿ���������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ǣ�����true;���򣬷���false</returns>
					virtual ev_bool hasSubDataset() const;
					/// <summary>
					/// ��ȡ���ݼ���������Դ���󣬸�ֵΪ���ö���ָ�롣
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ���������Դ����ָ��</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
					/// <summary>
					/// �ж����ݼ��Ƿ���б༭����
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ǣ�����true;���򣬷���false</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// �ж����ݼ��Ƿ��ڱ༭״̬
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ǣ�����true;���򣬷���false</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// ��ʼ�༭�����ڱ�ʶ���ݼ����ڱ༭״̬�������ݲ�����������ر༭����
					/// </summary>
					/// <param name="withUndo">ȷ���Ƿ���Undo����</param>
					/// <returns>�����༭�ɹ�������true�����򣬷���false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);
					/// <summary>
					/// �����༭�����ڱ�ʶ���ݼ������༭�����ݲ�����ȷʵ�Ƿ񱣴����ݡ�
					/// </summary>
					/// <param name="isSave">��Ҫ����༭���ݣ�����true;��������false</param>
					/// <returns>�����༭�ɹ�������true;���򣬷���false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);
					/// <summary>
					/// �ж����ݼ��Ƿ��ڱ༭����״̬
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ǣ�����true;���򣬷���false</returns>
					virtual ev_bool isBeginEditingOperation();
					/// <summary>
					/// �����༭���������ڱ�ʶ���ݼ��༭������
					/// �ڵ���endEditingOperation�����󣬰����β���֮��ı༭����Ϊһ�α༭״̬�ύ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����༭�����ɹ�������true;���򣬷���false</returns>
					virtual ev_bool beginEditingOperation();
					/// <summary>
					/// �����༭���������ڱ�ʶ���ݼ��༭����������
					/// �ڵ���endEditingOperation�����󣬰����β���֮��ı༭����Ϊһ�α༭״̬�ύ��
					/// </summary>
					/// <param name="isConfirm">�ύ����������true;��������false</param>
					/// <returns>�����༭�����ɹ�������true;���򣬷���false</returns>
					virtual ev_bool endEditingOperation(ev_bool isConfirm);


				public:
					/// <summary>
					/// ��ȡҪ�ؼ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ�����</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType	getFeatureClassType() const 
					{return  EarthView::World::Spatial::GeoDataset::FCT_ANNOTATION;}
					
					/// <summary>
					/// ��ȡҪ�ؼ��ֶ���Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ��ֶ���Ϣ</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields*		getFieldsRef() const;
					/// <summary>
					/// ��ȡҪ�ؼ��ֶ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ��ֶ�����</returns>
					virtual ev_uint32			getFieldCount() const;
					/// <summary>
					/// ͨ��������ȡ�ֶ�
					/// </summary>
					/// <param name="index">������</param>
					/// <returns>����������Ҫ�ؼ��ֶ�</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField*		getFieldRef(ev_uint32 index) const;
					/// <summary>
					/// ͨ�����Ʋ����ֶ�
					/// </summary>
					/// <param name="fieldName">�ֶ���</param>
					/// <returns>�����ֶ�����</returns>
					virtual ev_int32			findField(const EVString& fieldName) const;
					/// <summary>
					/// ��ȡ��¼Ҫ�ؼ���������Ϣ���ֶ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ���������Ϣ�ֶ�</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField*		getGeometryField() const;
					/// <summary>
					/// ��ȡ��¼Ҫ�ؼ�ID��Ϣ���ֶ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ�ID��Ϣ�ֶ�</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField*		getIDField() const;
					
					/// <summary>
					/// ��ȡҪ�ؼ���С��Ӿ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ���С��Ӿ���</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope*			getEnvelopeRef() const;
					/// <summary>
					/// ��ȡҪ�ؼ��ռ�ο���Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ��ռ�ο���Ϣ</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;
					/// <summary>
					/// ͨ��ID�Ż�ȡҪ��
					/// </summary>
					/// <param name="id">ID��</param>
					/// <returns>����Ҫ��</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature*	getFeature(ev_uint32 id);
					/// <summary>
					/// ͨ��������ӻ�ȡҪ������
					/// </summary>
					/// <param name="filter">������</param>
					/// <returns>����Ҫ������</returns>
					virtual ev_uint32	getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// ���ڴ��д���Ҫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ش�����Ҫ��</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature*	createFeatureBuffer();
					/// <summary>
					/// ����Ҫ��
					/// </summary>
					/// <param name="feature">Ҫ��</param>
					/// <returns>���ɹ�����true�����򷵻�false</returns>
					virtual ev_bool		insert(EarthView::World::Spatial::GeoDataset::IFeature* feature);
					/// <summary>
					/// �����ڴ滺����Ҫ��
					/// </summary>
					/// <param name="buffer">Ҫ��</param>
					/// <returns>���ؽ������</returns>
					virtual ev_uint32	insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
	
					/// <summary>
					/// ����Ҫ��
					/// </summary>
					/// <param name="buffer">Ҫ��</param>
					/// <returns>���ɹ�����true�����򷵻�false</returns>
					virtual ev_bool		update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					/// <summary>
					///ͨ��IDɾ��Ҫ��
					/// </summary>
					/// <param name="id">ID��</param>
					/// <returns>���ɹ�����true�����򷵻�false</returns>
					virtual ev_bool		deleteFeature(ev_uint32 id);
					/// <summary>
					///��ѯ
					/// </summary>
					/// <param name="filter">������</param>
					/// <returns>���ص�����</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator*	query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					///ͨ����������ѯ��һ��Ҫ��
					/// </summary>
					/// <param name="iterator">������</param>
					/// <returns>����Ҫ��</returns>
					_extfree EarthView::World::Spatial::GeoDataset::IFeature*					nextFeature(const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator *iterator);
					/// <summary>
					///ͨ��������ѡ��
					/// </summary>
					/// <param name="filter">������</param>
					/// <returns>����ѡ��</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection*	select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					///ָֹͣ���������Ĳ�ѯ
					/// </summary>
					/// <param name="iterator">������</param>
					/// <returns></returns>
					virtual ev_void				endQuery(const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator *iterator);
					/// <summary>
					/// ����һ�����ݱ�Ĵ������
					/// </summary>
					/// <returns>�������ݱ�</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy();
					/// <summary>
					///ɾ��ָ�����������ֶ�
					/// </summary>
					/// <param name="index">ָ������</param>
					/// <returns>���ɹ�����true�����򷵻�false</returns>
					virtual ev_bool deleteField(ev_uint32 index);
					/// <summary>
					///������ȡҪ�ؼ���Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ɹ�����true�����򷵻�false</returns>
					ev_bool fromBinary(EarthView::World::Core::CDataStream &stream);
					virtual EarthView::World::Spatial::Geometry::EVGeometryType		getGeometryType() const;
					ev_real64 getScale();
				ev_private:
					CAnnoFeatureClass(EarthView::World::Core::CNameValuePairList *pList);
					virtual ev_uint32   insertFeatureBuffers(ev_vector<const EarthView::World::Spatial::GeoDataset::IFeature*> buffers);
				ev_private:
				//protected:
					//CVectorFeatureClass();
					CAnnoFeatureClass(CAnnotationOperator* opr);

				private:
					
					
					virtual EarthView::World::Spatial::GeoDataset::IFeature*	getFeature2(ev_uint32 id);
					virtual ev_uint32	insertFeatureBuffer2(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					virtual ev_bool		update2(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					virtual ev_bool		deleteFeature2(ev_uint32 id);
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator*	query2(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					EarthView::World::Spatial::GeoDataset::IFeature*					nextFeature2(const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator *iterator);
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection*	select2(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					ev_void fieldInitialization();
				private:
					/* ���ݼ����� */
					EVString						m_Name;
					/* ������һ�㲻�� */
					EVString						m_AliasName;
					/* ���ݼ����� */
					EarthView::World::Spatial::GeoDataset::EVDatasetType				m_nType;
					/* ������Ϣ */
					EVString						m_Description;
					/* ���ݼ��Ŀռ�����ϵ */
					EarthView::World::Spatial::Geometry::ISpatialReference*			m_pSpatialReference;
					/* ���ݼ��ķ�Χ */
					EarthView::World::Spatial::Geometry::IEnvelope*					m_pDatasetExtent;
					/* �������ֶ����� */
					EVString						m_ShapeFieldName;
					/* �������� */
					EarthView::World::Spatial::Geometry::EVGeometryType				m_nGeometryType;
					///* �ֶ� */
					EarthView::World::Spatial::GeoDataset::IFields*					m_pFieldSet;
					
					ev_bool						m_IsEditing;
					ev_bool						m_IsEditingOperation;
					ev_bool						m_bUndo;

					ev_uint32					m_maxID;
					//
					CAnnotationOperator* m_impl;
					CAnnoFeatureClassEditor	*m_pEditor;

					EVString                 mSourceName;
					EVString                 mSourceField;
					ev_real64                mScale;
				};
			}
		}
	}
}

#endif 