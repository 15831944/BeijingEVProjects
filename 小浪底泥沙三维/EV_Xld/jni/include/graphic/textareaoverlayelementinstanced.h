#ifndef _TEXTAREAOVERLAYELEMENTINSTANCED_H__
#define _TEXTAREAOVERLAYELEMENTINSTANCED_H__

#include "graphic/graphic_config.h"
#include "graphic/overlayelement.h"
#include "graphic/font.h"
#include "graphic/instanceobjectcreator.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CMeshPtr;
			class CTextAreaEventObject;
			class CInstanceManagerListenerTextArea;
			class CTextAreaInstanceObjectCreatorManager;
			/// <summary>
			/// ����instance���ı����Ԫ��
			/// </summary>
			class EV_GRAPHIC_DLL CTextAreaOverlayElementInstanced : public EarthView::World::Graphic::COverlayElement
			{
				friend class CTextAreaInstanceObjectCreatorManager;
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CTextAreaOverlayElementInstanced(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="name"></param>
				/// <returns></returns>
				CTextAreaOverlayElementInstanced(const EVString &name);
				/// <summary>
				/// ��������
				/// </summary>
				/// <param name="name"></param>
				/// <returns></returns>
				virtual ~CTextAreaOverlayElementInstanced();
				/// <summary>
				/// ��ʼ��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void initialise();
				/// <summary>
				/// �������ṩ�ı任������ЩԪ�ؽ��и���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void _update();
				/***** Shows this element if it was hidden. ****/
				virtual void show();
				/***** Hides this element if it was visible. ****/
				virtual void hide();

				/// <summary>
				/// ����Ԫ�ص��ı�����
				/// </summary>
				/// <param name="text">����</param>
				/// <returns></returns>
				virtual void setCaption(const EarthView::World::Core::DisplayString &text);
				/// <summary>
				/// ����Ԫ�ص�λ�úͳߴ��С
				/// </summary>
				/// <param name="gmm">ö�٣���ʾ��ͬ��λ�úʹ�С</param>
				/// <returns></returns>
				void setMetricsMode(EarthView::World::Graphic::GuiMetricsMode gmm);
				/// <summary>
				/// �õ�Ԫ�ص���������
				/// </summary>
				/// <param name=""></param>
				/// <returns>����Ԫ�ص���������</returns>
				virtual EVString getTypeName() const;
				/// <summary>
				/// ���overlayelement������任
				/// </summary>				
				/// <returns></returns>
				void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
				/// <summary>
				/// ��ȡ��ǰʹ���е�������Դ
				/// </summary>
				const CFontPtr& getFontResource() const;
				/// <summary>
				/// ʹ��ָ����������Դ
				/// </summary>
				void setFontResource(const CFontPtr& font);
				/// <summary>
				/// ��ȡ������
				/// </summary>
				/// <returns>������</returns>
				const FontStyle& getFontStyle() const;
				/// <summary>
				/// ����������
				/// </summary>
				/// <param name="style">���</param>
				void setFontStyle(const FontStyle& style);
				/// <summary>
				/// �õ��ַ��߶�
				/// </summary>
				/// <param name=""></param>
				/// <returns>�����ַ��߶�</returns>
				Real getCharHeight() const;
				/// <summary>
				/// �����ַ��߶�
				/// </summary>
				/// <param name="height">�߶�</param>
				/// <returns></returns>
				void setCharHeight( Real height );
				/// <summary>
				/// �õ��ո���
				/// </summary>
				/// <param name=""></param>
				/// <returns>���ؿո���</returns>
				Real getSpaceWidth() const;
				/// <summary>
				/// ���ÿո���
				/// </summary>
				/// <param name="width">�ո���</param>
				/// <returns></returns>
				void setSpaceWidth( Real width );
				/// <summary>
				/// ����ı�����ɫ
				/// </summary>
				/// <param name=""></param>
				/// <returns>������ɫֵ</returns>
				const EarthView::World::Graphic::CColourValue &getColour() const;
				/// <summary>
				/// �����ı�����ɫ
				/// </summary>
				/// <param name="col">��ɫֵ</param>
				/// <returns></returns>
				void setColour(const EarthView::World::Graphic::CColourValue &col);
				/// <summary>
				/// �õ����ֶ�������ɫ
				/// </summary>
				/// <param name="col">��ɫֵ</param>
				/// <returns>�������ֶ�������ɫ</returns>
				const EarthView::World::Graphic::CColourValue &getColourTop() const;
				/// <summary>
				/// �������ֶ�������ɫ
				/// </summary>
				/// <param name="col">��ɫֵ</param>
				/// <returns></returns>
				void setColourTop(const EarthView::World::Graphic::CColourValue &col);
				/// <summary>
				/// �õ����ֵײ�����ɫ
				/// </summary>
				/// <param name=""></param>
				/// <returns>�������ֵײ�����ɫ</returns>
				const EarthView::World::Graphic::CColourValue &getColourBottom() const;
				/// <summary>
				/// �������ֵײ�����ɫ
				/// </summary>
				/// <param name="col">��ɫֵ</param>
				/// <returns></returns>
				void setColourBottom(const EarthView::World::Graphic::CColourValue &col);

				/// <summary>
				/// �������ֵĸ߶�
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdCharHeight : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				/// <summary>
				/// ���ÿո�Ŀ��
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdSpaceWidth : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				///Command object for setting the constant colour.
				/// <summary>
				/// ������ɫ
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdColour : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				/// <summary>
				/// ���ö�������ɫ
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdColourTop : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				/// <summary>
				/// ���õײ�����ɫ
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdColourBottom : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};

ev_internal:
				///�̳з���
				virtual void updatePositionGeometry();
				///�̳з���
				virtual void updateTextureGeometry();
				/// <summary>
				/// ���¶�����ɫ
				/// </summary>
				virtual void updateColours();
				//// Method for setting up base parameters for this class
				virtual void addBaseParameters();

			public:
				ev_void saveToInstanceObjectVecMap(CInstanceObject* pObject,EVString& meshName);
				InstanceObjectVecMap& getInstanceObjectVecMap();
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables /* = false */);

			protected:
				static EVString msTypeName;
				/// Command objects
				static CCmdCharHeight msCmdCharHeight;
				static CCmdSpaceWidth msCmdSpaceWidth;
				static CCmdColour msCmdColour;
				static CCmdColourTop msCmdColourTop;
				static CCmdColourBottom msCmdColourBottom;

				EarthView::World::Graphic::CSceneManager* mSceneMgr;
				EVString mSceneName;
				CFontPtr mpFont;
				ev_uint16 mPixelCharHeight;
				ev_uint16 mPixelSpaceWidth;
				Real mCharHeight;
				Real mSpaceWidth;
				Real mViewportAspectCoef;
				//// Colours to use for the vertices
				EarthView::World::Graphic::CColourValue mColourTop;
				EarthView::World::Graphic::CColourValue mColourBottom;				
				ev_bool mColoursChanged;

				InstanceObjectVecMap mInstanceObjects;
			};

			class EV_GRAPHIC_DLL CTextAreaInstanceObjectCreatorManager : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name="pList">���캯��������ֵ�Ա�</param>
				/// <returns></returns>
				CTextAreaInstanceObjectCreatorManager(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// ���캯��
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CTextAreaInstanceObjectCreatorManager();
				/// <summary>
				/// ��������
				/// </summary>
				/// <returns></returns>
				virtual ~CTextAreaInstanceObjectCreatorManager();
				/// <summary>
				/// ��ȡ����
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static CTextAreaInstanceObjectCreatorManager* getSingleton();
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
				CInstanceObject* createInstanceObject(CTextAreaOverlayElementInstanced* textInstance,EVString& matName);
				/// <summary>
				/// ���ٶ���
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void destroyInstanceObjects(CTextAreaOverlayElementInstanced* textInstance);
				/// <summary>
				/// �ͷ���Դ
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void releaseInstanceObjectCreators(CTextAreaOverlayElementInstanced* textInstance);

			private:
				/// <summary>
				/// ����mesh��Դ
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMeshPtr createOrRetrieveMesh(CTextAreaOverlayElementInstanced* textInstance,EVString& matName);

				static CTextAreaInstanceObjectCreatorManager* mpSinglton;
				typedef map<EVString,CInstanceObjectCreator*> InstanceObjectCreatorMap;
				InstanceObjectCreatorMap mCreatorMap;
				EarthView::World::Core::CMutex mCreatorMapMutex;
				CTextAreaEventObject* mpFontEventObject;
				friend class CTextAreaEventObject;
				CInstanceManagerListenerTextArea* mpListener;
			};	

		}
	}
}

#endif

