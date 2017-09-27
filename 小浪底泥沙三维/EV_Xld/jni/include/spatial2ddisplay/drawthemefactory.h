#ifndef EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWTHEMEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWTHEMEFACTORY_H

#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"
#include "spatial2ddisplay/drawtheme.h"

using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				class EV_SPATIAL2DDISPLAY_DLL CDrawThemeFactory:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					CDrawThemeFactory();
					virtual ~CDrawThemeFactory();
				ev_private:
					CDrawThemeFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CDrawThemeFactory );
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

					virtual CDrawTheme* create(const EVString& key) ;

					void destroy(CDrawTheme* obj) ;
					void initialize();
				protected:
					/* �������أ���ʼ��֧�ֹؼ��� */
					virtual void initialize_vir();
					void setKey(const EVString& key);
				private:
					class Impl;
					Impl* mpImpl;
				};

				class EV_SPATIAL2DDISPLAY_DLL CDrawThemeFactoryRegistry
				{
				public:
					CDrawThemeFactoryRegistry();
					virtual ~CDrawThemeFactoryRegistry();
ev_private:
					CDrawThemeFactoryRegistry(EarthView::World::Core::CNameValuePairList* pList );
				public:
					int registryFactory(CDrawThemeFactory* factory);
					CDrawThemeFactory* getFactory(const EVString& key) const;
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