#ifndef _FLT_RENDER_DATAS_H_
#define _FLT_RENDER_DATAS_H_

#include "core/memoryallocatedobject.h"
#include "core/stringdefines.h"
#include "core/global.h"

#include "mathengine/vector3.h"
#include "mathengine/vector2.h"
#include "mathengine/vector4.h"

#include "fltserializer/config.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace FLT
			{
				//////////////////////////////////////////////////////////////////////////
				// �����ļ��������ݵ��ඨ��
				//////////////////////////////////////////////////////////////////////////
				class EV_FLTSERIALIZER_DLL CFltMaterial : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CFltMaterial(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CFltMaterial();
					~CFltMaterial();

					EVString mMaterialName;
					EarthView::World::Spatial::Math::CVector4 mAmbientColor;
					EarthView::World::Spatial::Math::CVector4 mDiffuseColor;
					EarthView::World::Spatial::Math::CVector4 mSpecularColor;
					EarthView::World::Spatial::Math::CVector4 mEmissiveColor;
					ev_real32 mShininess;
					ev_bool mIsOldMat;
				};

				class EV_FLTSERIALIZER_DLL CFltTexture: public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CFltTexture(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CFltTexture();
					~CFltTexture();

					EVString mTexturePath;   // ȫ·��
					ev_uint32 mWrapMode;
					ev_uint32 mMinFliterMode;
					ev_uint32 mMaxFliterMode;
					ev_uint32 mEnvMode;
					ev_int32 mUWrapMode;
					ev_int32 mVWrapMode;
					ev_int32 mPivotX;
					ev_int32 mPivotY;
					ev_int32 mUDirection;
					ev_int32 mVDirection;
					ev_int32 mXUp;
					ev_int32 mYUp;
					ev_int32 mUTexels;
					ev_int32 mVTexels;

				};
class EV_FLTSERIALIZER_DLL CFltVector4List : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Math::CVector4> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///�������������ĺ���(��������ͺͷ���ֵ�޹صĺ�������begin/end)
					/// <summary>
					/// ���ϲ���Ԫ��
					/// </summary>
					/// <param name="pos">λ�õ�����</param>
					/// <param name="t">Ԫ��ֵ</param>
					/// <returns>����Ԫ�غ�Ԫ�ص�����</returns>
					CFltVector4List::iterator insert(_in CFltVector4List::iterator pos, _in EarthView::World::Spatial::Math::CVector4 const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CFltVector4List(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFltVector4List();
					/// <summary>
					/// ������������Ԫ��
					/// </summary>
					/// <param name="t">Ԫ��ֵ</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial::Math::CVector4 const &t);
					/// <summary>
					/// ɾ���������Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// ���������׸�Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>���������׸�Ԫ��</returns>
					EarthView::World::Spatial::Math::CVector4& front();
					/// <summary>
					/// �����������Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����������Ԫ��</returns>
					EarthView::World::Spatial::Math::CVector4& back();
					/// <summary>
					/// �����м�λ�ò���Ԫ��
					/// </summary>
					/// <param name="pos">λ��</param>
					/// <param name="t">Ԫ��ֵ</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Math::CVector4 const &t);
					/// <summary>
					/// ɾ�������м�λ��Ԫ��
					/// </summary>
					/// <param name="pos">λ��</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// ���������Ƿ�Ϊ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ϊ�շ���true������false</returns>
					ev_bool empty() const;
					/// <summary>
					/// ����[]������
					/// </summary>
					/// <param name="n">�±�λ��</param>
					/// <returns>�����±��Ӧ��ֵ</returns>
					EarthView::World::Spatial::Math::CVector4& operator[](_in ev_size_t n);
					/// <summary>
					/// ����[]������
					/// </summary>
					/// <param name="n">�±�λ��</param>
					/// <returns>�����±��Ӧ��ֵ</returns>
					EarthView::World::Spatial::Math::CVector4 const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// ����ĳλ�õ�Ԫ��ֵ
					/// </summary>
					/// <param name="n">λ��</param>
					/// <returns>����λ�ö�Ӧ��ֵ</returns>
					EarthView::World::Spatial::Math::CVector4 & at(_in ev_size_t n);
					/// <summary>
					/// ����ĳλ�õ�Ԫ��ֵ
					/// </summary>
					/// <param name="n">λ��</param>
					/// <returns>����λ�ö�Ӧ��ֵ</returns>
					EarthView::World::Spatial::Math::CVector4 const &at(_in ev_size_t n) const;
					/// <summary>
					/// ����Ԫ�ص�������С
					/// </summary>
					/// <param name=""></param>
					/// <returns>����Ԫ�ص�������С</returns>
					ev_size_t size() const;
					/// <summary>
					/// �ı�������Ԫ��������С
					/// </summary>
					/// <param name="newSize">�ı��������Ԫ��������С</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// �ı���������С��Ԫ����������
					/// </summary>
					/// <param name="count">��С��Ԫ����������</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// �������Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_FLTSERIALIZER_DLL CFltColorPools: public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CFltColorPools(_in EarthView::World::Core::CNameValuePairList *pList);

				public: 
					CFltColorPools();
					~CFltColorPools();
					ev_void setIsOld(const ev_bool b);
					ev_bool getIsOld()const;
					CFltVector4List getColors()const;

					ev_void addColor(const EarthView::World::Spatial::Math::CVector4& color);
					EarthView::World::Spatial::Math::CVector4 getColor(ev_int32 index); 
				protected:
					ev_bool mbIsOld;
					CFltVector4List mColors;
				};

				class EV_FLTSERIALIZER_DLL CFltShader : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CFltShader(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CFltShader();
					~CFltShader();
				};

				class EV_FLTSERIALIZER_DLL CFltVertex : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CFltVertex(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CFltVertex();
					~CFltVertex();

					inline ev_bool operator == ( _in const CFltVertex &vertex ) const
					{
						if (mColor == vertex.mColor &&
							mNormal == vertex.mNormal &&
							mPosition == vertex.mPosition &&
							mTextureCood == vertex.mTextureCood &&
							mHasColor == vertex.mHasColor &&
							mHasNormal == vertex.mHasNormal &&
							mHasPos == vertex.mHasPos &&
							mHasUV == vertex.mHasUV)
						{
							return true;
						}
						return false;
					}

					EarthView::World::Spatial::Math::CVector4 mColor;
					EarthView::World::Spatial::Math::CVector3 mNormal;
					EarthView::World::Spatial::Math::CVector3 mPosition;
					EarthView::World::Spatial::Math::CVector2 mTextureCood;

					ev_bool mHasColor;
					ev_bool mHasPos;
					ev_bool mHasUV;
					ev_bool mHasNormal;
				};
				class EV_FLTSERIALIZER_DLL CFltVertexsList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef std::list<CFltVertex> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList);
					iterator insert(iterator pos, CFltVertex const &ref_t)
					{
						return mList.insert(pos, ref_t);
					}

				private:
					InternalList mList;
ev_private:
					CFltVertexsList(_in EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CFltVertexsList() {}
					void push_back(CFltVertex const &ref_t)
					{
						mList.push_back(ref_t);
					}
					void push_front(CFltVertex const   &ref_t)
					{
						mList.push_front(ref_t);
					}
					void pop_back()
					{
						mList.pop_back();
					}

					void pop_front()
					{
						mList.pop_front();
					}

					CFltVertex& front()
					{
						return mList.front();
					}
					CFltVertex& back()
					{
						return mList.back();
					}
					CFltVertex& at(ev_uint32 pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						return *it;
					}
					void insert(ev_uint32 pos, CFltVertex const &ref_t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, ref_t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.erase(it);
					}
					void remove( CFltVertex const &t)
					{
						mList.remove(t);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}

					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void clear()
					{
						mList.clear();
					}
				};
				class EV_FLTSERIALIZER_DLL CFltVector2List : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef std::list<EarthView::World::Spatial::Math::CVector2> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList);
					iterator insert(iterator pos, EarthView::World::Spatial::Math::CVector2 const &ref_t)
					{
						return mList.insert(pos, ref_t);
					}

				private:
					InternalList mList;
