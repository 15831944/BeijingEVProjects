#ifndef EARTHVIEW_WORLD_SPATIAL_WMTSIMAGETHEME_H
#define EARTHVIEW_WORLD_SPATIAL_WMTSIMAGETHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// WMSͼ��Ĭ��ר��ͼר��ͼ��
				/// </summary>
				class EV_2DWMS_DLL CEVWMTSImageTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					CEVWMTSImageTheme();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					~CEVWMTSImageTheme();
					/// <summary>
					/// ����ר��ͼ
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ظ��Ƶ�ר��ͼ</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// ��ר��ͼ���ΪEarthView::World::Core::CXmlElement
					/// </summary>
					/// <param name=""></param>
					/// <returns>����EarthView::World::Core::CXmlElement</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// ��EarthView::World::Core::CXmlElement��ȡר��ͼ
					/// </summary>
					/// <param name="element">ָ����EarthView::World::Core::CXmlElement</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);
				ev_private:
					CEVWMTSImageTheme( EarthView::World::Core::CNameValuePairList *pList );
				};
}}}}
#endif