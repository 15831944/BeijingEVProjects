#ifndef EARTHVIEW_WORLD_SPATIAL_WMSCHAETTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_WMSCHAETTHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
/*				����˵��
				colorMode(��ͼ��ɫģʽ):
				//����
				SunnyDay(1),
				//����
				Nightfall(2),
				//����
				DayTime(3),
				//����
				Misty(4),
				//��ҹ
				Night(5);

				displayMode(��ͼ��ʾģʽ):
				//δ֪
				Unknown(0),
				//������ʾ
				Base(1), 
				//��׼��ʾ
				Stand(2), 
				//ȫ����ʾ
				All(3);

				symbolMode(��ͼ������ʽ):
				//�򵥷���
				SimpleSymbol
				//��ͳ����
				Tradition

				isobath(��ͼ��ȫ������):
				//5��
				FiveMeter(5),
				//ʮ��
				TenMeter(10),
				//��ʮ��
				TwentyMeter(20),
				//��ʮ��
				ThirtyMeter(30);

				annotationMode(��ͼע����ʽ):
				// Ӣ��
				English(true),
				// ����
				Chinese(false);
*/

				/// <summary>
				/// WMSͼ��Ĭ��ר��ͼר��ͼ��
				/// </summary>
				class EV_2DWMS_DLL CEVWMSChartTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					CEVWMSChartTheme();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					~CEVWMSChartTheme();
					/// <summary>
					/// ������ʾģʽ
					/// </summary>
					/// <returns></returns>
					virtual ev_void setDisplayMode(const EVString& displayMode);
					/// <summary>
					/// ��ȡ��ʾģʽ
					/// </summary>
					/// <returns></returns>
					virtual EVString getDisplayMode() const;
					/// <summary>
					/// ������ɫģʽ
					/// </summary>
					/// <returns></returns>
					virtual ev_void setColorMode(const EVString& colorMode);
					/// <summary>
					/// ��ȡ��ɫģʽ
					/// </summary>
					/// <returns></returns>
					virtual EVString getColorMode() const;
					/// <summary>
					/// ���÷���ģʽ
					/// </summary>
					/// <returns></returns>
					virtual ev_void setSymbolMode(const EVString& symbolMode);
					/// <summary>
					/// ��ȡ����ģʽ
					/// </summary>
					/// <returns></returns>
					virtual EVString getSymbolMode() const;
					/// <summary>
					/// ���ð�ȫ������
					/// </summary>
					/// <returns></returns>
					virtual ev_void setIsoBath(const EVString& isoBath);
					/// <summary>
					/// ��ȡ��ȫ�����߲���
					/// </summary>
					/// <returns></returns>
					virtual EVString getIsoBath() const;
					/// <summary>
					/// ����ע������
					/// </summary>
					/// <returns></returns>
					virtual ev_void setAnnoMode(const EVString& annoMode);
					/// <summary>
					/// ��ȡע������
					/// </summary>
					/// <returns></returns>
					virtual EVString getAnnoMode() const;
					/// <summary>
					/// ����ר��ͼ
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ظ��Ƶ�ר��ͼ</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// �Ƿ���ָ��ר��ͼ��ͬ
					/// </summary>
					/// <param name="theme">ָ����ר��ͼ</param>
					/// <returns>����Ƿ���true�����򷵻�false</returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
					/// <summary>
					/// ��ר��ͼ�������
					/// </summary>
					/// <param name="stream">�����������</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;
					ev_internal:
					/// <summary>
					/// �������л�ר��ͼ
					/// </summary>
					/// <param name="stream">�����������</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				public:
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
					CEVWMSChartTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVString m_DisplayMode;
					EVString m_ColorMode;
					EVString m_SymbolMode;
					EVString m_IsoBath;
					EVString m_AnnoMode;
				};
}}}}
#endif