ev_private:
					CFltVector2List(_in EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CFltVector2List() {}
					void push_back(EarthView::World::Spatial::Math::CVector2 const &ref_t)
					{
						mList.push_back(ref_t);
					}
					void push_front(EarthView::World::Spatial::Math::CVector2 const   &ref_t)
					{
						mList.push_front(ref_t);
					}
					void pop_back()
					{
						mList.pop_back();
					}

					void pop_front()
					{
						mList.pop_front();
					}

					EarthView::World::Spatial::Math::CVector2& front()
					{
						return mList.front();
					}
					EarthView::World::Spatial::Math::CVector2& back()
					{
						return mList.back();
					}
					EarthView::World::Spatial::Math::CVector2& at(ev_uint32 pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						return *it;
					}
					void insert(ev_uint32 pos, EarthView::World::Spatial::Math::CVector2 const &ref_t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, ref_t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.erase(it);
					}
					void remove( EarthView::World::Spatial::Math::CVector2 const &t)
					{
						mList.remove(t);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}

					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void clear()
					{
						mList.clear();
					}
				};
				class EV_FLTSERIALIZER_DLL CFltUint32List : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef std::list<ev_uint32> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList);
					iterator insert(iterator pos, ev_uint32 const &ref_t)
					{
						return mList.insert(pos, ref_t);
					}

				private:
					InternalList mList;
ev_private:
					CFltUint32List(_in EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					CFltUint32List() {}
					void push_back(ev_uint32 const &ref_t)
					{
						mList.push_back(ref_t);
					}
					void push_front(ev_uint32 const   &ref_t)
					{
						mList.push_front(ref_t);
					}
					void pop_back()
					{
						mList.pop_back();
					}

					void pop_front()
					{
						mList.pop_front();
					}

					ev_uint32& front()
					{
						return mList.front();
					}
					ev_uint32& back()
					{
						return mList.back();
					}
					ev_uint32& at(ev_uint32 pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						return *it;
					}
					void insert(ev_uint32 pos, ev_uint32 const &ref_t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, ref_t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.erase(it);
					}
					void remove( ev_uint32 const &t)
					{
						mList.remove(t);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}

					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void clear()
					{
						mList.clear();
					}
				};
				class EV_FLTSERIALIZER_DLL CFltFace : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name="pList">���캯��������ֵ�Ա�</param>
					/// <returns></returns>
					CFltFace(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					
					CFltFace();
					~CFltFace();
                    ev_void addVertex(const CFltVertex& vertex);
					ev_void addUV(const EarthView::World::Spatial::Math::CVector2& uv);
					ev_void getVertexElement(ev_bool& hascolor, ev_bool& hasPos, ev_bool& hasUV, ev_bool& hasNor);
					
					CFltVertexsList mVertexList;
					CFltVector2List mUvCoodList;
					CFltUint32List mIndexList;
					ev_int16 mMaterialIndex;
					ev_int16 mTextureIndex;
					ev_int16 mShaderIndex;
					ev_uint32 mLightMode;
					EarthView::World::Spatial::Math::CVector4 mPrimaryColor;
					ev_real32 mTransparency;
					ev_uint32 mDrawMode;
					ev_bool mBlend;
				};
			}
		}
	}
}



#endif