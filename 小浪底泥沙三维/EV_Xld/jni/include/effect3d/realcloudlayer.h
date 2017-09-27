#ifndef _REALCLOUDLAYER_H
#define _REALCLOUDLAYER_H
#include "effect3d/realcloud_config.h"
#include "effect3d/cloud_definitions.h"
#include "core/memoryallocatedobject.h"
#include <graphic/image.h>
#include "core/thread.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneManager;
			class CCamera;
		}
		namespace Spatial
		{
			namespace Effect3D
			{
				class CRealCloudLayer;
				class CRealCloudShell;
				class CRealCloudQuadMap;				

				//��ͼ�����߳�
				class CloudMapWorkFunction : public EarthView::World::Core::CThreadFunc
				{
				public:
					CloudMapWorkFunction(CRealCloudLayer *cloudLayer);
					CloudMapWorkFunction(){};
					~CloudMapWorkFunction(){};
					ev_void run();
					ev_void setImage(const EarthView::World::Graphic::CImage& img);
					ev_void setType(int flag);

				private:
					int mFlag;
					CRealCloudLayer								*mCloudLayer;
					EarthView::World::Graphic::CImage mImg;
				};

				class EV_EFFECT3D_DLL CRealCloudLayer :
					public EarthView::World::Core::CBaseObject
				{
ev_private:
					CRealCloudLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					CRealCloudLayer(EarthView::World::Graphic::CSceneManager *sce,EarthView::World::Spatial::Effect3D::EVCloudType type);
					~CRealCloudLayer(void);

					void createRealCloud(CRegionAtmosphere *region);
					void destroyRealCloud(CRegionAtmosphere *region);

					void create();
					void destroy();

					CRealCloudLayer* copy();

					void setRealCloudMap(const EarthView::World::Graphic::CImage& img);
					void setEnable(bool enable);
					void setVisible(bool visible);
					void setCloudFlow(bool flowable);
					void setRealCloudHeight(float height);
					void setRealCloudAlpha(float alpha);
					void setRegionCloudMapAlpha(const EVString& name,ev_real32 alpha);
					EarthView::World::Spatial::Effect3D::EVCloudType getCloudType() {return mCloudType;}

					/// <summary>
					/// ��Ӿֲ���ͼ
					/// </summary>
					/// <param name="name">�ֲ��Ƶ�����</param>
					/// <param name="img">ͼƬ</param>
					/// <param name="north">�ֲ�����ı��߽硣(��Ϊ��λ)</param>
					/// <param name="west">�ֲ���������߽硣(��Ϊ��λ)</param>
					/// <param name="south">�ֲ�������ϱ߽硣(��Ϊ��λ)</param>
					/// <param name="east">�ֲ�����Ķ��߽硣(��Ϊ��λ)</param>
					/// <param name="height">�ֲ�����Ķ��߽硣(��Ϊ��)</param>
					/// <returns></returns>
					void addRegionCloudMap(_in const EVString& name,_in const EarthView::World::Graphic::CImage& img,_in ev_real64 north,_in ev_real64 west,_in ev_real64 south,_in ev_real64 east,_in ev_real64 height);
					/// <summary>
					/// �Ƴ��ֲ���ͼ
					/// </summary>
					/// <param name="name">�ֲ��Ƶ�����</param>
					/// <returns></returns>
					void removeRegionCloudMap(_in const EVString& name);
					/// <summary>
					/// ���þֲ���ͼ�Ŀɼ���
					/// </summary>
					/// <param name="name">�ֲ��Ƶ�����</param>
					/// <param name="visible">�ɼ���</param>
					/// <returns></returns>
					void setRegionCloudMapVisible(_in const EVString& name,_in bool visible);
					/// <summary>
					/// ���þֲ���ͼ����ת��Ϣ
				    /// </summary>
					/// <param name="name">�ֲ��Ƶ�����</param>
					/// <param name="centerLat">���ĵ����γ��</param>
					/// <param name="centerLon">���ĵ���ľ���</param>
					/// <param name="rotationAngleVelocity">��ת�Ľ��ٶȣ��Զ�Ϊ��λ</param>
					/// <param name="rotationRegionRadius">��ת��Χ�İ뾶������Ϊ��λ</param>
					/// <returns></returns>
					void setRegionCloudRotationInfomation(const EVString& name,ev_real64 centerLat,ev_real64 centerLon,ev_real64 rotationAngleVelocity,ev_real64 rotationRegionRadius);

					/// <summary>
					/// ������ת�ֲ���
					/// </summary>
					/// <param name="name">�ֲ��Ƶ�����</param>
					/// <returns></returns>
					void enableRotateRegionCloud(const EVString& name);
					/// <summary>
					/// ��ֹת���ֲ���
					/// </summary>
					/// <param name="name">�ֲ��Ƶ�����</param>
					/// <returns></returns>
					void disableRotateRegionCloud(const EVString& name);
					/// <summary>
					///��ȡ�ֲ���ͼ�Ŀɼ���
					/// </summary>
					/// <param name="name">�ֲ��Ƶ�����</param>
					/// <returns></returns>
					ev_bool getRegionCloudMapVisible(_in const EVString& name);

					/// <summary>
					///���÷���
					/// </summary>
					/// <param name="speed">����</param>
					/// <returns></returns>
					ev_void setWindSpeed(_in const EarthView::World::Spatial::Math::CVector3& speed);

					/// <summary>
					/// ��������Ƶ���ɫ��ͼƬһ��
					/// </summary>
					/// <param name="ev_bool">�Ƿ�һ��</param>
					/// <returns></returns>
					ev_void enableGetCloudColorFromImage(_in ev_bool enable);

					void update(EarthView::World::Graphic::CCamera *cam, double time);

				protected:
					void createCloudShell();
					void createCloudQuadMap();
				private:
					CRealCloudQuadMap							*mCloudQuadMap;
					EarthView::World::Graphic::CSceneManager	*mSceMgr;

					bool										 mVisible;
					EarthView::World::Spatial::Effect3D::EVCloudType mCloudType;
					//EarthView::World::Core::CCoreTime mDateTime;
					double mDateTime;

					/// �л���ͼ�߳�
					EarthView::World::Core::CThread mThread;
					EarthView::World::Spatial::Effect3D::CloudMapWorkFunction *mThreadFunc;

					C_DISABLE_COPY(CRealCloudLayer);

ev_private:
					EV_MUTEX(mInitMutex);
					EV_THREAD_SYNCHRONISER(mInitSync);
					CRealCloudShell								*mCloudShell;
				};
			}
		}
	}
}

#endif
