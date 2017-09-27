#ifndef EARTHVIEW_WORLD_SPATIAL_DRAESERVERLAYERTHEMEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_DRAESERVERLAYERTHEMEFACTORY_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "core/string_array.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// WMSͼ��ר��ͼ����
				/// </summary>
				class EV_2DWMS_DLL CDrawServerLayerThemeFactory : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// ��ȡ֧�ֵ�ר��ͼ�ؼ���
					/// </summary>
					/// <returns>�ؼ����б�</returns>
					EarthView::World::Core::CStringArray getKeys() const;
					/// <summary>
					/// �ж��Ƿ�֧�ָùؼ��ֵ�ר��ͼ����
					/// </summary>
					/// <param name="key">�ؼ���</param>
					/// <returns>֧�ַ���true����֧�ַ���false</returns>
					ev_bool isSupported(const EVString& key) const;
					/// <summary>
					/// ͨ���ؼ��ִ���ר��ͼ
					/// </summary>
					/// <param name="key">�ؼ���</param>
					/// <returns>ר��ͼ����ָ��</returns>
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* create( const EVString& key);
					/// <summary>
					/// ͨ���������ָ�ר��ͼ��Ϣ
					/// </summary>
					/// <param name="stream">������</param>
					/// <returns>����</returns>
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createRenderFromStream( EarthView::World::Core::CDataStream& stream );

					/// <summary>
					/// ͨ��xmlElement�ָ�ר��ͼ��Ϣ
					/// </summary>
					/// <param name="xmlText">xmlElement�ַ���</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createThemeFromXmlElement(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ����ר��ͼ
					/// </summary>
					/// <param name="pSymbol">ר��ͼ����</param>
					/// <returns></returns>
					ev_void destroyRender(EarthView::World::Spatial::Display::CDrawServerLayerTheme* pRender);
				public:
					/// <summary>
					/// Ĭ����������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CDrawServerLayerThemeFactory();
				ev_private:
					CDrawServerLayerThemeFactory( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawServerLayerThemeFactory();
				public:
					void initialize();
				protected:
					/* �������أ���ʼ��֧�ֹؼ��� */
					virtual void initialize_vir();
					void setKey(const EVString& key);
				private:
					C_DISABLE_COPY(CDrawServerLayerThemeFactory);
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};

				class EV_2DWMS_DLL CDrawServerLayerThemeFactoryRegistry
				{
				public:
					CDrawServerLayerThemeFactoryRegistry();
					virtual ~CDrawServerLayerThemeFactoryRegistry();
ev_private:
					CDrawServerLayerThemeFactoryRegistry(EarthView::World::Core::CNameValuePairList* pList );
				public:
					int registryFactory(CDrawServerLayerThemeFactory* factory);
					CDrawServerLayerThemeFactory* getFactory(const EVString& key) const;
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};
}}}}

#endif