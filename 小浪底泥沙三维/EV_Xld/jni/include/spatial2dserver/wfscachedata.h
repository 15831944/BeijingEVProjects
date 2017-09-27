#ifndef EARTHVIEW_WORLD_SPATIAL_WFSCACHEDATA_H
#define EARTHVIEW_WORLD_SPATIAL_WFSCACHEDATA_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/wfslayer.h"
#include "spatialinterface/ifeatureclass.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class EV_2DWMS_DLL CWFSCacheData
					:public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
				public:		
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					virtual ~CWFSCacheData();

					/// <summary>
					/// ��ȡ���ݰ�Χ����Ϣ
					/// </summary>
					/// <returns>��Χ�ж���ָ��</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope * getEnvelopeRef() const;
					/// <summary>
					/// ��ȡҪ�ؼ���������
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ҫ�ؼ���������</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// ��ȡ���ݼ��Ŀռ�����ϵ�ο�����
					/// </summary>
					/// <returns>�ռ�����ο�ϵ�����ڲ����ã������ͷ�</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;

					/// <summary>
					/// ��ѯҪ�أ�����SDK��ѯ�ӿڣ��ڲ�����getFeature
					/// </summary>
					/// <param name="filter">��ѯ��</param>
					/// <returns>�������������</returns>
					_extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator*  query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// ��ȡָ��ID��Ҫ��
					/// </summary>
					/// <param name="id">ָ��ID</param>
					/// <returns>Ҫ�ض�������޸�ID������NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id);
					/// <summary>
					/// ��ȡָ����ѯ������Ҫ����Ŀ
					/// </summary>
					/// <param name="filter">��ѯ����</param>
					/// <returns>Ҫ����Ŀ</returns>
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// ����ָ������������ѡ��
					/// </summary>
					/// <param name="filter">ָ���ռ���������</param>
					/// <returns>Ҫ��ѡ����</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// ��ȡҪ�����ݼ����ֶμ���
					/// </summary>
					/// <returns>�ֶμ��϶����ڲ����ã������ͷ�</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() ;
					/// <summary>
					/// ��ȡҪ�����ݼ����ֶ���Ŀ
					/// </summary>
					/// <returns>�ֶ���Ŀ</returns>
					virtual ev_uint32 getFieldCount() const;
					/// <summary>
					/// ��ȡָ���������ֶζ���
					/// </summary>
					/// <param name="index">ָ������</param>
					/// <returns>�ֶζ����ڲ����ã������ͷ�</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index)const;
					/// <summary>
					/// �Ƿ����ҵ�ָ���ֶ����ơ�
					/// </summary>
					/// <param name="fieldName">ָ���ֶ�����</param>
					/// <returns>����ҵ�����������������Ҳ���������-1</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <returns>���ݼ�����</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// ��ȡҪ�����ݼ�����
					/// </summary>
					/// <returns>Ҫ�����ݼ�����</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const;
					/// <summary>
					/// ����һ�����ݱ�Ĵ������
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy();
					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <returns>���ݼ�����</returns>
					virtual EVString getName() const; 

					/// <summary>
					/// ��ȡ���ݰ汾
					/// </summary>
					/// <returns>���ݰ汾</returns>
					virtual ev_uint64 getDataVersion() const{return 0;}

					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <returns>����������Ϣ</returns>
					virtual EVString getDescription() const{return "";}

					/// <summary>
					/// ��ȡ���ݸ���ʱ��
					/// </summary>
					/// <returns>���ݸ���ʱ��</returns>
					virtual EVString getUpdateTime() const{return "";}

					/// <summary>
					/// ��ȡ����Դ
					/// </summary>
					/// <returns>����Դ����ָ��</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef()const;

					/// <summary>
					/// �Ƿ�ɱ༭
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool canEdit() const{return false;}

					/// <summary>
					/// �Ƿ����ڱ༭
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool isEditing() const{return false;}

					/// <summary>
					/// ��ʼ�༭
					/// </summary>
					/// <param name="withUndo">�Ƿ���</param>
					/// <returns>false</returns>
					virtual ev_bool startEditing(_in ev_bool withUndo){return false;}

					/// <summary>
					/// ֹͣ�༭
					/// </summary>
					/// <param name="isSave">�Ƿ񱣴�</param>
					/// <returns>false</returns>
					virtual ev_bool stopEditing(_in ev_bool isSave){return false;}

					/// <summary>
					/// �Ƿ��ڱ༭״̬
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool isBeginEditingOperation(){return false;}

					/// <summary>
					/// ��ʼ�༭
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool beginEditingOperation(){return false;}

					/// <summary>
					/// ֹͣ�༭
					/// </summary>
					/// <param name="isConfirm">�Ƿ�һ����ֹ</param>
					/// <returns>false</returns>
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm){return false;}

					ev_void setGUID(const EVString & str);
					EVString getGUID();
					EarthView::World::Spatial::GeoDataset::IFeatureClass* getVectorFeatureClass();
				ev_internal:
					///���캯��
					CWFSCacheData(EarthView::World::Spatial::GeoDataset::IFeatureClass * ref_cacheFeatureClass);
ev_private:
					CWFSCacheData(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					IFeatureClass* mpCacheFeatureClass;
					EVString mstrGUID;
					friend class CWFSCacheSelection;
					friend class EarthView::World::Spatial2D::Atlas::CWFSLayer;
				};
}}}}

#endif //EARTHVIEW_WORLD_SPATIAL_WFSCACHE_H