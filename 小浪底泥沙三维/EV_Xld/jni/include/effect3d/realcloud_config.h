#ifndef _REALCLOUDCONFIG_H
#define _REALCLOUDCONFIG_H
#include <vector>
#include <effect3d/effect3d_config.h>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
			}
			namespace Effect3D
			{
				class CRegionAtmosphere;
#define REALCLOUDRESOURCEGROUP "Caelum"

//��ͼͼƬ��С
#define PICSIZE			2000
//�������
#define MESHSEGMENTS	360
//ÿ�������ڻ��ֵ�������
#define MESHSPLITNUM	4
//��ͼ��С
#define MAPTILESIZE   6
//���ų�ʼ����
#define DEFAULTPOINTNUMBERS 8000
				
				//�Ĳ����ڵ�����
				enum CloudTreeType
				{
					//����
					CLOUDNW,
					//����
					CLOUDNE,
					//����
					CLOUDSW,
					//����
					CLOUDSE,
					//��
					CLOUDLEFT,
					//��
					CLOUDRIGHT
				};
				inline int getIndex()
				{
					static int index = 0;
					return index++;
				}
			}
		}
	}
}
#endif 