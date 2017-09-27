#ifndef EARTHVIEW_WORLD_SPATIAL_EVWMSVECTORTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_EVWMSVECTORTHEME_H
#include "spatial2dserver/config.h"
#include "spatialinterface/itheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				class EV_2DWMS_DLL CEVWMSVectorTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				public:
					enum EVWMSRequestType
					{
						EV_RT_RequestByMap = 0,
						EV_RT_RequestByTile = 1
					};
				public:
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <returns></returns>
					CEVWMSVectorTheme();
					/// <summary>
					/// ��������
					/// </summary>
					/// <returns></returns>
					~CEVWMSVectorTheme();
					/// <summary>
					/// ����ͼ�㱳��ɫ
					/// </summary>
					/// <param name="r">rֵ</param>
					/// <param name="g">gֵ</param>
					/// <param name="b">bֵ</param>
					/// <param name="trans">�Ƿ�͸��</param>
					/// <returns></returns>
					void setBackColor(ev_int32 r, ev_int32 g, ev_int32 b,ev_bool trans);
					/// <summary>
					/// ��ȡͼ�㱳��ɫ
					/// </summary>
					/// <param name="r">rֵ</param>
					/// <param name="g">gֵ</param>
					/// <param name="b">bֵ</param>
					/// <param name="trans">�Ƿ�͸��</param>
					/// <returns></returns>
					void getBackColor(ev_int32 &r, ev_int32 &g, ev_int32 &b,ev_bool &trans);					
					/// <summary>
					/// ����������ʽ
					/// </summary>
					/// <param name="style">������ʽ</param>
					/// <returns></returns>
					void setRequestStyle(EVString style);
					/// <summary>
					/// ��ȡ������ʽ
					/// </summary>
					/// <returns></returns>
					EVString getRequestStyle();					
					/// <summary>
					/// ���������ʽ
					/// </summary>
					/// <param name="style">�����ʽ</param>
					/// <returns></returns>
					void setRequestFormat(EVString format);
					/// <summary>
					/// ��ȡ�����ʽ
					/// </summary>
					/// <returns></returns>
					EVString getRequestFormat();

					EarthView::World::Spatial::Theme::ITheme * clone() const;
					/// <summary>
					/// �Ƿ���ָ��ר��ͼ��ͬ
					/// </summary>
					/// <param name="theme">ָ����ר��ͼ</param>
					/// <returns>����Ƿ���true�����򷵻�false</returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
					/// <summary>
					/// ��EarthView::World::Core::CXmlElement��ȡר��ͼ
					/// </summary>
					/// <param name="element">ָ����EarthView::World::Core::CXmlElement</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ��ר��ͼ���ΪEarthView::World::Core::CXmlElement
					/// </summary>
					/// <param name=""></param>
					/// <returns>����EarthView::World::Core::CXmlElement</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// �������л�ר��ͼ
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
					virtual ev_void setRequestType(EVWMSRequestType requestType);
					virtual EVWMSRequestType getRequestType();
ev_private:
					CEVWMSVectorTheme( EarthView::World::Core::CNameValuePairList *pList );
				private:
					EVWMSRequestType m_RequestType;
					EVString  m_RequestStyle;
					EVString  m_RequestFormat;
					ev_int32  m_Color_R;
					ev_int32  m_Color_G;
					ev_int32  m_Color_B;
					ev_bool   m_Trans;
				};
}}}}
#endif