#ifndef EV_STREETVIEW_TABLE___H
#define EV_STREETVIEW_TABLE___H
#include "core/datastream.h"
#include "mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
#include "download/streetviewserviceconnection.h"
#include "spatialserverclient/evmetaobjectinfo.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			// <summary>
			// ��������д��ά��DEM_Table���
			// </summary>
			class EV_CACHEMANAGER_DLL StreetViewTable : public EarthView::World::Spatial::CacheTable
			{
			public:
				StreetViewTable();

				~StreetViewTable();

				/// <summary>
				/// �ڸ��������ݿ����Ӷ����г�ʼ�����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

				ev_bool writeMetadataInfo(EVString& filepath, const EVString& stream);

				ev_bool writeStreetViewDataInfo(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EarthView::World::Spatial::Download::CStreetPointList& streetviewinfolist);

				ev_bool writePictureData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 level, 
					const ev_int32 row, 
					const ev_int32 col,
					const ev_int32 photoid,
					const EarthView::World::Core::MemoryDataStreamPtr& picturestream);

				ev_bool readMetadataInfo(EVString& filepath, EVString& stream);

				ev_bool readStreetViewDataInfo(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& mapCode,
					EarthView::World::Spatial::Download::CStreetPointList& streetviewinfolist);

				EarthView::World::Core::MemoryDataStreamPtr readPictureData(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 level, 
					const ev_int32 row, 
					const ev_int32 col,
					const ev_int32 photoid);

				/// <summary>
				/// ���ָ��ͼ��Ļ�������,��ɾ��db�ļ�
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);

			protected:
			private:
			};

		}}}
#endif