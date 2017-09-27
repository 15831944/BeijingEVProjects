#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISTATISTICSTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISTATISTICSTHEME_H

#include "itheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				enum EVStatisticsThemeType
				{
					STT_Unkown = 0,
					STT_Pie = 1,
					STT_Bar = 2,
					STT_Stacked = 3,
					STT_3DPie = 4,
					STT_3DBar = 5,
					STT_3DStacked = 6
				};
				enum EVPieSizePolicy
				{
					PSP_FixSize = 0,
					PSP_AdaptToSum = 1,
					PSP_AdaptToField = 2
				};
				/// <summary>
				/// ͳ������ר��ͼ����
				/// </summary>
				class EV_INTERFACE_DLL IStatisticsTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				protected:
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					IStatisticsTheme();
				public:
					/// <summary>
					/// Ĭ����������
					/// </summary>
					~IStatisticsTheme();

				public:
					/// <summary>
					/// ����ֶ�
					/// </summary>
					/// <param name="field">�ֶ�</param>
					/// <param name="symbol">����</param>
					/// <returns></returns>
					virtual ev_void addField( _in const EVString &field, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// ɾ���ֶ�
					/// </summary>
					/// <param name="field">�ֶ�</param>
					/// <returns></returns>
					virtual ev_void deleteField( _in const EVString &field );
					/// <summary>
					/// ɾ�������ֶ�
					/// </summary>
					/// <returns></returns>
					virtual ev_void deleteAllField();
					/// <summary>
					/// ��ȡ�ֶθ���
					/// </summary>
					/// <returns>�����ֶθ���</returns>
					virtual ev_uint32 getFieldCount() const;
					/// <summary>
					///����������ȡ�ֶ���
					/// </summary>
					/// <param name="index">����λ��</param>
					/// <returns>�����ֶ���</returns>
					virtual EVString getFieldName( _in ev_uint32 index ) const;
					/// <summary>
					///�ƶ��ֶ�λ��
					/// </summary>
					/// <param name="oldIndex">ԭʼλ��</param>
					/// <param name="newIndex">Ŀ��λ��</param>
					/// <returns></returns>
					virtual ev_void moveField( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );
					/// <summary>
					///��ȡ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getBackground() const;
					/*virtual EarthView::World::Spatial::Display::ISymbol * getBackground();*/
					/// <summary>
					///���ñ�������
					/// </summary>
					/// <param name="symbol">��������</param>
					/// <returns></returns>
					virtual ev_void setBackground( _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					///��ȡָ���ֶη���
					/// </summary>
					/// <param name="field">�ֶ�</param>
					/// <returns>���ط���</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getFieldSymbol( _in const EVString &field ) const;
					/// <summary>
					///��ȡָ���ֶη���
					/// </summary>
					/// <param name="field">�ֶ�</param>
					/// <returns>���ط���</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getFieldSymbol( _in const EVString &field );
					/// <summary>
					///����ָ���ֶη���
					/// </summary>
					/// <param name="field">�ֶ�</param>
					/// <param name="symbol">����</param>
					/// <returns></returns>
					virtual ev_void setFieldSymbol( _in const EVString &field, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					///��ȡͳ������
					/// </summary>
					/// <returns>����ͳ������</returns>
					virtual EarthView::World::Spatial::Theme::EVStatisticsThemeType getStatisticsType() const;
					/// <summary>
					///����ͳ������
					/// </summary>
					/// <param name="type">����</param>
					/// <returns></returns>
					virtual ev_void setStatisticsType( EarthView::World::Spatial::Theme::EVStatisticsThemeType type );
					/// <summary>
					///��ȡͳ�Ʒ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ط���</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getStatisticsSymbol();
					/// <summary>
					///��ȡ��ͼ��С����
					/// </summary>
					/// <param name=""></param>
					/// <returns>��ͼ��С����</returns>
					virtual EarthView::World::Spatial::Theme::EVPieSizePolicy getPieSizePolicy() const;
					/// <summary>
					///���ñ�ͼ��С����
					/// </summary>
					/// <param name="policy">��ͼ��С����</param>
					/// <returns></returns>
					virtual ev_void setPieSizePolicy( _in EarthView::World::Spatial::Theme::EVPieSizePolicy policy );
					/// <summary>
					///��ȡ�����ֶ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�����ֶ���</returns>
					virtual EVString getProportionField() const;
					/// <summary>
					///���ñ����ֶ�
					/// </summary>
					/// <param name="field">�����ֶ�</param>
					/// <returns></returns>
					virtual ev_void setProportionField( _in const EVString & field  );

				ev_private:
					IStatisticsTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IStatisticsTheme )
				};
			}
		}
	}
}
#endif
