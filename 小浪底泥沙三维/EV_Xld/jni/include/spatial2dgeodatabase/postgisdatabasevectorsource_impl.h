#ifndef _POSTGIS_DATABASE_VECTOR_SOURCE_IMPL_H_H_
#define _POSTGIS_DATABASE_VECTOR_SOURCE_IMPL_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatial2dgeodatabase/vectorfeatureclass.h"
#include "spatial2dgeodatabase/databasevectorsource.h"
#include "databaseutility/sqldatabase.h"
#include "spatial2dgeodatabase/vectorfeatureclassoperator_postgisimp.h"
#include "spatialinterface/ifields.h"
#include "spatialinterface/igeometryfield.h"
#include "spatial2dgeodatabase/databasevectorsource_impl.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

				class CPostGisDatabaseVectorSourceImpl : public CDatabaseVectorSourceImpl
				{
				public:
					CPostGisDatabaseVectorSourceImpl(const EarthView::World::Core::Database::CSqlDatabase &db,EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource *ds);
					~CPostGisDatabaseVectorSourceImpl();
					/// <summary>
					/// �ж�����Դ�Ƿ���Ч
					/// </summary>
					/// <param name="name">ָ������</param>
					/// <returns>��Чɾ��������true;���򣬷���false</returns>
					ev_bool isValid();
					/// <summary>
					/// ��ʼ�༭�����ڱ�ʶ���ݼ����ڱ༭״̬�������ݲ�����������ر༭����
					/// </summary>
					/// <param name="withUndo">ȷ���Ƿ���Undo����</param>
					/// <returns>�����༭�ɹ�������true�����򣬷���false</returns>
					ev_bool startEditing(const EVString &Name); 
					/// <summary>
					/// �����༭�����ڱ�ʶ���ݼ������༭�����ݲ�����ȷʵ�Ƿ񱣴����ݡ�
					/// </summary>
					/// <param name="isSave">��Ҫ����༭���ݣ�����true;��������false</param>
					/// <returns>�����༭�ɹ�������true;���򣬷���false</returns>
					ev_bool stopEditing(const EVString &Name,ev_bool isSave);

					ev_bool IsEditing() const;
					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <param name="name">ָ������</param>
					/// <returns>���ݼ�����</returns>
					EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType(const EVString &name);
					/// <summary>
					/// ɾ��ָ�����ݼ���Operator
					/// </summary>
					/// <param name="name">ָ������</param>
					/// <returns>��Ӧ��Operator</returns>
					EarthView::World::Spatial::GeoDataset::IDatasetOperator* getOperatorRef(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
					/// <summary>
					/// ��ָ�����ݼ����Ƶ����ݼ�
					/// </summary>
					/// <param name="name">ָ������</param>
					/// <returns>���ݼ�����ָ�룬������ֲ����ڣ��ⷵ��null</returns>
					EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);
					/// <summary>
					/// ɾ��ָ�����ݼ����Ƶ����ݼ�
					/// </summary>
					/// <param name="name">ָ������</param>
					/// <returns>�ɹ�ɾ��������true;���򣬷���false</returns>
					ev_bool deleteDataset(const EVString& name);
					/// <summary>
					/// ��FeatureClass���ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>CVectorFeatureClass��ָ��</returns>
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* openFeatureClass(const EVString &name);
					
					/// <summary>
					/// ɾ��FeatureClass���ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ɹ�ɾ��������true;���򣬷���false</returns>
					ev_bool	deleteFeatureClass(const EVString &name);
					/// <summary>
					/// ��ȡ�������ݼ��Ĵ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ɹ�������ָ��;���򣬷���NULL</returns>
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* getNetworkDatasetBuilder();
					/// <summary>
					/// ���������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ɹ���������Чָ��;���򣬷���NULL</returns>
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* openNetworkDataset(const EVString &name);
					/// <summary>
					/// ɾ���������ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ɹ�������true;���򣬷���False</returns>
					ev_bool deleteNetworkDataset(const EVString &name);
					/// <summary>
					/// ��ȡ��ע���ݼ��Ĵ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ɹ�������ָ��;���򣬷���NULL</returns>
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* getAnnoDatasetBuilder();
					/// <summary>
					/// �򿪱�ע���ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ɹ���������Чָ��;���򣬷���NULL</returns>
					EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass* openAnnoDataset(const EVString &name);
					/// <summary>
					/// ��ȡָ�����ݼ����͵�����Ԫ��Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ԫ��Ϣ���϶���</returns>
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);
					/// <summary>
					/// ��ȡָ�����ݼ����͵�����Ԫ��Ϣ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ԫ��Ϣ���϶���</returns>
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
					/// <summary>
					/// ��ȡָ�����ݼ����͵����ݼ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ��ĵ�����</returns>
					EarthView::World::Spatial::GeoDataset::IDatasetIterator* getDatasets(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
					/// <summary>
					/// ���л��ַ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString toXML() const;
					/// <summary>
					/// ��ȡ����Դ�����ַ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����ַ���</returns>
					EVString getConnectionString() const;

				private:
					/// <summary>
					/// �Ƿ�������ݼ�
					/// </summary>
					/// <param name="name">ָ������</param>
					/// <returns>�ɹ�ɾ��������true;���򣬷���false</returns>
					ev_bool  containDataset(const EVString &name);
					ev_int32 createTable(const EarthView::World::Core::CUnicodeString& sql);
					ev_int32 createGeometryTableTable(const char* datasetName);
					ev_int32 getFieldMaxId(EarthView::World::Core::Database::CSqlQuery& query, const EVString& sql);
					//�������ݼ�ʧ��ʱ����ɾ��������ĳЩ���ݿ⣬DDL��������޷��ع�
					ev_bool deleteFeatureClass2(const EVString &name);
					//ִ�ж���sql���
					ev_bool executeMultiSQL(const EarthView::World::Core::CUnicodeString& sql);
				private:
					EarthView::World::Spatial::GeoDataset::IDatasetOperator         *m_opr;
				};



			}}}} // End of namespaces

#endif //_POSTGIS_DATABASE_VECTOR_SOURCE_IMPL_H_H_