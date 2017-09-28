#ifndef EARTHVIEW_WORLD_SPATIAL3D__STREETVIEWLOCALDATASET_H
#define EARTHVIEW_WORLD_SPATIAL3D__STREETVIEWLOCALDATASET_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "spatialserverclient/evdatasets.h"
#include "core/name_value_pair.h"
#include "core/datastream.h"
#include "spatialinterface/idatasource.h"
#include "core/stringdefines.h"
#include "spatialinterface/idataset.h"
#include "spatial2dgeodatabase/vectorfeatureclass.h"
#include "spatial2dgeodatabase/databasevectorsource.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

				class EV_Spatial3DStreetView_DLL CLocalStreetViewDataset : public EarthView::World::Spatial::IStreetViewDataset
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CLocalStreetViewDataset(_in EarthView::World::Core::CNameValuePairList *pList);

				public:


					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="">���ݼ�������</param>
					/// <returns></returns>
					CLocalStreetViewDataset(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataSource* ref_DataSource);

					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					virtual ~CLocalStreetViewDataset();
					/// <summary>
					/// ��ȡ���ݼ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ݼ�����</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					virtual EarthView::World::Spatial::CStreetViewMetaDataInfo* getMetaDataInfo();
					virtual ev_bool getStreetPoints(_in const EVString& mapCode,_out EarthView::World::Spatial::Download::CStreetPointList& streetPoints);
					virtual EarthView::World::Core::MemoryDataStreamPtr getPicture(ev_int32 ID, ev_int32 level, ev_int32 row, ev_int32 col);
					virtual ev_int32 getStreetViewLevel()
					{
						return mLevel;
					}
					ev_void parseEnvelope(EVString strenvelope, EarthView::World::Spatial::Geometry::CEnvelope* envelope);
				protected:
					EVString mDatasetName;
					EVString mGUID;
					EVString mSrcFolder;
					EVString mSVDFile;
					EarthView::World::Spatial::GeoDataset::IFileDataSource* mpDataSource;	
				private:
					ev_int32 mLevel;
					EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource* mpVectorDataSource;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* mpVectorFeatureClass;
				};
			
		}
	}
}
#endif
