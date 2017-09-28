#pragma  once
#ifndef EV_CACHEDATASET_DIR__H
#define EV_CACHEDATASET_DIR__H
#include "spatial3dengine/spatial3denginecomdef.h"
#include "tileutility/tilepathenums.h"
#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class EV_Spatial3DEngine_DLL CCacheDatasetDir
			{
ev_private:
				CCacheDatasetDir(_in EarthView::World::Core::CNameValuePairList* pList);
			public :
				CCacheDatasetDir();
				~CCacheDatasetDir();
				/// ͨ���������к��Լ������ļ�Ŀ¼�õ������ļ�������·����һ�����ļ���һ�����
				static EVString calcImageTileCacheFilePath(EarthView::World::Spatial::EVTileModeType tilemode,const EVString& layerPath, const ev_int32 level, 	const ev_int32  row, const ev_int32  col);
				/// ͨ���������кźͻ��ļ���Ŀ¼�õ������ļ�������·����һ�����ļ���һ�����
				static EVString calcDemCacheFilePath(const EVString& layerPath, const ev_int32 level, 	const ev_int32  row, const ev_int32  col);

			};
		}
	}
}
#endif