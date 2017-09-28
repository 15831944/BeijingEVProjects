#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CSKYLINE_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CSKYLINE_H

#include "ianalysis3dtool.h"
#include "geometry3d/geometry3d/wideline.h"
#include "graphic/rendertargetlistener.h"
#include "vector"
#include "globecontrol/globecontrol.h"
#include "graphic/simplerenderable.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class ImageIndex
				{
				public:
					ImageIndex(){x=0;y=0;}
					ImageIndex(int tx,int ty){x=tx;y=ty;}
				public:
					int x;
					int y;
				};
				/// <summary>
				/// �������������
				/// </summary>
				enum Analysis3DLineQuality
				{
					A3DLQ_High,  // ��
					A3DLQ_Medium,   // ��
					A3DLQ_Common,   // ��ͨ
				};
				enum Analysis3dCameraType
				{
					A3DCamT_Global,//�����
					A3DCamT_Define,//�Զ������
				};
				//�����ʾ�������׵��
				class CameraPyramid :public EarthView::World::Graphic::CSimpleRenderable
				{
				public:
					CameraPyramid(ev_real32 bottomW,ev_real32 bottonH,ev_real32 height);
					~CameraPyramid();
					ev_void create();
					EarthView::World::Spatial::Math::CMatrix4 mModelMatrix;  
				protected:
				private:
					ev_real32 mBottomWidth; 
					ev_real32 mBottomHeight;
					ev_real32 mHeight;
				};
				class CDepthAccessor;
				class EV_ANALYSIS3D_DLL CDepthMap
				{
					friend class CDepthAccessor;
ev_private:
					CDepthMap(EarthView::World::Core::CNameValuePairList* pList);
				public:
					CDepthMap();
					~CDepthMap();
					/// <summary>
					///��ȡλ��(x,y)��Ӧ�����ֵ
					/// </summary>
					/// <param name="x">������</param>
					/// <param name="y">������</param>
					///<return>���ֵ</return>
					ev_real32 getDepthAt(int x,int y);
					/// <summary>
					///��ȡ��Ⱦ�����ͼʱʹ�õ������Ӧ����ͼͶӰ����
					/// </summary>
					///<return>��ͼͶӰ����</return>
					EarthView::World::Spatial::Math::CMatrix4 getViewProjMatrix();
					/// <summary>
					///��ȡ���ͼ���
					/// </summary>
					///<return>���</return>
					int getWidth();
					/// <summary>
					///��ȡ���ͼ�߶�
					/// </summary>
					///<return>�߶�</return>
					int getHeight();
				private:
					EarthView::World::Graphic::CPixelBox* mpDepthBox;
					EarthView::World::Spatial::Math::CMatrix4 mViewProjMatrix;
					EarthView::World::Graphic::CTexturePtr mpRttTexture;
				};
				///<summary>
				///��ȡ���ֵ
				///</summary>
				class EV_ANALYSIS3D_DLL CDepthAccessor:public EarthView::World::Graphic::CRenderTargetListener
				{					
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					CDepthAccessor(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="sceneMgr">����������</param>
					///<param name="globeControl">globeControl</param>
					CDepthAccessor(EarthView::World::Graphic::CSceneManager* sceneMgr,EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl);
					~CDepthAccessor();
					/// <summary>
					/// ��ȡ�Զ��������Ⱦ�����������ͼ
					/// </summary>
					/// <param name="camera">���</param>
					///<return>���ͼ</return>
					CDepthMap* getDepthMap(EarthView::World::Graphic::CCamera *camera);
					/// <summary>
					/// ��ȡ�������ǰ��Ⱦ����Ļ�����ͼ
					/// </summary>
					/// <param name="camera">���</param>
					///<return>���ͼ</return>
					CDepthMap* getDepthMap();
					/// <summary>
					/// ������Ļ�ϵ�(x,y)��Ӧ����������
					/// </summary>
					/// <param name="screenX">������ֵ</param>
					///<parem name="screenY">������ֵ</param>
					///<return>���ͼ</return>
					EarthView::World::Spatial::Math::CVector3 calculateWorldPos(ev_real64 screenX,ev_real64 screenY);
				protected:
					/// <summary>
					/// ����ȾĿ�걻��Ⱦ֮ǰ����
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
					/// <summary>
					/// ����ȾĿ�걻��Ⱦ֮�����
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
					/// <summary>
					/// ����������
					/// </summary>
					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					EarthView::World::Spatial3D::Controls::CGlobeControl *mGlobeControl;
					ev_void createRsGroup();
					ev_void destroyRsGroup();
				
				private:
					EVString mRSName;
				};
				/// <summary>
				/// ����߷�����
				/// ����������߷��������в���
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DSkyLine : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					CAnalysis3DSkyLine(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="ref_pGlobeControl">����ؼ�</param>
					CAnalysis3DSkyLine(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="ref_pSceneMgr">����������</param>
					CAnalysis3DSkyLine(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="ref_pTerrainLayer"> ����ͼ���ͼ����CTerrainLayer��CLocalTerrainLayer��CTerrainGroupLayer</param>
					CAnalysis3DSkyLine(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DSkyLine();
					/// <summary>
					/// ��ʹ��Tool
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();
					/// <summary>
					/// ����������Ⱦ���󼰽��
					/// </summary>
					/// <param name=""></param>
					virtual ev_void reset_impl();
					/// <summary>
					/// ��ʼ��
					/// </summary>
					/// <param name=""></param>
					virtual ev_void initialize_impl();
					/// <summary>
					/// ����������ĵ��ýӿ�
					/// </summary>
					virtual ev_void renderAnalysis3D();
					/// <summary>
					/// ���֡����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <summary>
					/// ��굯���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns>�Ƿ�����򸸿ؼ����͸��¼�</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// ���˫���¼�����
					/// </summary>
					/// <returns>�Ƿ�����򸸿ؼ����͸��¼�</returns>
					virtual ev_bool onDoubleClick(); 
					/// <summary>
					/// ��ȡ�۲��λ��(��γ�Ⱥ͸߳�)
					/// </summary>
					/// <returns>λ������</returns>
					EarthView::World::Spatial::Math::CVector3 getViewPoint()const;
					/// <summary>
					/// ��ȡ�۲�������߶�
					/// </summary>
					/// <returns>�߶�ֵ</returns>
					ev_real64 getViewPointHei()const;
					/// <summary>
					/// ��ȡ���ˮƽ������ת��
					/// </summary>
					/// <returns>�Ƕ�ֵ</returns>
					ev_real64 getCameraRotation() const;
					/// <summary>
					/// ��ȡ���������
					/// </summary>
					/// <returns>�Ƕ�ֵ</returns>
					ev_real64 getCameraPitch()const;
					/// <summary>
					/// ��ȡ�������(����������Զ������)
					/// </summary>
					/// <returns>����</returns>
					Analysis3dCameraType getCameraType();
					/// <summary>
					/// ��ȡ���������
					/// </summary>
					/// <returns>����</returns>
					Analysis3DLineQuality getLineQuality()const;
					/// <summary>
					/// ��ȡ�������ɫ
					/// </summary>
					/// <returns>��ɫֵ</returns>
					EarthView::World::Graphic::CColourValue getLineColor()const;
					/// <summary>
					/// ���ù۲��λ��
					/// </summary>
					///<param name="point">���ȡ�ά�ȡ��߳�</param>
					void setViewPoint(EarthView::World::Spatial::Math::CVector3& point);
					//// <summary>
					/// ���ù۲����ظ߶�
					/// </summary>
					///<param name="height">��ظ߶�</param>
					void setViewPointHei(ev_real64 height);
					/// <summary>
					/// �������ˮƽ������ת��
					/// </summary>
					///<param name="cameraRotaion">�Ƕ�ֵ</param>
					void setCameraRotation(ev_real64 cameraRotation);
					/// <summary>
					/// �������������
					/// </summary>
					///<param name="cameraPitch">�Ƕ�ֵ</param>
					void setCameraPitch(ev_real64 cameraPitch);
					/// <summary>
					/// �����������������(�ߡ��С���)
					/// </summary>
					///<param name="cameraRotaion">�Ƕ�ֵ</param>
					void setLineQuality(Analysis3DLineQuality lienQuality);
					/// <summary>
					/// ��������������(��������Զ������)
					/// </summary>
					///<param name="cameraRotaion">�Ƕ�ֵ</param>
					void setCameraType(Analysis3dCameraType camType);
					/// <summary>
					/// �����������ɫ
					/// </summary>
					///<param name="cameraRotaion">��ɫֵ</param>
					void setLineColor(EarthView::World::Graphic::CColourValue lineColor);

				protected:
					//��ʼ��
					ev_void skylineInit();
					//����һЩ��Ļ�ϵĹؼ������������
					ev_bool calculatePos(int screenPosX,int screenPosY);
					//���������λ�ü��������������������ڵ�
					ev_void createCameraNode();
					//��ȡ���ͼ
					ev_void getDepthMap();
					//��Ⱦ��ʾ�������׵��
					ev_void renderPyramid();
					//��Ⱦ�����
					ev_void renderSkyline();
					/// <summary>
					/// ������������������ȾЧ�������Խ���Ⱦ��ӵ���λ��
					/// �����Ҫ����潻�����ڽ��洦��дanalysis3dlistener����
					/// </summary>
					virtual ev_void run();
					/// <summary>
					/// �ͷſ���Ⱦ����
					/// </summary>
					/// <param name="isPart">�Ƿ���ͷű��η����еĶ���</param>
					/// <param name="isAll">�Ƿ�ȫ���ͷ�</param>
					virtual ev_void releaseManualObjects(ev_bool isPart,ev_bool isAll);
					/// <summary>
					/// ��Ⱦ�����Ľ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void addFrameListener(); 
					ev_void removeFrameListener();
					
				private:
					C_DISABLE_COPY(CAnalysis3DSkyLine);

					/// <summary>
					/// �۲��(��γ�Ⱥ͸߳�)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mViewPoint;

					ev_real64 mViewPointHei;
					///�����λ��
					ev_real64 mCameraRotation;
					///���������
					ev_real64 mCameraPitch;
					///���������
					Analysis3DLineQuality mLineQuality;
					/// <summary>
					/// Ŀ������ɫ
					/// </summary>
					EarthView::World::Graphic::CColourValue mLineColor;
					Analysis3dCameraType  mCameraType;
					
					///��Ⱦ������������������ϵĵ�
					std::vector<ImageIndex> mLinePoints2D;
					EarthView::World::Spatial::Math::VertexList mLinePoints3D;
					/// <summary>
					/// ��Ⱦ��
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpSkyLine;
					CDepthAccessor *mDepthAccessor;
					EarthView::World::Spatial::Math::CVector2 mselectScreenPos;
					CameraPyramid *mPyramid;
					//EarthView::World::Graphic::CCamera *mCamera;
					CDepthMap *mpDepthMap;
					EarthView::World::Spatial::Math::CVector3 mCameraPos;
					EarthView::World::Spatial::Math::CVector3 mCameraDirPos;
					EarthView::World::Graphic::CSceneNode* mCameraNode;
				};
			}
		}
	}
}

#endif