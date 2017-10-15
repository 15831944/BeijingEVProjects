#ifndef TERRAINRMOVABLE_H_
#define TERRAINRMOVABLE_H_

#include "graphic/movableobject.h"
#include "globecontrol/globecontrol.h"
#include "mathengine/vector3.h"
#include "mathengine/axisalignedbox.h"
#include "CustomRenderable.h"

using namespace EarthView::World::Graphic;
using namespace EarthView::World::Spatial::Math;
namespace EarthView 
{
	namespace Xld
	{
		namespace RenderableObject 
		{
			class CCustomMovable :
				public CMovableObject
			{
				friend class CCustomRenderable;
			public:

				EVString TerrainName;

				/// <summary>
				/// ���캯��
				/// </summary>
				CCustomMovable(EVString terrainName, EarthView::World::Spatial3D::Controls::CGlobeControl* control);

				/// <summary>
				/// ��������
				/// </summary>
				~CCustomMovable();

				/// <summary>
				/// ͨ����ǰ�����
				/// </summary>
				/// <param name="cam">��ǰ�����</param>
				virtual void _notifyCurrentCamera(CCamera* cam);

				/// <summary>
				/// ������Ⱦ����
				/// </summary>
				/// <param name="queue">��Ⱦ����</param>
				virtual void _updateRenderQueue(CRenderQueue* queue);

				/// <summary>
				/// ������Ⱦ����
				/// </summary>
				/// <param name="visitor">������</param>
				/// <param name="debugRenderables">�Ƿ���Կ���Ⱦ������</param>
				virtual void visitRenderables(CRenderable::CVisitor* visitor, ev_bool debugRenderables);

				/// <summary>
				/// ������Ⱦ����
				/// </summary>
				/// <param name="visitor">������</param>
				virtual void visitRenderables(CRenderable::CVisitor* visitor);

				/// <summary>
				/// ��ȡ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns>���ƶ�������</returns>
				virtual EVString getMovableType() const;

				/// <summary>
				/// ��ȡ��Χ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>��Χ��</returns>
			    inline const CAxisAlignedBox& getBoundingBox(void) const
				{
					return this->mBox;
				};

				/// <summary>
				/// ��ȡ��Χ�а뾶
				/// </summary>
				/// <param name=""></param>
				/// <returns>��Χ�а뾶</returns>
				inline Real getBoundingRadius() const
				{
					return mRadius;
				};

				/// <summary>
				/// ��ȡ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns>��������</returns>
				EVString getMaterial() const;

				/// <summary>
				/// �����߿�Ķ�����������棬��д������
				/// </summary>
				/// <param name="vertexVector">���㼯��</param>
				/// <param name="indexVector">��������</param>
				void buildSurfaceBuffer(const EarthView::World::Geometry3D::CVertexVector& vertexVector, const EarthView::World::Geometry3D::CIndexVector& indexVector);

				/// <summary>
				/// ���ò���
				/// </summary>
				/// <param name="matName">��������</param>
				void setSurfaceMaterial(const EVString& matName);

			protected:

				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;

				/// <summary>
				/// ����������
				/// </summary>
				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				/// <summary>
				/// �װ����
				/// </summary>
				CCustomRenderable* mpTestSurfaceRenderable;

				/// <summary>
				/// ��Ӧģ�Ͷ���λ��
				/// </summary>
				EarthView::World::Spatial::Math::CVector3 mModelPosition;

				/// <summary>
				/// ��ǰ���
				/// </summary>
				CCamera *mCurrentCamera;

				/// <summary>
				/// �����Χ��
				/// </summary>
				CAxisAlignedBox mBox;

				/// <summary>
				/// �����Χ�а뾶
				/// </summary>
				Real mRadius;

				/// <summary>
				/// ͶӰ�����Ƿ�ı�
				/// </summary>
				ev_bool mPrjMatrixChanged;

				/// <summary>
				/// ��һ�μ�������Ƿ����
				/// </summary>
				ev_bool mIsComputedTransDone;
			};
			
		}
	}
}
#endif
