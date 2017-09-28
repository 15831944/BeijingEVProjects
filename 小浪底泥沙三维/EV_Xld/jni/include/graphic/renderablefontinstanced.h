#ifndef __RENDERABLEFONTINSTANCED_H__
#define __RENDERABLEFONTINSTANCED_H__

#include "graphic/graphic_config.h"
#include "graphic/texturetextstyle.h"
#include "graphic/instanceobjectcreator.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CMeshPtr;
			class CFontEventObject;
			class CInstanceManagerListenerFont;
			class CTextureMovableText;
			class CRenderableFontInstanceObjectCreatorManager;
			/// <summary>
			/// ����instance���������Ⱦ����
			/// </summary>
			class EV_GRAPHIC_DLL CRenderableFontInstanced : public EarthView::World::Core::CBaseObject
			{
				friend class CTextureMovableText;
				friend class CRenderableFontInstanceObjectCreatorManager;
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				CRenderableFontInstanced(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CRenderableFontInstanced(CTextureMovableText *parent, const EarthView::World::Core::CUnicodeString& wstr,const CTextureTextStyle* ref_style,CSceneManager *ref_mgr);
				/// <summary>
				/// ��������
				/// </summary>
				/// <returns></returns>
				virtual ~CRenderableFontInstanced();

				/// <summary>
				/// ���������Զ����п��
				/// </summary>
				/// <param name="width">������Ϊ��λ�Ŀ��ֵ</param>
				/// <returns></returns>
				ev_void setAutoLineFeed( _in const ev_uint32 width );
				/// <summary>
				/// �����Ƿ�ɼ�               
				/// </summary>
				/// <param name="visible">�Ƿ�ɼ�</param>
				/// <returns></returns>
				void setVisible(ev_bool visible);
				/// <summary>
				/// ������Ⱦ��������Ϣ
				/// </summary>
				/// <param name="queueID">����ID��</param>
				/// <returns></returns>
				void setRenderQueueGroup(ev_uint8 queueID);
				/// <summary>
				/// ������Ⱦ��������Ϣ�Ͷ������ȼ�
				/// </summary>
				/// <param name="queueID">����ID��</param>
				/// <param name="priority">���ȼ�</param>
				/// <returns></returns>
				void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
				/// <summary>
				/// ������任����
				/// </summary>
				/// <returns></returns>
				void bindWorldMaxtrix(const EarthView::World::Spatial::Math::CMatrix4* mx4);
				/// <summary>
				/// �����Ƿ�����Ȳ��
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				virtual ev_void setDepthCheckEnabled(_in ev_bool enable);
				/// <summary>
				/// ��ȡ�Ƿ�����Ȳ��
				/// </summary>
				/// <returns></returns>
				ev_bool getDepthCheckEnabled();
				/// <summary>
				/// ������Ⱦ���ı��ַ���
				/// </summary>
				/// <returns></returns>
				void setText(const EarthView::World::Core::CUnicodeString& wstr);
				/// <summary>
				/// ��ȡ��Ⱦ���ı��ַ���
				/// </summary>
				/// <returns></returns>
				const EarthView::World::Core::CUnicodeString& getText() const;
				/// <summary>
				/// �����ı����
				/// </summary>
				/// <param name="newStyle">�µ��ı����</param>
				/// <returns></returns>
				void setTextStyle(CTextureTextStyle* newStyle);
				/// <summary>
				/// ������Ⱦ״̬
				/// </summary>
				void updateRenderStatus(ev_bool geometryOutOfDate, ev_bool colorOutOfDate);
				/// <summary>
				/// ִ��renderable�����������Ҫ�ĸ���
				/// </summary>
				/// <param name=""></param>
				void refresh();
				/// <summary>
				/// ǿ��ִ��ִ��renderable�����������Ҫ�ĸ���
				/// </summary>
				/// <param name=""></param>
				ev_bool forceRefresh();

ev_private:
				ev_void saveToInstanceObjectVecMap(CInstanceObject* pObject,EVString& meshName);
				InstanceObjectVecMap& getInstanceObjectVecMap();

			protected:
				CTextureMovableText *mParent;
				EarthView::World::Core::CUnicodeString mText;
				CTextureTextStyle* mTextStyle;
				CSceneManager* mSceneMgr;
				const EarthView::World::Spatial::Math::CMatrix4* mWorldMatrix;///����任����
				EarthView::World::Spatial::Math::CVector3 mOffset;///�ֲ�����ϵ�µ�ƫ��ֵ,���������ı�ͣ����ʽ				
				EarthView::World::Core::CRecursiveMutex mInstanceObjectsMutex;
				InstanceObjectVecMap mInstanceObjects;
				ev_bool mbVisible;
				ev_bool mbDepthCheckEnabled;
				ev_bool mbNeedRecreate;
				ev_bool mbNeedForceRefresh;
				ev_int32 mNeedForceRefreshMatCount;
				EarthView::World::Core::CMutex mNeedForceRefreshMutex;
				ev_uint64 mRequestId;
				ev_uint8 mRenderQueueGroupId;
				ev_uint16 mRenderQueueGroupPriority;
				ev_uint32 mAutoLineFeedWidth;

			private:
				void create(_inout EarthView::World::Spatial::Math::CVector2& pen, _inout EarthView::World::Spatial::Math::CAxisAlignedBox& aabb);
				void computeLayout(_inout EarthView::World::Spatial::Math::CVector3& layout3D,const CTextureTextStyle* style,const EarthView::World::Spatial::Math::CAxisAlignedBox& localAABB);
			};

			class EV_GRAPHIC_DLL CRenderableFontInstanceObjectCreatorManager : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CRenderableFontInstanceObjectCreatorManager(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CRenderableFontInstanceObjectCreatorManager();
				/// <summary>
				/// ��������
				/// </summary>
				/// <returns></returns>
				virtual ~CRenderableFontInstanceObjectCreatorManager();
				/// <summary>
				/// ��ȡ����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static CRenderableFontInstanceObjectCreatorManager* getSingleton();
				/// <summary>
				/// ���ٵ���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void destorySingleton();	
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CInstanceObject* createInstanceObject(CRenderableFontInstanced* textInstance,CTextureTextStyle* textStyle,EVString& matName);
				/// <summary>
				/// ���ٶ���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void destroyInstanceObjects(CRenderableFontInstanced* textInstance);
				/// <summary>
				/// �������
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void addRenderableFontInstancedRequest(CRenderableFontInstanced* textInstance);
				/// <summary>
				/// �ж�����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void abortRenderableFontInstancedRequest(CRenderableFontInstanced* textInstance);

			private:
				/// <summary>
				/// ����mesh��Դ
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMeshPtr createOrRetrieveMesh(CRenderableFontInstanced* textInstance,CTextureTextStyle* textStyle,EVString& matName);

				static CRenderableFontInstanceObjectCreatorManager* mpSingleton;
				typedef map<EVString,CInstanceObjectCreator*> InstanceObjectCreatorMap;
				InstanceObjectCreatorMap mCreatorMap;
				EarthView::World::Core::CMutex mCreatorMapMutex;
				CFontEventObject* mpFontEventObject;
				friend class CFontEventObject;
				CInstanceManagerListenerFont* mpListener;
			};


		}
	}
}
#endif

