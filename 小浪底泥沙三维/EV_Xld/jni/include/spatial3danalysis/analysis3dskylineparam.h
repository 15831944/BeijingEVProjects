#ifndef _ANALYSIS3DSKYLINEPARAM_H_
#define _ANALYSIS3DSKYLINEPARAM_H_

#include "analysis3d_config.h"
#include "core/stringinterface.h"
#include "mathengine/vector3.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class EV_ANALYSIS3D_DLL CAnalysis3DSkyLineParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CAnalysis3DSkyLineParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  ���캯��
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DSkyLineParam(void* parent);

					/// <summary>
					///  ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					~CAnalysis3DSkyLineParam();
					/// <summary>
					///  ����
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					/// <summary>
					///  ����
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setViewPoint(EarthView::World::Spatial::Math::CVector3& cen);
					/// <summary>
					///  ��ȡ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Math::CVector3 getViewPoint();
ev_private:

					class  CCmdViewPointLon : public EarthView::World::Core::CParamCommand //�۲�㾭��
					{
					public:
						CCmdViewPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointLat : public EarthView::World::Core::CParamCommand //�۲��γ��
					{
					public:
						CCmdViewPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointAlt : public EarthView::World::Core::CParamCommand //�۲��߳�
					{
					public:
						CCmdViewPointAlt();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdViewPointHei : public EarthView::World::Core::CParamCommand //�۲����ظ߶�
					{
					public:
						CCmdViewPointHei();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class CCmdCameraType :public EarthView::World::Core::CParamCommand//�������
					{
					public:
						CCmdCameraType();
						EVString doGet(const void *target) const;
						void doSet(void *target,const EVString &val);
					};

					class CCmdCameraRotation :public EarthView::World::Core::CParamCommand //�����λ��
					{
					public :
						CCmdCameraRotation();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class CCmdCameraPitch : public EarthView::World::Core::CParamCommand //���������
					{
					public:
						CCmdCameraPitch();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class CCmdLineQuality : public EarthView::World::Core::CParamCommand // ���������
					{
					public:
						CCmdLineQuality();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);

					};
					class CCmdLineColor : public EarthView::World::Core::CParamCommand //�������ɫ
					{
					public:
						CCmdLineColor();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					static CCmdViewPointLon msViewPointLonCmd;
					static CCmdViewPointLat msViewPointLatCmd;
					static CCmdViewPointAlt msViewPointAltCmd;
					static CCmdViewPointHei msViewPointHeiCmd;
					static CCmdCameraType msCameraType;
					static CCmdCameraRotation msCameraRotationCmd;
					static CCmdCameraPitch msCameraPitchCmd;
					static CCmdLineQuality msLineQualityCmd;
					static CCmdLineColor msLineColorCmd;



				private:
					ev_void initialize();
					EarthView::World::Spatial::Math::CVector3 mViewPoint;
				};
			}
		}
	}
}

#endif