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
#include "graphic\scenenode.h"

namespace EarthView
{
	namespace Xld
	{
		class CWaterConservancyDataEngine //: public EarthView::World::Core::CBaseObject
		{
			friend class CWaterConservancyManager;
		ev_private:

		/*	/// <summary>
			/// 默认构造函数
			/// </summary>
			/// <param name="pList">键值对</param>
			WaterConservancyDataEngine(EarthView::World::Core::CNameValuePairList* pList);*/

		public:
			/// <summary>
			/// 依据矢量线创建水面边界的点链表
			/// </summary>
			/// <param name="globecontrol">EV 5.0控件</param>
			/// <param name="layerName">图层名称</param>
			/// <returns>有序的点列表</returns>
			static EarthView::World::Spatial::Math::VertexList* CreateProjectBoundPoints(EVString layerName);

			/// <summary>
			/// 依据矢量范围创建水面最小外接矩形范围
			/// </summary>
			/// <param name="globecontrol">EV 5.0控件</param>
			/// <returns>最小外接矩形</returns>
			static EarthView::World::Spatial::Geometry::CEnvelope* CreateProjectEnvelope();

			/// <summary>
			/// 将水下地形模板写入本底缓存
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static void ReadProjectModelStencil(const EVString& fileName, _out EVString materialName, _out EarthView::World::Geometry3D::CVertexVector* vertexVector, _out EarthView::World::Geometry3D::CIndexVector* indexVector);

			static EarthView::World::Spatial::Geometry::CPolygon* CreateProjectRange();

			static void WriteProjectModelStencil(ev_real64 longiResolution,ev_real64 latiResolution);
			/// <summary>
			/// 将自定义渲染对象以二进制的形式写入缓存文件
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static void WriteRenderObjectCache(const EVString& fileName,const EVString& materialName,_in EarthView::World::Geometry3D::CVertexVector* vertexVector,_in EarthView::World::Geometry3D::CIndexVector* indexVector);

			/// <summary>
			/// 读取水下地形缓存文件的内容
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
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
