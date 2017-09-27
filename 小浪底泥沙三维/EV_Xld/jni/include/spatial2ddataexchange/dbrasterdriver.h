#ifndef _DBRASTERDRIVER_H_H
#define _DBRASTERDRIVER_H_H

#include "spatial2ddataexchange/datadriver.h"
#include "spatialinterface/irasterdataset.h"
#include "spatial2ddataexchange/dbrasterexchangeparam.h"
#include "rasterdataset/dbrasterdataset.h"
#include "spatialinterface/idatasourcefactory.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Convertor{

				class EV_SPATIAL2DDATAEXCHANGE_DLL CDBRasterDriver:
					public EarthView::World::Spatial::Convertor::CDataDriver
				{
				public:
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					virtual ~CDBRasterDriver();
					/// <summary>
					/// д���������
					/// </summary>
					/// <returns></returns>
					virtual ev_void finishWrite();
					/// <summary>
					/// �ر���������
					/// </summary>
					/// <returns></returns>
					virtual ev_void close();
					///<summary>
					///��ȡ���ݿ��е�դ�����ݿ���Ϣ
					///<summary>
					virtual ev_int32 read(_in ev_uint32 index,_out EarthView::World::Core::CDataStream& stream );
					///<summary>
					///�����ݿ��е�դ�����ݼ�д��������Ϣ
					///<summary>
					virtual ev_int32 write(_in ev_uint32 index,_in EarthView::World::Core::CDataStream& stream);
					/// <summary>
					/// ����������
					/// </summary>
					/// <param name="pPropertySet">���ݼ�������Ϣ</param>
					/// <param name="mode">����ģʽ</param>
					/// <param name="param">ת������</param>
					/// <param name="featurecount">��Ҫ����</param>
					/// <param name="stream">���ݽṹ</param>
					/// <returns>�������״̬</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& blockcount,_inout EarthView::World::Core::CDataStream& stream);
					/// <summary>
					/// ����������
					/// </summary>
					/// <param name="pDataSource">����Դ</param>
					/// <param name="datasetname">���ݼ�����</param>
					/// <param name="mode">����ģʽ</param>
					/// <param name="param">ת������</param>
					/// <param name="featurecount">��Ҫ����</param>
					/// <param name="stream">���ݽṹ</param>
					/// <returns>�������״̬</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,_in const EVString& datasetName,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& blockcount,_inout EarthView::World::Core::CDataStream& stream);
					///<summary>
					///��ȡ����ת������
					///</summary>
					//EarthView::World::Spatial::Convertor::CDBRasterExchangeParam *getExchangeParam();
					///<summary>
					///��������ת������
					//ev_void setExchangeParam(_in EarthView::World::Spatial::Convertor::CDBRasterExchangeParam&objparam);
				private:
                    ev_int32 readRasterInfo(_inout EarthView::World::Core::CDataStream & os);
					EarthView::World::Spatial2D::Raster::CDBRasterDataset*  openRasterDataset(_in const EVString& name);
					ev_bool getRasterFormat(EarthView::World::Core::CDataStream& stream);
                ev_private:
					CDBRasterDriver(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					///<summary>
					///���캯��
					///<summary>
					CDBRasterDriver();
				private:
					EVString mstrPath;
					EVString mstrName;
					EVString mstrTableName;
	
					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;					
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* mpDataset;
					bool mbIsBuildOverview;
					ev_int32 mnBlockSize;
					ev_int32 mnBlockCount;
					ev_int32 mnBandCount;
					ev_int32 mnXnum;   //���ݼ�X����ķֿ���
					ev_int32 mnYnum;   //���ݼ�Y����ķֿ���
					friend class CDataDriverFactory;
				};
			}
		}
	}
}
#endif