#ifndef EARTHVIEW_WORLD_SPATIAL_THEME_THEMEFACTORY_2_H
#define EARTHVIEW_WORLD_SPATIAL_THEME_THEMEFACTORY_2_H

#include "core/memoryallocatedobject.h"
#include "spatialthemeconfig.h"
#include "core/datastream.h"
#include "core/string_array.h"
#include "spatialinterface/itheme.h"

using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
            namespace Theme{
				/// <summary>
				/// CTheme��Ĵ�������
				/// �ṩ�������£�
				/// ��ȡר��ͼ����ָ�롢����ר��ͼ����������ר��ͼ
				/// ͨ���������ָ�ר��ͼ��Ϣ��ͨ��xmlElement�ָ�ר��ͼ��Ϣ
				/// </summary>
				class EV_SPATIALTHEME_DLL CThemeFactory2:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// ��ȡ֧�ֵ�ר��ͼ�ؼ���
					/// </summary>
					/// <returns>�ؼ����б�</returns>
					CStringArray getKeys() const;
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
					virtual EarthView::World::Spatial::Theme::ITheme* create( const EVString& key);
					/// <summary>
					/// ͨ���������ָ�ר��ͼ��Ϣ
					/// </summary>
					/// <param name="stream">������</param>
					/// <returns>����</returns>
					virtual EarthView::World::Spatial::Theme::ITheme* createThemeFromStream( EarthView::World::Core::CDataStream& stream );

					/// <summary>
					/// ͨ��xmlElement�ָ�ר��ͼ��Ϣ
					/// </summary>
					/// <param name="xmlText">xmlElement�ַ���</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Theme::ITheme* createThemeFromXmlElement(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ����ר��ͼ
					/// </summary>
					/// <param name="pSymbol">ר��ͼ����</param>
					/// <returns></returns>
					ev_void destroyTheme(EarthView::World::Spatial::Theme::ITheme* pTheme);
				public:
					/// <summary>
					/// Ĭ����������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CThemeFactory2();
				ev_private:
					CThemeFactory2( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CThemeFactory2();
				public:
					void initialize();
				protected:
					/* �������أ���ʼ��֧�ֹؼ��� */
					virtual void initialize_vir();
					void setKey(const EVString& key);
				private:
					C_DISABLE_COPY(CThemeFactory2);
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};

				class EV_SPATIALTHEME_DLL CThemeFactoryRegistry
				{
				public:
					CThemeFactoryRegistry();
					virtual ~CThemeFactoryRegistry();
ev_private:
					CThemeFactoryRegistry(EarthView::World::Core::CNameValuePairList* pList );
				public:
					int registryFactory(CThemeFactory2* factory);
					CThemeFactory2* getFactory(const EVString& key) const;
				public:
					class Impl;
				private:
					Impl* mpImpl;
				};
			}
		}
	}
}
#endif
