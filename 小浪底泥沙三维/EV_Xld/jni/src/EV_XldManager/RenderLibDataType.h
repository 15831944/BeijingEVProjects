#ifndef RENDERLIBDATATYPE_H_
#define RENDERLIBDATATYPE_H_

namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			/// <summary>
			/// ��ö������ָʾ���ɵ�״̬
			/// </summary>
			enum CMousePickState
			{
				/// <summary>
				/// ׼���ɵ�һ����
				/// </summary>
				ToFirst = 1,
				/// <summary>
				/// ׼���ɵڶ�����
				/// </summary>
				ToSecond = 2,
				/// <summary>
				/// ׼���ɵ�������
				/// </summary>
				ToThird = 3,
				/// <summary>
				/// �����ɵ���
				/// </summary>
				Picking = 4,
				/// <summary>
				/// �ɵ����
				/// </summary>
				Over = 5,
			};

			enum CMoveLineType
			{
				/// <summary>
				/// ֱ����
				/// </summary>
				Line,
				/// <summary>
				/// Բ��
				/// </summary>
				Circle,
				/// <summary>
				/// ģ�����㣬����ֱ��
				/// </summary>
				StraightLine,
				/// <summary>
				/// ����
				/// </summary>
				Rectangle,
				/// <summary>
				/// �����
				/// </summary>
				Polygon
			};
		}
	}
}
#endif
