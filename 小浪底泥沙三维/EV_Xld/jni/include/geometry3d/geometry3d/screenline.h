#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENLINE_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENLINE_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"

#include "geometry3d/geometry3d/screengeometry.h"
#include "geometry3d/geometry3d/wideline.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{			
			/// <summary>
			///��Ļ����
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenLine : public EarthView::World::Geometry3D::CScreenGeometry
			{
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CScreenLine(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="estimatedVertexCount">Ԥ���ĵ���(��Ҫ��ǳ���׼)</param>
				/// <param name="isWideline">�Ƿ��ǿ��ߣ���Ϊ����</param>				
				/// <returns></returns>
				CScreenLine(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ev_uint32 estimatedCount, ev_bool isWideline);

				/// <summary>
				/// ���캯��,����������
				/// </summary>
				/// <param name="estimatedVertexCount">Ԥ���ĵ���(��Ҫ��ǳ���׼)</param>				
				/// <param name="texture">����</param>
				/// <returns></returns>
				CScreenLine(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ev_uint32 estimatedCount, EarthView::World::Core::DataStreamPtr& texture);

				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenLine();

			public:	

				/// <summary>
				/// ��ʼһ���ֶ���
				/// ����ȾʱҲ���Ե��ô˺���
				/// </summary>
				/// <param name="colour">�ߵ���ɫ</param>	
				/// <param name="width">���ߵĿ��,��λ��Ҫ���õ���������һ��,Ϊ����ʱ��Ч</param>
				/// <returns></returns>
				ev_bool begin(const EarthView::World::Graphic::CColourValue& colour,Real width);
				ev_bool begin(const EarthView::World::Graphic::CColourValue& colour);
				ev_bool begin();

				/// <summary>
				/// ����ǰ�ֶ�����׷�ӵ�
				/// ����ȾʱҲ���Ե��ô˺���(��������Ⱦʱ׷�ӵ�)
				/// </summary>
				/// <param name="position">������</param>
				/// <param name="colour">�ߵ���ɫ(�˵���ǰһ��֮����߶ε���ɫ)</param>
				/// <returns></returns>
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& colour);
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position);	
				/// <summary>
				/// ����һ���ֶ���(�´ε���beginSegment�������һ����)
				/// ����ȾʱҲ���Ե��ô˺���
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool end();

			protected:

				void initial(ev_uint32 estimatedCount);

				void createMaterial(EarthView::World::Core::DataStreamPtr& texture);

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);

				void writeIndexData(ev_uint32 beginIndex);

			private:
				/// <summary>
				/// ���ƹ��캯��
				/// </summary>
				/// <param name="obj">����</param>
				/// <returns></returns>
				CScreenLine(const CScreenLine& obj);

			private:

				ev_uint32 mMaxPointCount;//������
				ev_uint32 mCurrentPointCount;//��ǰ����
				ev_uint32 mPointCountOnCurrentSegment; //��ǰ�ֶ����ϵĶ�����Ŀ
				EarthView::World::Spatial::Math::CVector2 mLastPoint;//ǰһ����
				ev_uint32  mPointIndexInBuffer;		//�����ڶ���buffer�������
				ev_uint32  mIndexCountInBuffer;		//�����ڶ���buffer�������

				ev_bool mbWideline;
				Real mCurrentWidth;
				Real mSizeRadio;//�����߱�
				Real mCurrentSegmentAddupLength;

				struct Color_Point;
				struct Width_ColorPoints;
				list<Width_ColorPoints> mWidthPoints;

				list<Color_Point> mTempPoints;

				EarthView::World::Graphic::CColourValue mCurrentColor;
			};
		}
	}
}
#endif
