#ifndef EV_LAYER_STREET_VIEW_POINT_H
#define EV_LAYER_STREET_VIEW_POINT_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/memoryallocatedobject.h"
#include "download/streetviewserviceconnection.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class CLayerStreetPoint;
			class CLayerStreetBlock;

			class EV_Spatial3DStreetView_DLL CLayerStreetPointDirection : public EarthView::World::Core::CBaseObject
			{
			public:
				CLayerStreetPointDirection(ev_uint32 evid, EVString mapCode, ev_uint32 topoID);
				CLayerStreetPointDirection();
				ev_uint32 mEVID;
				EVString mMapCode;
				ev_uint32 mTopoID;
ev_private:
				CLayerStreetPointDirection( EarthView::World::Core::CNameValuePairList *pList );
			};

			class EV_Spatial3DStreetView_DLL CLayerStreetPoint : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CLayerStreetPoint();
				virtual ~CLayerStreetPoint();
				ev_uint32 mEVID;
				ev_uint32 mNearEVID;
				ev_uint32 mID;
				ev_uint32 mTopoID;
				ev_real64 mLon;
				ev_real64 mLat;
				ev_real64 mNearLon;
				ev_real64 mNearLat;
				ev_bool mIsEdge;
				EVString mMapCode;
				EVString mNearMapCode;
				EVString mPhotoFile;
				CLayerStreetPointDirection mNorth;
				CLayerStreetPointDirection mSouth;
				CLayerStreetPointDirection mEast;
				CLayerStreetPointDirection mWest;
				CLayerStreetPointDirection mNorthEast;
				CLayerStreetPointDirection mNorthWest;
				CLayerStreetPointDirection mSouthEast;
				CLayerStreetPointDirection mSouthWest;
				CLayerStreetPoint& operator=(_in const EarthView::World::Spatial::Download::CStreetPoint& point);
			ev_private:
				CLayerStreetPoint( EarthView::World::Core::CNameValuePairList *pList );
				CLayerStreetPoint( EarthView::World::Spatial::Download::CStreetPoint& point);
			};

			/// <summary>
			/// �־������ļ���
			/// </summary>
			class  EV_Spatial3DStreetView_DLL CStreetPointVector : public EarthView::World::Core::CAllocatedObject
			{
			ev_private:
				typedef vector<EarthView::World::Spatial::Download::CStreetPoint> InternalVector;
				typedef InternalVector::iterator iterator;
				typedef InternalVector::const_iterator const_iterator;
				typedef InternalVector::reverse_iterator reverse_iterator;
				typedef InternalVector::const_reverse_iterator const_reverse_iterator;
				typedef InternalVector::reference reference;
				typedef InternalVector::const_reference const_reference;
				typedef InternalVector::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mVector); 			///�������������ĺ���(��������ͺͷ���ֵ�޹صĺ�������begin/end)
				/// <summary>
				/// ���ϲ���Ԫ��
				/// </summary>
				/// <param name="pos">������</param>
				/// <param name="t">Handle��ʶ</param>
				/// <returns>�����ļ�ֵ��</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Spatial::Download::CStreetPoint& t)
				{
					return mVector.insert(pos, t);
				}

			private:
				InternalVector mVector;
			ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CStreetPointVector(_in EarthView::World::Core::CNameValuePairList *pList)
				{
				}
			public:
				/// <summary>
				/// Ĭ�Ϲ��캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CStreetPointVector()
				{
				}
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStreetPointVector();
				/// <summary>
				/// ������ĩβ���Ԫ��
				/// </summary>
				/// <param name="t">Ԫ��ֵ</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Spatial::Download::CStreetPoint& t)
				{
					mVector.push_back(t);
				}

				/// <summary>
				/// ɾ�����Ԫ��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back()
				{
					mVector.pop_back();
				}

				/// <summary>
				/// ���ص�һ��Ԫ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>��һ��Ԫ��ֵ</returns>
				EarthView::World::Spatial::Download::CStreetPoint& front()
				{
					return mVector.front();
				}

				/// <summary>
				/// �������Ԫ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>���Ԫ��ֵ</returns>
				EarthView::World::Spatial::Download::CStreetPoint& back()
				{
					return mVector.back();
				}

				/// <summary>
				/// �����м�ĳԪ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>Ԫ��ֵ</returns>
				EarthView::World::Spatial::Download::CStreetPoint& at(_in ev_uint32 pos)
				{
					return mVector[pos];
				}

				/// <summary>
				/// �ж������Ƿ�Ϊ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>Ϊ�շ���true������false</returns>
				ev_bool empty() const
				{
					return mVector.empty();
				}

				/// <summary>
				/// ����������Ԫ��������С
				/// </summary>
				/// <param name=""></param>
				/// <returns>����������Ԫ��������С</returns>
				ev_size_t size() const
				{
					return mVector.size();
				}

				/// <summary>
				/// �ı�������С
				/// </summary>
				/// <param name="newSize">������С</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize)
				{
					mVector.resize(newSize);
				}

				/// <summary>
				/// �������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			/// <summary>
			/// �־��߶���
			/// </summary>
			class  EV_Spatial3DStreetView_DLL CStreetLine : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// Ĭ�Ϲ��캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CStreetLine();
				/// <summary>
				///��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStreetLine();
				/// <summary>
				///��ӵ�
				/// </summary>
				/// <param name="point">��</param>
				/// <returns></returns>
				void add(EarthView::World::Spatial::Download::CStreetPoint& point)
				{
					mPoints.push_back(point);
				}
				/// <summary>
				/// �����м�ĳԪ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>Ԫ��ֵ</returns>
				EarthView::World::Spatial::Download::CStreetPoint& at(_in ev_uint32 pos)
				{
					return mPoints.at(pos);
				}
				/// <summary>
				/// �ж������Ƿ�Ϊ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>Ϊ�շ���true������false</returns>
				ev_bool empty() const
				{
					return mPoints.empty();
				}
				/// <summary>
				/// ����������Ԫ��������С
				/// </summary>
				/// <param name=""></param>
				/// <returns>����������Ԫ��������С</returns>
				ev_size_t size() const
				{
					return mPoints.size();
				}
				/// <summary>
				/// ����߶���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CStreetLine(_in EarthView::World::Core::CNameValuePairList *pList);
			private:
				CStreetPointVector mPoints;
			};

			/// <summary>
			/// �־������
			/// </summary>
			class  EV_Spatial3DStreetView_DLL CStreetBlock : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="blockCode">����</param>
				/// <returns></returns>
				CStreetBlock(EVString blockCode);
				/// <summary>
				///��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStreetBlock();
				/// <summary>
				///�����
				/// </summary>
				/// <param name="line">��</param>
				/// <returns></returns>
				void add(EarthView::World::Spatial3D::CStreetLine& line);
				/// <summary>
				///��ӹ�����
				/// </summary>
				/// <param name="line">��</param>
				/// <returns></returns>
				void addIsolateLine(EarthView::World::Spatial3D::CStreetLine& line);
				/// <summary>
				/// ��տ����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
				/// <summary>
				/// �����м�ĳԪ��
				/// </summary>
				/// <param name="pos">����</param>
				/// <returns>Ԫ��ֵ</returns>
				EarthView::World::Spatial3D::CStreetLine& at(_in ev_uint32 pos)
				{
					return mLines[pos];
				}
				/// <summary>
				/// �����м�ĳԪ��
				/// </summary>
				/// <param name="pos">����</param>
				/// <returns>Ԫ��ֵ</returns>
				EarthView::World::Spatial3D::CStreetLine& getIsolateLine(_in ev_uint32 pos)
				{
					return mIsolateLines[pos];
				}
				/// <summary>
				/// �ж������Ƿ�Ϊ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>Ϊ�շ���true������false</returns>
				ev_bool empty() const
				{
					return mLines.empty();
				}
				/// <summary>
				/// �ж������Ƿ�Ϊ��
				/// </summary>
				/// <param name=""></param>
				/// <returns>Ϊ�շ���true������false</returns>
				ev_bool isolateLineEmpty() const
				{
					return mIsolateLines.empty();
				}
				/// <summary>
				/// ����������Ԫ��������С
				/// </summary>
				/// <param name=""></param>
				/// <returns>����������Ԫ��������С</returns>
				ev_size_t size() const
				{
					return mLines.size();
				}
				/// <summary>
				/// ����������Ԫ��������С
				/// </summary>
				/// <param name=""></param>
				/// <returns>����������Ԫ��������С</returns>
				ev_size_t isolateLineSize() const
				{
					return mIsolateLines.size();
				}
				/// <summary>
				/// ��ȡ�����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getBlockCode()
				{
					return mCode;
				}
			ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CStreetBlock(_in EarthView::World::Core::CNameValuePairList *pList);
			private:
				EVString mCode;
				vector<CStreetLine> mLines;
				vector<CStreetLine> mIsolateLines;

				friend class CStreetLine;
			};

		}
	}
}

#endif