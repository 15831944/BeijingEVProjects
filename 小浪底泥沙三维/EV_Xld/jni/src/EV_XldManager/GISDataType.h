
#ifndef GISDATATYPE_H_
#define GISDATATYPE_H_

#include "mathengine/vector3.h"
namespace EarthView
{
	namespace GISDataType 
	{
		class CGrdData
		{
		ev_private:

		/*	/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			CGrdData(EarthView::World::Core::CNameValuePairList* pList);*/

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			ev_real64 mNoDataValue;

		public:

			/// <summary>
			/// Ĭ�Ϲ��캯��
			/// </summary>
			inline CGrdData()
			{
				ZValues = NULL;
				MaxX = -1;
				MinX = -1;
				MaxY = -1;
				MinY = -1;
				MaxZ = -9999;
				MinZ = -9999;
				RowCount = 0;
				ColumnCount = 0;
				FileName = "";
				XInterval = 0;
				YInterval = 0;
				IsValid = false;
				Head1 = "";
				mNoDataValue = 1.70141e+038;
			}

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			~CGrdData();

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			EVString Head1;
			
			/// <summary>
			/// �洢Zֵ�Ķ�ά����
			/// </summary>
			ev_real64** ZValues;

			/// <summary>
			/// ���Xֵ
			/// </summary>
			ev_real64 MaxX;

			/// <summary>
			/// ���Yֵ
			/// </summary>
			ev_real64 MaxY;

			/// <summary>
			/// ���Zֵ
			/// </summary>
			ev_real64 MaxZ;

			/// <summary>
			/// ��СXֵ
			/// </summary>
			ev_real64 MinX;

			/// <summary>
			/// ��СYֵ
			/// </summary>
			ev_real64 MinY;

			/// <summary>
			/// ��СZֵ
			/// </summary>
			ev_real64 MinZ;

			/// <summary>
			/// ����
			/// </summary>
			ev_uint64 RowCount;

			/// <summary>
			/// ����
			/// </summary>
			ev_uint64 ColumnCount;

			/// <summary>
			/// x���
			/// </summary>
			ev_real64 XInterval;

			/// <summary>
			/// y���
			/// </summary>
			ev_real64 YInterval;

			/// <summary>
			/// grd�ļ����ļ���(����·��)
			/// </summary>
			EVString FileName;

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			ev_bool IsValid;

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			ev_real64 GetXPix();

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			ev_real64 GetYPix();

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			void SetGrdNoDataValue(const ev_real64 noDataValue);

			/// <summary>
			/// ���ļ��Ƿ���Ч
			/// </summary>
			ev_real64 GetGrdNoDataValue();

			/// <summary>
			/// ����һ��grd�ļ�
			/// </summary>
			static CGrdData* CopyFrom(CGrdData* srcData,bool isWithZValues);

		};

		/*class CGrdDataSet : public EarthView::World::Core::CBaseObject
		{
		ev_private:
			
			typedef vector<EarthView::GISDataType::CGrdData> InternalList;
			typedef vector<EarthView::GISDataType::CGrdData>::iterator iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::const_iterator const_iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::reverse_iterator reverse_iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::const_reverse_iterator const_reverse_iterator;
			typedef vector<EarthView::GISDataType::CGrdData>::reference reference;
			typedef vector<EarthView::GISDataType::CGrdData>::const_reference const_reference;
			typedef vector<EarthView::GISDataType::CGrdData>::value_type value_type;

			RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

		ev_private:
			/// <summary>
			/// ���캯��
			/// </summary>
			/// <param name="pList">���캯��������ֵ�Ա�</param>
			CGrdDataSet(EarthView::World::Core::CNameValuePairList *pList);

		public:
			CGrdDataSet();

			~CGrdDataSet();

			/// <summary>
			/// ������������Ԫ��
			/// </summary>
			/// <param name="data">Ԫ��ֵ</param>
			void push_back(_in EarthView::GISDataType::CGrdData const &data);

			/// <summary>
			/// ɾ���������Ԫ��
			/// </summary>
			void pop_back();

			/// <summary>
			/// �����м�λ�ò���Ԫ��
			/// </summary>
			/// <param name="pos">λ��</param>
			/// <param name="data">Ԫ��ֵ</param>
			void insert(_in ev_uint32 pos, _in EarthView::GISDataType::CGrdData const &data);

			/// <summary>
			/// ɾ�������м�λ��Ԫ��
			/// </summary>
			/// <param name="pos">λ��</param>
			void remove(_in ev_size_t pos);

			/// <summary>
			/// ���������Ƿ�Ϊ��
			/// </summary>
			/// <returns>����Ϊ�շ���true������false</returns>
			ev_bool empty() const;

			/// <summary>
			/// ����[]������
			/// </summary>
			/// <param name="n">�±�λ��</param>
			/// <returns>�����±��Ӧ��ֵ</returns>
			EarthView::GISDataType::CGrdData& operator[](_in ev_size_t n);

			/// <summary>
			/// ����[]������
			/// </summary>
			/// <param name="n">�±�λ��</param>
			/// <returns>�����±��Ӧ��ֵ</returns>
			EarthView::GISDataType::CGrdData const& operator[](_in ev_size_t n) const;

			/// <summary>
			/// ����ĳλ�õ�Ԫ��ֵ
			/// </summary>
			/// <param name="n">λ��</param>
			/// <returns>����λ�ö�Ӧ��ֵ</returns>
			EarthView::GISDataType::CGrdData& at(_in ev_size_t n);

			/// <summary>
			/// ����ĳλ�õ�Ԫ��ֵ
			/// </summary>
			/// <param name="n">λ��</param>
			/// <returns>����λ�ö�Ӧ��ֵ</returns>
			EarthView::GISDataType::CGrdData const &at(_in ev_size_t n) const;

			/// <summary>
			/// ����Ԫ�ص�������С
			/// </summary>
			/// <returns>����Ԫ�ص�������С</returns>
			ev_size_t size() const;

			/// <summary>
			/// �ı�������Ԫ��������С
			/// </summary>
			/// <param name="newSize">�ı��������Ԫ��������С</param>
			void resize(_in ev_size_t newSize);

			/// <summary>
			/// �ı���������С��Ԫ����������
			/// </summary>
			/// <param name="count">��С��Ԫ����������</param>
			void reserve(_in ev_size_t count);

			/// <summary>
			/// �������Ԫ��
			/// </summary>
			void clear();

		private:
			InternalList mList;
			
		};*/
	}
}
#endif

