#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_IMARKNORTHARROW_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_IMARKNORTHARROW_H

#include "core/xml.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/imapframe.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/imapsurrround.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ibitmap.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// ָ��������
				/// </summary>
				enum EVNorthArrowType
				{
					NAT_DoubleTriangle		= 0,	// ˫������
					NAT_Prismatic		    = 1,	// ����
					NAT_FourAngleStar	    = 2,	// �Ľ���
					NAT_EightAngleStar		= 3,	// �˽���
					NAT_SingleArrow_Line	= 4,	// ��״��ͷ
					NAT_SingleArrow_Solid	= 5,	// ʵ�ļ�ͷ
					NAT_Fan_Line		    = 6,	// ��״����
					NAT_Fan_Solid			= 7,	// ʵ�ķ���
					NAT_Compass_Line		= 8,	// ��״����
					NAT_Compass_Solid		= 9,	// ʵ������
					NAT_FourArrow_Line		= 10,	// ��״�ĸ���ͷ
					NAT_FourArrow_Solid		= 11,	// ʵ���ĸ���ͷ
					NAT_LibMarkSymbol		= 12,	// ��ָ����
				};

				class EV_INTERFACE_DLL IMarkNorthArrow : public IMapSurround
				{
				public:	
					/// <summary>
					/// �鹹����
					/// </summary>
					/// <param name="type"></param>
					/// <returns></returns>
					virtual ~IMarkNorthArrow();
				public:

					/// <summary>
					/// ��ȡԪ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>Ԫ������</returns>
					virtual EVElementType getElementType() const;

					/// <summary>
					/// ����ָ��������
					/// </summary>
					/// <param name="type">ָ��������</param>
					/// <returns></returns>
					virtual ev_void setType(const EVNorthArrowType type);

					/// <summary>
					/// ��ȡָ��������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ָ��������</returns>
					virtual EVNorthArrowType getType() const;
					/// <summary>
					/// ����ָ������
					/// </summary>
					/// <param name="symbol">ָ������</param>
					/// <returns></returns>
					virtual ev_void setMarkerSymbol(EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// ��ȡָ������
					/// </summary>
					/// <param name=""></param>
					/// <returns>ָ������</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getMarkerSymbol() const;

					/// <summary>
					///��ȡָ����߿�Χ
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>ָ����߿�Χ</returns>
					virtual  EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///����ָ����߿�Χ
					/// </summary>
					/// <param name="pEnvelope">ָ����߿�Χ</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					///��ȡ��ͼ��ǰ�Ƕ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>symbol</returns>
 					virtual ev_real64 getMapAngle() const;

					/// <summary>
					///��ȡָ����У���Ƕ�
					/// </summary>
					/// <param name=""></param>
					/// <returns>У���Ƕ�</returns>
					virtual ev_real64 getCorrectionAngle() const;

					/// <summary>
					/// ����ָ����У���Ƕ�
					/// </summary>
					/// <param name="dAngle">У���Ƕ�</param>
					/// <returns></returns>
					virtual ev_void setCorrectionAngle(const ev_real64 dAngle);

					/// <summary>
					/// ���ñ����߶�Ӧ�����ݿ�
					/// </summary>
					/// <param name="pMapFrame">�����߶�Ӧ�����ݿ�</param>
					/// <returns></returns>
					virtual ev_void setMapFrame(const EarthView::World::Spatial::Carto::IMapFrame *pMapFrame);

					/// <summary>
					/// ����ָ����Ĵ�С
					/// </summary>
					/// <param name="size">��С</param>
					/// <returns></returns>
					virtual ev_void setSize(const ev_real64 size);
					/// <summary>
					/// ��ȡָ����Ĵ�С
					/// </summary>
					/// <param name=""></param>
					/// <returns>���ش�С</returns>
					virtual ev_real64 getSize() const;

					/// <summary>
					/// ����ָ������ɫ
					/// </summary>
					/// <param name="pColor">ָ������ɫ</param>
					/// <returns></returns>
					virtual ev_void setColor(const EarthView::World::Spatial::Display::IColor *pColor);

					/// <summary>
					/// ��ȡָ������ɫ
					/// </summary>
					/// <param name=""></param>
					/// <returns>ָ������ɫ</returns>
					virtual EarthView::World::Spatial::Display::IColor* getColor() const;

					/// <summary>
					/// ��ȡԤ��ͼ��
					/// </summary>
					/// <param name="pPageDisplay">����ͼ���豸</param>
					/// <returns>Ԥ��ͼ��</returns>
					virtual EarthView::World::Display::IBitmap* getPreviw(EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay);

					/// <summary>
					/// ���ñ�����ɫ
					/// </summary>
					/// <param name="symbol">������ɫ</param>
					/// <returns></returns>
					virtual ev_void setBackgroundColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// ��ȡ������ɫ
					/// </summary>
					/// <param name=""></param>
					/// <returns>������ɫ</returns>
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const;

					/// <summary>
					/// �����Ƿ���Ʊ���ɫ
					/// </summary>
					/// <param name="bDraw">�Ƿ���Ʊ���ɫ</param>
					/// <returns></returns>
					virtual ev_void setDrawBackground(bool bDraw);

					/// <summary>
					/// ��ȡ�Ƿ���Ʊ���ɫ
					/// </summary>
					/// <param name=""></param>
					/// <returns>�Ƿ���Ʊ���ɫ</returns>
					virtual ev_bool isDrawBackground() const;

					/// <summary>
					/// ������Ӱ��ɫ
					/// </summary>
					/// <param name="symbol">��Ӱ��ɫ</param>
					/// <returns></returns>
					virtual ev_void setShadowColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// ��ȡ��Ӱ��ɫ
					/// </summary>
					/// <param name=""></param>
					/// <returns>��Ӱ��ɫ</returns>
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const;

					/// <summary>
					/// �����Ƿ������Ӱ
					/// </summary>
					/// <param name="bDraw">�Ƿ������Ӱ</param>
					/// <returns></returns>
					virtual ev_void setDrawShadow(bool bDraw);

					/// <summary>
					/// ��ȡ�Ƿ������Ӱ
					/// </summary>
					/// <param name=""></param>
					/// <returns>�Ƿ������Ӱ</returns>
					virtual ev_bool isDrawShadow() const;

					/// <summary>
					/// ���ñ߿���
					/// </summary>
					/// <param name="pSymbol">�߿���</param>
					/// <returns></returns>
					virtual ev_void setFrameSymbol( const EarthView::World::Spatial::Display::ISymbol* pSymbol);

					/// <summary>
					/// ��ȡ�߿���
					/// </summary>
					/// <param name="pSymbol"></param>
					/// <returns>�߿���</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const;

					/// <summary>
					/// �����Ƿ���Ʊ߿�
					/// </summary>
					/// <param name=" bDraw">�Ƿ���Ʊ߿�</param>
					/// <returns></returns>
					virtual ev_void setDrawFrame(const ev_bool bDraw);

					/// <summary>
					/// ��ȡ�Ƿ���Ʊ߿�
					/// </summary>
					/// <param name=""></param>
					/// <returns>�Ƿ���Ʊ߿�</returns>
					virtual ev_bool isDrawFrame() const;
					
					/// <summary>
					/// ����Ԫ��׼��
					/// </summary>
					/// <param name="pDisplay">ָ���豸</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// ����Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void draw();

					/// <summary>
					/// ���ƽ�����������
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void drawOver();

					/// <summary>
					/// �ж�ָ�����Ƿ�ѡ��
					/// </summary>
					/// <param name="pDisplay"></param>
					/// <returns>����Ǳ�ѡ��״̬������true,���򷵻�false</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// ����ָ�����Ƿ�ѡ��
					/// </summary>
					/// <param name="pDisplay">�Ƿ�ѡ��</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool b);

					/// <summary>
					/// ��¡Ԫ��
					/// </summary>
					/// <param name=""></param>
					/// <returns>��ͼԪ��</returns>
					virtual EarthView::World::Spatial::Carto::IElement *clone() const;

					/// <summary>
					/// ����ͼ�����������ķ�ʽ����
					/// </summary>
					/// <param name="stream">��������</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
				
					/// <summary>
					/// ����ͼ��������XML�ķ�ʽ����
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;
					/// <summary>
					/// ��xmlԪ���лָ�ָ���������
					/// </summary>
					/// <param name="element">xmlԪ��</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// ��ָ��������õ�����xml
					/// </summary>
					/// <param name=""></param>
					/// <returns>xmlԪ��</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
	ev_internal:
					virtual ev_void fromStream(_in EarthView::World::Core::CDataStream& stream );	
				protected:
					IMarkNorthArrow();
	ev_private:
					IMarkNorthArrow(EarthView::World::Core::CNameValuePairList *pList );
				private:
					IMarkNorthArrow(IMarkNorthArrow & obj);
					EarthView::World::Spatial::Carto::IMapFrame* m_pMapFrame;
				};
			}
		}
	}
}
#endif