#ifndef EARTHVIEW_WORLD_SPATIAL_WMTSOGCTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_WMTSOGCTHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// WMSͼ��Ĭ��ר��ͼר��ͼ��
				/// </summary>
				class EV_2DWMS_DLL COGCWMTSTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					COGCWMTSTheme();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					~COGCWMTSTheme();
					/// <summary>
					/// ��ȡ������ʽ
					/// </summary>
					/// <returns></returns>
					EVString getRequestStyle();
					/// <summary>
					/// ����������ʽ
					/// </summary>
					/// <param name="style">������ʽ</param>
					/// <returns></returns>
					void setRequestStyle(EVString style);
					/// <summary>
					/// ��ȡ�����ʽ
					/// </summary>
					/// <returns></returns>
					EVString getRequestFormat();
					/// <summary>
					/// ���������ʽ
					/// </summary>
					/// <param name="style">�����ʽ</param>
					/// <returns></returns>
					void setRequestFormat(EVString format);
					/// <summary>
					/// ��ȡ������Ƭ��
					/// </summary>
					/// <returns></returns>
					EVString getRequestTileSet();
					/// <summary>
					/// ����������Ƭ��
					/// </summary>
					/// <param name="style">������ʽ</param>
					/// <returns></returns>
					void setRequestTileSet(EVString tileSet);
					EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// �Ƿ���ָ��ר��ͼ��ͬ
					/// </summary>
					/// <param name="theme">ָ����ר��ͼ</param>
					/// <returns>����Ƿ���true�����򷵻�false</returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
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
				ev_private:
					COGCWMTSTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVString m_RequestStyle;
					EVString m_RequestFormat;
					EVString m_RequestTileSet;
				};
}}}}
#endif