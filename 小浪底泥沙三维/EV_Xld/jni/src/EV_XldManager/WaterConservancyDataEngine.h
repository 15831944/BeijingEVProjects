#ifndef WATERCONSERVANCYDATAENGINE_H_
#define WATERCONSERVANCYDATAENGINE_H_

#include "xld\xldmanager_cfg.h"
#include "core\memoryallocatedobject.h"
#include "geometry3d\vertex.h"
#include "mathengine\vector3.h"
#include "spatialobject\coordinatesystem\spatialreference.h"
#include "spatialobject\geometry\curvering.h"
#include "globecontrol\globecontrol.h"
#include "GISDataType.h"

namespace EarthView
{
	namespace Xld
	{
		class CWaterConservancyDataEngine //: public EarthView::World::Core::CBaseObject
		{
			friend class CWaterConservancyManager;
		ev_private:

		/*	/// <summary>
			/// Ĭ�Ϲ��캯��
			/// </summary>
			/// <param name="pList">��ֵ��</param>
			WaterConservancyDataEngine(EarthView::World::Core::CNameValuePairList* pList);*/

		public:
			/// <summary>
			/// ����ʸ���ߴ���ˮ��߽�ĵ�����
			/// </summary>
			/// <param name="globecontrol">EV 5.0�ؼ�</param>
			/// <param name="layerName">ͼ������</param>
			/// <returns>����ĵ��б�</returns>
			static EarthView::World::Spatial::Math::VertexList* CreateWaterSurfaceBounds(EVString layerName);
			/// <summary>
			/// ����ʸ����Χ����ˮ����С��Ӿ��η�Χ
			/// </summary>
			/// <param name="globecontrol">EV 5.0�ؼ�</param>
			/// <returns>��С��Ӿ���</returns>
			static EarthView::World::Spatial::Geometry::CEnvelope* GetWaterSurfaceEnvelope();
			/// <summary>
			/// ��ˮ�µ���ģ��д�뱾�׻���
			/// </summary>
			/// <param name="fileName">�ļ���</param>
			/// <param name="materialName">��������</param>
			/// <param name="vertexVector">���㻺��</param>
			/// <param name="indexVector">��������</param>
			static EarthView::World::Spatial::Geometry::ISpatialReference* mpGlobalSR;
			/// <summary>
			/// ��ˮ�µ���ģ��д�뱾�׻���
			/// </summary>
			/// <param name="fileName">�ļ���</param>
			/// <param name="materialName">��������</param>
			/// <param name="vertexVector">���㻺��</param>
			/// <param name="indexVector">��������</param>
			static void ReadTerrainModelStencil(EarthView::World::Spatial::Math::VertexList* verLst);
			/// <summary>
			/// ����ˮ�µ���ģ��
			/// </summary>
			/// <param name="globecontrol">EV 5.0 �ؼ�</param>
			static void GenerateTerrainModelStencil();

			static EarthView::World::Spatial::Geometry::CPolygon* GetRiverRange();


			static void CreateStardardTerrain(_in EarthView::GISDataType::CGrdData * pData, _out EarthView::World::Geometry3D::CVertexVector* vertexVector, _out EarthView::World::Geometry3D::CIndexVector* indexVector);
			/// <summary>
			/// ��ˮ�µ���ģ���Զ����Ƶ���ʽд�뻺���ļ�
			/// </summary>
			/// <param name="fileName">�ļ���</param>
			/// <param name="materialName">��������</param>
			/// <param name="vertexVector">���㻺��</param>
			/// <param name="indexVector">��������</param>
			static void WriteTerrainCache(const EVString& fileName,const EVString& materialName,_in EarthView::World::Geometry3D::CVertexVector* vertexVector,_in EarthView::World::Geometry3D::CIndexVector* indexVector);

			/// <summary>
			/// ��ȡˮ�µ��λ����ļ�������
			/// </summary>
			/// <param name="fileName">�ļ���</param>
			/// <param name="materialName">��������</param>
			/// <param name="vertexVector">���㻺��</param>
			/// <param name="indexVector">��������</param>
			static void ReadTerrainCache(const EVString& fileName, _out EVString materialName, _out EarthView::World::Geometry3D::CVertexVector* vertexVector,_out EarthView::World::Geometry3D::CIndexVector* indexVector);
		
			struct CFloodPoint
			{
				bool IsFlooded;
				double Longi;
				double Lati;
				double Alit;
				int X;
				int Y;
				int Index;
			};
		};

		
	}
}

#endif
