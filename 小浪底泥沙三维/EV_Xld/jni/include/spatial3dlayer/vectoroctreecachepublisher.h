#ifndef EV_SPATIAL3DLAYER_VECTOROCTREECACHEPUBLISHER_H
#define EV_SPATIAL3DLAYER_VECTOROCTREECACHEPUBLISHER_H

#include "spatial3dlayer/3dlayerconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/irasterdataset.h"

#include "geometry3d/iscenelayer.h"

#include "spatialobject/geometry/geometrycollection.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ifield.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class CVectorOctreePublishListener;
				class CVector3DCacheFieldVector;
				class EV_3DLAYER_DLL CVectorOctreeCachePublisher : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CVectorOctreeCachePublisher();
					virtual ~CVectorOctreeCachePublisher();
ev_private:
					CVectorOctreeCachePublisher(EarthView::World::Core::CNameValuePairList* pList);
				public:
					
					virtual ev_bool publish(EarthView::World::Spatial3D::Atlas::ISceneLayer* pLayer,const EVString& path,const EVString& fileName,const CVector3DCacheFieldVector& fieldNames);

					virtual void stopPublish();

					virtual void setPublishListener(CVectorOctreePublishListener* listener);

					virtual void setTotalCount(ev_uint32 count);
					virtual void updateProgressInformation(const EVString& info,ev_uint32 publishCount);
					virtual void setInformation(const EVString& info,ev_int32 percent);
				private:
					CVectorOctreePublishListener* mpPublishListener;
					ev_uint32 mTotalCount;
					ev_uint32 mCurrentCount;

					EarthView::World::Core::CRecursiveMutex mLayerLock;
					EarthView::World::Spatial3D::Atlas::ISceneLayer* mpLayer;
				};

				/// <summary>				
				/// ʸ�����淢�����ȼ�����
				/// </summary>
				class EV_3DLAYER_DLL CVectorOctreePublishListener : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CVectorOctreePublishListener(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CVectorOctreePublishListener();
					virtual ~CVectorOctreePublishListener();

					/// <summary>
					/// ��Ϣ����
					/// </summary>
					/// <param name="info">��Ϣ����</param>
					/// <param name="percent">����</param>
					/// <returns></returns>
					virtual ev_void setInformation(const EVString& info,ev_int32 percent);
				};
				
				class EV_3DLAYER_DLL CVector3DCacheField : public EarthView::World::Core::CBaseObject
				{
				public:
					EVString mFieldName;
					EarthView::World::Spatial::GeoDataset::EVFieldType mFieldType;
ev_private:
					CVector3DCacheField(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CVector3DCacheField();
					CVector3DCacheField(const EVString& fieldName,EarthView::World::Spatial::GeoDataset::EVFieldType type);
					~CVector3DCacheField();

					EVString getFieldName() const;

					EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const;
					/// <summary>
					/// ���л���xml�ı�
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// ��xml�ָ�ͼ�����
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
ev_private:
					bool operator < (const CVector3DCacheField &rhs) const;
				};

				class EV_3DLAYER_DLL CVector3DCacheFieldVector : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<CVector3DCacheField> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///�������������ĺ���(��������ͺͷ���ֵ�޹صĺ�������begin/end)

				private:
					InternalList mList;
ev_private:
					CVector3DCacheFieldVector(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVector3DCacheFieldVector();
					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CVector3DCacheFieldVector();
					/// <summary>
					/// ��������β�����ֵΪt��Ԫ��
					/// </summary>
					/// <param name="t">���Ԫ�ص�ֵ</param>
					/// <returns></returns>
					void push_back(CVector3DCacheField const &t);
					/// <summary>
					/// ɾ�����������һ��Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// ���������ĵ�һ��Ԫ�ص�����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVector3DCacheField front() const;
					/// <summary>
					/// �������������һ��Ԫ�ص�����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVector3DCacheField back() const;
					/// <summary>
					/// �ڵ�����pos��ָ���Ԫ��ǰ�����ֵΪt����Ԫ��
					/// </summary>
					/// <param name="pos">����Ԫ�ص�λ��</param>
					/// <param name="t">����Ԫ�ص�ֵ</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, CVector3DCacheField const &t);
					/// <summary>
					/// ȥ��λ��pos��Ԫ�ص�ֵ
					/// </summary>
					/// <param name="pos">Ԫ�ص�λ��</param>
					/// <returns>����������ǰ��ֵ</returns>
					void remove(ev_size_t pos);
					/// <summary>
					/// ���ر��������С�Ƿ�Ϊ0�Ĳ���ֵ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool empty() const;
					/// <summary>
					/// ����[]������
					/// ֻ���ɷ�const������ã����ҷ���ֵ���Գ����ڸ�ֵ��������
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CVector3DCacheField &operator[](ev_size_t n);
					/// <summary>
					/// ����[]������
					///��const������ã����ҷ���ֵ���ܳ����ڸ�ֵ��������
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CVector3DCacheField const &operator[](ev_size_t n) const;                
					/// <summary>
					/// �����±�Ϊn��Ԫ�ص�����
					/// ��const������ã����ҷ���ֵ���ܳ����ڸ�ֵ��������
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CVector3DCacheField at(ev_size_t n) const;
					/// <summary>
					/// ����������Ԫ�صĸ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// ���������ĳ��ȴ�С��ʹ��������newSize��Ԫ��
					/// </summary>
					/// <param name="newSize">����</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);

					void reserve(ev_size_t count);
					/// <summary>
					/// ɾ�������е�����Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void swap(CVector3DCacheFieldVector& list);

					/// <summary>
					/// ���л���xml�ı�
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// ��xml�ָ�ͼ�����
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
ev_private:

					ev_void insert(iterator pos, iterator from ,iterator to)
					{
						mList.insert(pos,from,to);
					}		
				};

				class CGeometryObject
				{
				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Geometry::IGeometry* mGeometry;
					map<EVString,EarthView::World::Core::CVariant> mFieldValues;
					friend class CGeometryObjectVector;
				public:

					CGeometryObject();
					~CGeometryObject();

					void setID(ev_uint32 id);
					ev_uint32 getID() const;

					void insertFieldValue(const EVString& field,const EarthView::World::Core::CVariant& value);
					ev_bool getFieldValue(const EVString& field,EarthView::World::Core::CVariant& value);

					ev_uint32 getFieldValueCount() const;
					ev_bool getField(ev_uint32 pos,EVString& field,EarthView::World::Core::CVariant& value);

					EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const;
				};

				class CGeometryObjectVector
				{
ev_private:
					typedef vector<CGeometryObject> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///�������������ĺ���(��������ͺͷ���ֵ�޹صĺ�������begin/end)

				private:
					InternalList mList;

					EarthView::World::Spatial::Geometry::CGeometryCollection* mpGeometrys;
					ev_bool mbAuthorize;
				public:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryObjectVector();
					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CGeometryObjectVector();
					/// <summary>
					/// ��������β�����ֵΪt��Ԫ��
					/// </summary>
					/// <param name="t">���Ԫ�ص�ֵ</param>
					/// <returns></returns>
					void push_back(CGeometryObject  const &t);
					/// <summary>
					/// ɾ�����������һ��Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// ���������ĵ�һ��Ԫ�ص�����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryObject front() const;
					/// <summary>
					/// �������������һ��Ԫ�ص�����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryObject back() const;
					/// <summary>
					/// �ڵ�����pos��ָ���Ԫ��ǰ�����ֵΪt����Ԫ��
					/// </summary>
					/// <param name="pos">����Ԫ�ص�λ��</param>
					/// <param name="t">����Ԫ�ص�ֵ</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, CGeometryObject const &t);
					/// <summary>
					/// ȥ��λ��pos��Ԫ�ص�ֵ
					/// </summary>
					/// <param name="pos">Ԫ�ص�λ��</param>
					/// <returns>����������ǰ��ֵ</returns>
					void remove(ev_size_t pos);
					/// <summary>
					/// ���ر��������С�Ƿ�Ϊ0�Ĳ���ֵ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool empty() const;
					/// <summary>
					/// ����[]������
					/// ֻ���ɷ�const������ã����ҷ���ֵ���Գ����ڸ�ֵ��������
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CGeometryObject &operator[](ev_size_t n);
					/// <summary>
					/// ����[]������
					///��const������ã����ҷ���ֵ���ܳ����ڸ�ֵ��������
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CGeometryObject const &operator[](ev_size_t n) const;                
					/// <summary>
					/// �����±�Ϊn��Ԫ�ص�����
					/// ��const������ã����ҷ���ֵ���ܳ����ڸ�ֵ��������
					/// </summary>
					/// <param name="n"></param>
					/// <returns></returns>
					CGeometryObject at(ev_size_t n) const;
					/// <summary>
					/// ����������Ԫ�صĸ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// ���������ĳ��ȴ�С��ʹ��������newSize��Ԫ��
					/// </summary>
					/// <param name="newSize">����</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);

					void reserve(ev_size_t count);
					/// <summary>
					/// ɾ�������е�����Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					/// <summary>
					/// ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void swap(CGeometryObjectVector& list);

					void setGeometrys(EarthView::World::Spatial::Geometry::CGeometryCollection* geometrs,ev_bool bAuthorize);

					EarthView::World::Spatial::Geometry::CGeometryCollection* getGeometrys() const;

					EarthView::World::Core::MemoryDataStreamPtr toStream();
					void fromStream(const EarthView::World::Core::MemoryDataStreamPtr& objectsStream);
ev_private:

					ev_void insert(iterator pos, iterator from ,iterator to)
					{
						mList.insert(pos,from,to);
					}					
				};

			}
		}
	}
}

#endif
