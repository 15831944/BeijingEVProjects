#ifndef TERRAINRENDERABLE_H_
#define TERRAINRENDERABLE_H_

#include "graphic/renderable.h"
#include "graphic/framelistener.h"
#include "graphic/camera.h"
#include "globecontrol/globecontrol.h"
#include "spatial3dengine/globecamera.h"
#include "geometry3d/vertex.h"
#include "TerrainMovable.h"

using namespace EarthView::World::Graphic;
using namespace EarthView::World::Spatial3D;
using namespace EarthView::World::Spatial3D::Controls;
using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Geometry3D;

namespace EarthView
{
	namespace Xld
	{
		namespace RenderableObject
		{
			class CTerrainRenderable :
				public EarthView::World::Graphic::CRenderable
			{
				friend class CTerrainMovable;
			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="name">����</param>
				/// <param name="parent">������</param>
				CTerrainRenderable(const EVString& name, CTerrainMovable* parent);

				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				~CTerrainRenderable();

				/// <summary>
				/// �����Ⱦ�����ת������
				/// </summary>
				/// <param name="xform"></param>
				virtual void getWorldTransforms(CMatrix4 *xform) const;

				/// <summary>
				/// ��ȡ����
				/// </summary>
				/// <param name=""></param>
				/// <returns>����</returns>
				virtual const CMaterialPtr& getMaterial() const;

				/// <summary>
				/// ��ȡ�۲����
				/// </summary>
				/// <param name="cam">���</param>
				/// <returns>�۲����</returns>
				virtual Real getSquaredViewDepth(const CCamera* cam) const;

				/// <summary>
				/// ��ȡ��Ⱦ����
				/// </summary>
				/// <param name="op">��Ⱦ����</param>
				void getRenderOperation(_inout CRenderOperation &op);

				/// <summary>
				/// ��ȡ����
				/// </summary>
				/// <param name=""></param>
				/// <returns>�����б�</returns>
				const LightList& getLights(void) const;

				/// <summary>
				/// ��Ⱦ��ʼʱ����֪ͨ���¼�
				/// </summary>
				/// <param name="sm">��Ⱦ����</param>
				/// <param name="rsys">��Ⱦϵͳ</param>
				/// <returns>����Զ�ִ����Ⱦ���̷���true,�ֶ�ִ�з���false</returns>
				virtual ev_bool preRender(CSceneManager *sm, CRenderSystem *rsys);

				/// <summary>
				/// ��Ⱦ���ʱ����֪ͨ���¼�
				/// </summary>
				/// <param name="sm">��Ⱦ����</param>
				/// <param name="rsys">��Ⱦϵͳ</param>
				virtual void postRender(CSceneManager *sm, CRenderSystem *rsys);


				/// <summary>
				/// ���ò���
				/// </summary>
				/// <param name="matName">��������</param>
				void setMaterial(const EVString& matName);

				/// <summary>
				/// ��ȡ��Ⱦ����
				/// </summary>
				/// <param name=""></param>
				/// <returns>��Ⱦ����</returns>
				CRenderOperation* getRenderOperation();

			protected:

				/// <summary>
				/// ����
				/// </summary>
				ev_string mName;

				/// <summary>
				/// ģ��λ��
				/// </summary>
				CVector3 mModelPosition;

				/// <summary>
				/// ͶӰ����
				/// </summary>
				CMatrix4 mProjM;

				/// <summary>
				/// ��������
				/// </summary>
				EVString mMaterialName;

				/// <summary>
				/// ��������
				/// </summary>
				EVString mGroupName;

				/// <summary>
				/// ����
				/// </summary>
				mutable CMaterialPtr mMaterial;

				/// <summary>
				/// ��Ⱦ����
				/// </summary>
				CRenderOperation mRenderOp;

				/// <summary>
				/// ������
				/// </summary>
				CTerrainMovable* mpParent;
			};
		}
	}
}

#endif

