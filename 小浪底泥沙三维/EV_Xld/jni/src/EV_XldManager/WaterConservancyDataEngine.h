#ifndef WATERCONSERVANCYDATAENGINE_H_
#define WATERCONSERVANCYDATAENGINE_H_

#include "xld\xldmanager_cfg.h"
#include "core\memoryallocatedobject.h"
#include "geometry3d\vertex.h"

namespace EarthView
{
	namespace Xld
	{
		class CWaterConservancyDataEngine //: public EarthView::World::Core::CBaseObject
		{
		ev_private:

		/*	/// <summary>
			/// Ĭ�Ϲ��캯��
			/// </summary>
			/// <param name="pList">��ֵ��</param>
			WaterConservancyDataEngine(EarthView::World::Core::CNameValuePairList* pList);*/

		public:
			/// <summary>
			/// ��ˮ�µ���ģ��д�뱾�׻���
			/// </summary>
			/// <param name="fileName">�ļ���</param>
			/// <param name="materialName">��������</param>
			/// <param name="vertexVector">���㻺��</param>
			/// <param name="indexVector">��������</param>
			static void WrtiteTerrainModelStencil(vector<EarthView::World::Spatial::Math::CVector2*>* bounds);
			/// <summary>
			/// ����ˮ�µ���ģ��
			/// </summary>
			/// <param name="fileName">�ļ���</param>
			/// <param name="materialName">��������</param>
			/// <param name="vertexVector">���㻺��</param>
			/// <param name="indexVector">��������</param>
			static void GenerateTerrainModelStencil();
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
		};
	}
}

#endif
