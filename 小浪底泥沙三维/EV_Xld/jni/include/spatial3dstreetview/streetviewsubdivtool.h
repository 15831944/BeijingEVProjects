#ifndef EV_STREET_VIEW_SUBDIV_TOOL_H
#define EV_STREET_VIEW_SUBDIV_TOOL_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/stringdefines.h"
#include "core/graphic_exception.h"
#include "core/memoryallocatedobject.h"
#include "core/stringvector.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class EV_Spatial3DStreetView_DLL  CStreetViewSubdivTool : public EarthView::World::Core::CBaseObject
			{

			ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CStreetViewSubdivTool(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CStreetViewSubdivTool();

				static ev_uint32 mapSize(ev_uint32 level)
				{
					return (ev_uint32)256 << level;
				}

				static double groundResolution(double latitude, int level);

				static double mapScale(double latitude, int level, int screenDpi);

				static void latLongToPixelXY(double latitude, double longitude, int level, int& pixelX, int& pixelY);

				static void pixelXYToLatLong(int pixelX, int pixelY, int level, double& latitude, double& longitude);

				static void pixelXYToTileXY(int pixelX, int pixelY, int& tileX, int& tileY)
				{
					tileX = pixelX / 256;
					tileY = pixelY / 256;
				}

				static void tileXYToPixelXY(int tileX, int tileY, int& pixelX, int& pixelY)
				{
					pixelX = tileX * 256;
					pixelY = tileY * 256;
				}

				static EVString tileXYToQuadKey(int tileX, int tileY, int level);

				static void quadKeyToTileXY(EVString quadKey, int& tileX, int& tileY, int& level);

				static EVString latLongToQuadKey(double latitude, double longitude, int level);

				static void quadKeyToLatLong(EVString quadKey, double& latitude, double& longitude);

				/// <summary>
				/// �������ڵĽ־������
				/// </summary>
				/// <param name="quadKey">�м�Ľ־������</param>
				/// <param name="nearKeys">���ڵĽ־������</param>
				/// <returns></returns>
				static void getNearQuadKeys(EVString quadKey, EarthView::World::Core::StringVector& nearKeys);

				/// <summary>
				/// ����ĳ����ľ�γ�ȿ��
				/// </summary>
				/// <param name="quadKey">�־������</param>
				/// <param name="maxLat">���γ��ֵ</param>
				/// <param name="minLon">��С����ֵ</param>
				/// <param name="minLat">��Сγ��ֵ</param>
				/// <param name="maxLon">��󾭶�ֵ</param>
				/// <returns></returns>
				static void getBorderLonLat(EVString quadKey, double& maxLat, double& minLon, double& minLat, double& maxLon);

				/// <summary>
				/// ����ĳ��γ�ȷ�Χ�����п����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void getRangeKeys(double minLat, double minLon, double maxLat, double maxLon, int level, EarthView::World::Core::StringVector& rangeKeys);

			private:
				static double clip(double n, double minValue, double maxValue)
				{
					return min(max(n, minValue), maxValue);
				}

				static double mEarthRadius;
				static double mMinLatitude;
				static double mMaxLatitude;
				static double mMinLongitude;
				static double mMaxLongitude;
			};

		}
	}
}

#endif