#ifndef EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWUNIQUEVALUEMATCHSYMBOLTHEME_H
#define EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWUNIQUEVALUEMATCHSYMBOLTHEME_H
#include "spatial2ddisplay/drawtheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				///<summary>
				///ƥ����ſ��з��ŵĵ�ֵר��ͼ����Ⱦ
				///</summary>
				class EV_SPATIAL2DDISPLAY_DLL CDrawUniqueValueMatchSymbolTheme:
					public EarthView::World::Spatial2D::Renderer::CDrawTheme
				{
				public:
					CDrawUniqueValueMatchSymbolTheme();
					~CDrawUniqueValueMatchSymbolTheme();

					/// <summary>
					/// ��ʼ����ר��ͼ
					/// </summary>
					/// <param name="display">��ʾ��</param>
					/// <param name="theme">ר��ͼ</param>
					/// <returns></returns>
					ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *ref_display,
												_in EarthView::World::Spatial::Theme::ITheme *ref_theme );
					/// <summary>
					/// ����ר��ͼ
					/// </summary>
					/// <param name="feature">����Ҫ��</param>
					/// <param name="filter">��ѯ����</param>
					/// <returns></returns>
					ev_bool draw( _in EarthView::World::Spatial::GeoDataset::IFeatureClass *featureClass,
											EarthView::World::Spatial::GeoDataset::IQueryFilter* filter );
					/// <summary>
					/// �������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void endDraw();
ev_private:
					CDrawUniqueValueMatchSymbolTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CDrawUniqueValueMatchSymbolTheme );
				};
			}
		}
	}
}
#endif
