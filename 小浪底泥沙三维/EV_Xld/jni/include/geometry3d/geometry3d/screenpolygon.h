#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOLYGON_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOLYGON_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"

#include "geometry3d/geometry3d/screengeometry.h"


namespace EarthView
{
	namespace World
	{

		namespace Spatial
		{
			namespace Geometry
			{
				class CPolygon;
			}
		}

		namespace Geometry3D
		{			
			class CMultiPolygon3DExtension;
			/// <summary>
			///��Ļ����
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenPolygon : public EarthView::World::Geometry3D::CScreenGeometry
			{
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CScreenPolygon(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="scenemanager">����������</param>
				/// <param name="type">������</param>
				/// <param name="estimatedCount">Ԥ������</param>
				/// <returns></returns>
				CScreenPolygon(EarthView::World::Graphic::CSceneManager* ref_scenemanager);
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="scenemanager">����������</param>
				/// <param name="type">������</param>
				/// <param name="estimatedCount">Ԥ������</param>
				/// <param name="texture">����ͼƬ��</param>
				/// <returns></returns>
				CScreenPolygon(EarthView::World::Graphic::CSceneManager* ref_scenemanager,EarthView::World::Core::DataStreamPtr& texture);
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenPolygon();

			public:	

				/// <summary>
				/// ��ʼ׷�Ӷ����,render֮����Ч
				/// </summary>
				/// <returns></returns>
				ev_void begin();
				/// <summary>
				/// ׷�Ӷ����
				/// </summary>
				/// <param name="color">��ɫ</param>
				/// <param name="polygon">�޲ο�ϵ�Ķ�ά��,������x��z���������ͺ����õ���Ļ��������һ��</param>
				/// <returns></returns>
				ev_void appendPolygon(const EarthView::World::Spatial::Geometry::CPolygon& polygon,const EarthView::World::Graphic::CColourValue& color);
				ev_void appendPolygon(const EarthView::World::Spatial::Geometry::CPolygon& polygon);
				/// <summary>
				/// ����׷�Ӷ����,��ʼ���ж���ηָ����buffer
				/// </summary>
				/// <returns></returns>
				ev_void end();

			protected:

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);

			private:
				/// <summary>
				/// ���ƹ��캯��
				/// </summary>
				/// <param name="obj">����</param>
				/// <returns></returns>
				CScreenPolygon(const CScreenPolygon& obj);

			private:

				EarthView::World::Graphic::CColourValue mCurrentColor;

				EarthView::World::Core::DataStreamPtr mpTextureStream;

				CMultiPolygon3DExtension* mpPolygonExtension;

				struct Color_Vert;

				ev_uint32 mCurrentVertexCount;
				ev_uint32 mCurrentIndexCount;
				list<list<Color_Vert> > mPolygons;
			};
		}
	}
}
#endif
