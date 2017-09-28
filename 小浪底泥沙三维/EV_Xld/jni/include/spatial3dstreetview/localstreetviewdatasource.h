#ifndef EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWDATASOURCE_H
#define EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWDATASOURCE_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idatasourcefactory.h"
#include "spatialdatabase/datametainfos.h"
#include "spatialdatabase/datametainfo.h"
#include "spatialinterface/idatasetiterator.h"
#include "databaseutility/sqldatabase.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{


			class CLocalStreetViewDataSourceFactory;
			class EV_Spatial3DStreetView_DLL CLocalStreetViewDataSource : public EarthView::World::Spatial::GeoDataset::IFileDataSource
			{
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CLocalStreetViewDataSource(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CLocalStreetViewDataSource(const EVString& datasourcePath,const EVString& aliasname);


				/// <summary>
				/// ��������
				/// </summary>
				/// <returns></returns>
				~CLocalStreetViewDataSource();					
				/// <summary>
				/// ��ȡ����Դ����
				/// </summary>
				/// <returns>����Դ����</returns>
				virtual EVString getName() const;
				/// <summary>
				/// ��ȡ����Դ����
				/// </summary>
				/// <returns>����Դ����</returns>
				virtual ev_int32 getType() const;
				/// <summary>
				/// ��ȡ����Դ����
				/// </summary>
				/// <returns>����ԴKeyValue����</returns>
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
				/// <summary>
				/// �ж�����Դ�Ƿ���Ч
				/// </summary>
				/// <returns>�ǣ�����true;���򣬷���false</returns>
				virtual ev_bool isValid() const;
				/// <summary>
				/// ��ȡָ�����ݼ����͵�����Ԫ��Ϣ
				/// </summary>
				/// <param name="name">���ݼ�����</param>
				/// <returns>����Ԫ��Ϣ���϶���</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);
				/// <summary>
				/// ��ȡָ�����ݼ����͵�����Ԫ��Ϣ
				/// </summary>
				/// <param name="type">���ݼ�����</param>
				/// <returns>����Ԫ��Ϣ���϶���</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				/// <summary>
				/// �������ݼ�
				/// </summary>
				/// <param name="name">���ݼ�����</param>
				/// <param name="dstFolder">Ŀ��Ŀ¼</param>
				/// <param name="attrFields">���ԣ�NULL�����Զ�������</param>
				/// <returns>�ǣ�����true;���򣬷���false</returns>
				static ev_bool createDataset(const EVString& name, const EVString& dstFolder, const EarthView::World::Spatial::GeoDataset::IFields* attrFields);

				/// <summary>
				/// ��ָ�����ݼ����Ƶ����ݼ�
				/// </summary>
				/// <param name="name">ָ������׺�������ݼ�����</param>
				/// <returns>���ݼ�����ָ�룬������ֲ����ڣ��ⷵ��null</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(const EVString& name);

				/// <summary>
				/// �ر�ָ�����ݼ����Ƶ����ݼ�����ɾ�����ݼ�ָ��
				/// </summary>
				/// <param name="name">���ݼ�ָ��</param>
				/// <returns>�ɹ�ɾ��������true;���򣬷���false</returns>
				virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset * dataset);

				/// <summary>
				/// ɾ��ָ�����ݼ����Ƶ������ļ�
				/// </summary>
				/// <param name="name">ָ������</param>
				/// <returns>�ɹ�ɾ��������true;���򣬷���false</returns>
				virtual ev_bool deleteDataset(const EVString& name);

				/// <summary>
				/// ���л��ַ���
				/// </summary>
				/// <returns>�����ַ���</returns>
				virtual EVString toXML() const;
				/// <summary>
				/// ��ȿ���
				/// </summary>
				/// <returns>����Դ</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;


				/// <summary>
				/// ��ȡָ�����ݼ����Ƶ����ݼ�
				/// </summary>
				/// <param name="name">ָ������׺�������ݼ�����</param>
				/// <returns>���ݼ�����ָ�룬������ֲ����ڣ��ⷵ��null</returns>
				EarthView::World::Spatial::GeoDataset::IDataset* getDataset( EVString name );
				ev_bool usingObqDatabase( EarthView::World::Core::Database::CSqlDatabase& db );

			protected:
				friend class CLocalStreetViewDataSourceFactory;
			private:					
				EarthView::World::Core::ev_stringArray mFilesArray;
				EVString mName;	

				vector<EarthView::World::Spatial::GeoDataset::IDataset*> mDatasets;
			};

			class EV_Spatial3DStreetView_DLL CLocalStreetViewDataSourceFactory:public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
			{
			private:
				static EarthView::World::Spatial3D::CLocalStreetViewDataSourceFactory* mSingletonPtr;
			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <returns></returns>
				CLocalStreetViewDataSourceFactory();
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CLocalStreetViewDataSourceFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// ��������
				/// </summary>
				/// <returns></returns>
				virtual ~CLocalStreetViewDataSourceFactory();
				/// <summary>
				/// ���ص���������Դ�������
				/// </summary>
				/// <returns>CModelDataSourceFactory��ʧ���򷵻�NULL</returns>
				static EarthView::World::Spatial3D::CLocalStreetViewDataSourceFactory* getSingletonPtr();

				/// <summary>
				/// �ͷ�����Դ�ڴ�
				/// </summary>
				/// <param name="ds">����Դ���</param>
				/// <returns></returns>
				void closeDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* ds);

				/// <summary>
				/// �򿪱����ļ��͵�����Դ
				/// </summary>
				/// <param name="path">�ļ�������Դ�ļ���</param>
				/////// <param name="fileName">����Դ����</param>
				/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource����ʧ���򷵻�NULL</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString& path,const EVString& fileName);
				/// <summary>
				/// �����������ݿ�������Դ
				/// </summary>
				/// <param name="path">�ļ�������Դ�ļ���</param>
				/////// <param name="fileName">����Դ����</param>
				/// <returns>EarthView::World::Spatial::GeoDataset::IDataSource����ʧ���򷵻�NULL</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(const EVString& path,const EVString& fileName);

				/// <summary>
				/// ��ȡ����Դ������
				/// </summary>
				/// <returns>��������Դ������</returns>
				virtual ev_int32 getType() const;
				/// <summary>
				/// ��xml�ַ�����������Դ
				/// </summary>
				/// <param name="xml">xml�ַ���</param>
				/// <returns>����Դ</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml);
				/// <summary>
				/// ������Դ
				/// </summary>
				/// <param name="connection">���������б�</param>
				/// <returns>����Դ</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);	
				/// <summary>
				/// ��������Դ
				/// </summary>
				/// <param name="connection">���������б�</param>
				/// <returns>����Դ</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
				/// <summary>
				/// ��������Դ
				/// </summary>
				/// <param name="pDataSource">����Դ</param>
				/// <returns></returns>
				virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			};
		}
	}
}
#endif