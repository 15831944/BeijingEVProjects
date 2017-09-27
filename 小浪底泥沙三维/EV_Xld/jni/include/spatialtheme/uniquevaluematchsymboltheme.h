#ifndef EARTHVIEW_SPATIAL2D_DISPLAY_UNIQUEVALUEMATCHSYMBOLTHEME_H
#define EARTHVIEW_SPATIAL2D_DISPLAY_UNIQUEVALUEMATCHSYMBOLTHEME_H

#include "spatialtheme/spatialthemeconfig.h"
#include "spatialinterface/iuniquetheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				///<summary>
				///ƥ����ſ��з��ŵĵ�ֵר��ͼ
				///</summary>
				class EV_SPATIALTHEME_DLL CUniqueValueMatchSymbolTheme
					:public EarthView::World::Spatial::Theme::IUniqueTheme
				{
				public:
					///<summary>
					///Ĭ�Ϲ��캯��
					///</summary>
					CUniqueValueMatchSymbolTheme();
					///<summary>
					///��������
					///</summary>
					~CUniqueValueMatchSymbolTheme();

					///<summary>
					///ȡר��ͼ����
					///</summary>
					EarthView::World::Spatial::Theme::EVThemeType getType() const;
					/// <summary>
					/// ��ȡ����
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����ַ���</returns>
					EVString getCaption() const;
					/// <summary>
					/// ���ñ���
					/// </summary>
					/// <param name="caption">�����ַ���</param>
					/// <returns></returns>
					ev_void setCaption( _in const EVString &caption );

					/// <summary>
					/// ��ȡ�Ƿ�ʹ��Ĭ�Ϸ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool useDefaultSymbol() const;
					/// <summary>
					/// �����Ƿ�ʹ��Ĭ�Ϸ���
					/// </summary>
					/// <param name="usable">boolֵ</param>
					/// <returns></returns>
					ev_void setUseDefaultSymbol( _in ev_bool usable);

					/// <summary>
					/// ��ȡĬ�Ϸ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>����</returns>
					EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const;
					/// <summary>
					/// ����Ĭ�Ϸ���
					/// </summary>
					/// <param name="symbol">����</param>
					/// <returns></returns>
					ev_void setDefaultSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol);

					/// <summary>
					/// ��ȡĬ�ϱ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����ַ���</returns>
					EVString getDefaultCaption() const;
					/// <summary>
					/// ����Ĭ�ϱ���
					/// </summary>
					/// <param name="defaultCaption">�����ַ���</param>
					/// <returns></returns>
					ev_void setDefaultCaption( _in const EVString &defaultCaption );

					/// <summary>
					/// ���copyר�����
					/// </summary>
					/// <param name=""></param>
					/// <returns>ר�����</returns>
					EarthView::World::Spatial::Theme::ITheme * clone() const;

					/// <summary>
					/// ��ȡ��
					/// </summary>
					/// <param name="stream">������</param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// ��Theme����д��XMLԪ��
					/// </summary>
					/// <param name="xml">XML�ַ���</param>
					/// <returns></returns>
					EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// ��XMLԪ���лָ�Theme����
					/// </summary>
					/// <param name="xml">XML�ַ���</param>
					/// <returns></returns>
					ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// ��ȡ�ֶ�ֵ
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ֶ�ֵ</returns>
					EVString getFieldString() const;
					/// <summary>
					/// �����ֶ�ֵ
					/// </summary>
					/// <param name="field">�ֶ�ֵ</param>
					/// <returns></returns>
					ev_void setFieldString( _in const EVString &field );

					/// <summary>
					/// ��ȡָ���ӱ���
					/// </summary>
					/// <param name="index">�ӱ������к�</param>
					/// <returns>�ӱ����ַ���</returns>
					EVString getSubCaption( _in ev_uint32 index ) const;
					/// <summary>
					/// ����ָ���ӱ���
					/// </summary>
					/// <param name="index">�ӱ������к�</param>
					/// <param name="subCaption">�ӱ����ַ���</param>
					/// <returns></returns>
					ev_void setSubCaption( _in ev_uint32 index,_in const EVString &subCaption );
					/// <summary>
					/// ��ȡָ��ר��ͼ�ķ��Ŷ���
					/// </summary>
					/// <param name="value">ר��ͼֵ</param>
					/// <returns>���Ŷ���</returns>
					EarthView::World::Spatial::Display::ISymbol * getSymbol( _in const EVString &value ) const;
					/// <summary>
					/// ��ȡָ��ר��ͼ�ķ��Ŷ���
					/// </summary>
					/// <param name="index">ר��ͼ������</param>
					/// <returns>���Ŷ���</returns>
					EarthView::World::Spatial::Display::ISymbol * getSymbol( _in ev_int32 index ) const;
					/// <summary>
					/// ����ָ��ר��ͼ�ķ��Ŷ���
					/// </summary>
					/// <param name="index">����</param>
					/// <param name="symbol">���Ŷ���</param>
					/// <returns></returns>
					ev_void setSymbol( _in const ev_int32 index, _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// ���ֵ
					/// </summary>
					/// <param name="value">�ַ���ֵ</param>
					/// <param name="caption">�����ַ���</param>
					/// <param name="symbol">����</param>
					/// <returns></returns>
					ev_void addValue( _in const EVString &value, _in const EVString &caption, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// �Ƴ�ֵ
					/// </summary>
					/// <param name="index">����</param>
					/// <returns></returns>
					ev_void removeValue( _in const ev_int32 index );
					/// <summary>
					/// �Ƴ�����ֵ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeAll();

					/// <summary>
					/// ��ȡֵ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>����</returns>
					ev_uint32 getValueCount() const;
					/// <summary>
					/// ��ȡֵ
					/// </summary>
					/// <param name="index">����</param>
					/// <returns>�ַ���ֵ</returns>
					EVString getValue( _in ev_uint32 index ) const;

					/// <summary>
					/// �Ƿ����ֵ
					/// </summary>
					/// <param name="value">�ַ���ֵ</param>
					/// <returns>boolֵ</returns>
					ev_bool containsValue( _in const EVString &value ) const;

					/// <summary>
					/// �ж�����Theme�Ƿ�������ͬ
					/// </summary>
					/// <param name="theme">Theme����</param>
					/// <returns></returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);

					///<summary>
					///��ȡѡ�еķ���
					///<summary>
					EVString getCurrentStyle();

					///<summary>
					///���õ�ǰѡ�еķ���
					///</summary>
					ev_void setCurrentStyle(const EVString & cStyle);
ev_internal:
					/// <summary>
					/// ���������ָ�Color����
					/// </summary>
					/// <param name="stream">������</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					CUniqueValueMatchSymbolTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CUniqueValueMatchSymbolTheme )

					ev_bool m_bUseDefaultSymbol;
					EVString m_currentStyle;
					EarthView::World::Spatial::Display::ISymbol *m_pDefaultSymbol;
					EVString m_szDefalutCaption;
					EVString m_szCaption;
					EVString m_szFieldName;
					ev_vector<EarthView::World::Spatial::Display::ISymbol*>*m_vSymbol;
					ev_vector<EVString>*m_vLabel;
					ev_vector<EVString>*m_vValue;
				};
			}
		}
	}
}
#endif