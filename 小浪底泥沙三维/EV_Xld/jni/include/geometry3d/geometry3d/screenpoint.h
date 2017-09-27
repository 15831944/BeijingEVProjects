#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOINT_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOINT_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"

#include "geometry3d/geometry3d/screengeometry.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// ��Ļ������
			/// <summary>
			enum  ScreenPointType
			{
				/// <summary>
				/// Բ��
				/// <summary>
				SPT_Circle = 0,
				/// <summary>
				/// ������
				/// <summary>
				SPT_Quad				
			};

			/// <summary>
			///��Ļ����
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenPoint : public EarthView::World::Geometry3D::CScreenGeometry
			{
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CScreenPoint(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="scenemanager">����������</param>
				/// <param name="type">������</param>
				/// <param name="estimatedCount">Ԥ������</param>
				/// <returns></returns>
				CScreenPoint(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ScreenPointType type,ev_uint32 estimatedCount);
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="scenemanager">����������</param>
				/// <param name="type">������</param>
				/// <param name="estimatedCount">Ԥ������</param>
				/// <param name="texture">����ͼƬ��</param>
				/// <returns></returns>
				CScreenPoint(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ScreenPointType type,ev_uint32 estimatedCount,EarthView::World::Core::DataStreamPtr& texture);
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenPoint();

			public:	

				/// <summary>
				/// ��ʼһ����ͬ�ĵ�,��Ⱦʱ�Կ���׷�ӵ�,begin��end֮��ֻ��ִ��appenPoint
				/// </summary>
				/// <param name="color">��ɫ</param>
				/// <param name="size">���(ֱ������λ�Ͳ��õ���������һ��)</param>
				/// <returns></returns>
				ev_void begin(const EarthView::World::Graphic::CColourValue& color,Real size);
				ev_void begin(const EarthView::World::Graphic::CColourValue& color);
				ev_void begin();
				/// <summary>
				/// ׷�ӵ�
				/// </summary>
				/// <param name="position">��Ļ����</param>
				/// <param name="color">��ɫ</param>
				/// <param name="size">���(ֱ������λ�Ͳ��õ���������һ��)</param>
				/// <returns></returns>
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color,Real size);
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color);
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position);
				/// <summary>
				/// ����һ����ͬ��
				/// </summary>
				/// <returns></returns>
				ev_void end();				

			protected:
				
				void initial(ev_uint32 pointCount);

				void writeCircleBuffer(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color,Real vw,Real vh,Real size,ev_bool onlyUpdateVertexBuffer);
				void writeQuadeBuffer(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color,Real vw,Real vh,Real size,ev_bool onlyUpdateVertexBuffer);

				void createMaterial(EarthView::World::Core::DataStreamPtr& texture);

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);
							
			private:
				/// <summary>
				/// ���ƹ��캯��
				/// </summary>
				/// <param name="obj">����</param>
				/// <returns></returns>
				CScreenPoint(const CScreenPoint& obj);
				
			private:

				ev_uint32 mMaxPointCount;//������
				ev_uint32 mCurrentPointCount;//��ǰ����

				ScreenPointType mPointType;
				EarthView::World::Graphic::CColourValue mCurrentColor;
				Real mCurrentSize;

				struct Color_Size_Point;
				list<list<Color_Size_Point> > mListPoints;

				list<Color_Size_Point> mTempPoints;
			};
		}
	}
}
#endif
