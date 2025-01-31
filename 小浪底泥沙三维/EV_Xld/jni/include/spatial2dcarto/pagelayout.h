﻿#ifndef EARTHVIEW_WORLD_CARTO_PAGELAYOUT_H
#define EARTHVIEW_WORLD_CARTO_PAGELAYOUT_H

#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/ipagelayout.h"
#include "spatial2dcarto/page.h"
#include "spatial2dcarto/cartooutput2d.h"
#include "spatialinterface/ibitmap.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/imapframe.h"
#include "spatialinterface/imarkernortharrow.h"
#include "spatialinterface/iscalebar.h"
#include "spatialinterface/ilegend.h"
#include "spatialinterface/imaptitle.h"
#include "spatialinterface/isquaregrid.h"
#include "spatialobject/geometry/rectanglering.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 纸张布局类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL  CPageLayout : public IPageLayout
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPageLayout();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPageLayout(EarthView::World::Spatial::Atlas::IMap *pMap);
					/// <summary>
					/// 虚构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CPageLayout();

					/// <summary>
					/// 获取布局名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>布局名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置布局名称
					/// </summary>
					/// <param name="name">布局名称</param>
					/// <returns></returns>
					virtual ev_void setName(_in const EVString &name );

					/// <summary>
					/// 获取页面纸张
					/// </summary>
					/// <param name=""></param>
					/// <returns>页面纸张</returns>
					virtual IPage* getPage() const;

					/// <summary>
					/// 设置页面纸张
					/// </summary>
					/// <param name="map"></param>
					/// <returns>页面纸张</returns>
					virtual ev_void setPage(IPage* pPage);

					/// <summary>
					///添加元素
					/// </summary>
					/// <param name="element">元素</param>
					/// <returns></returns>
					virtual ev_void addElement(IElement* ref_pElement);

					/// <summary>
					///插入元素
					/// </summary>
					/// <param name="element">插入的位置</param>
					/// <param name="element">元素</param>
					/// <returns></returns>
					virtual ev_void insertElement(ev_int32 nIndex, IElement* ref_pElement);

					/// <summary>
					///获取元素的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素的个数</returns>
					virtual ev_int32 getElementCount() const;

					/// <summary>
					///获取被选中元素的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素的个数</returns>
					virtual ev_int32 getSelectedElementCount() const;

					/// <summary>
					///元素替换
					/// </summary>
					/// <param name="element">原来的元素对象</param>
					/// <param name="element">新的元素对象</param>
					/// <returns></returns>
					virtual ev_bool replaceElement(IElement* pOldElement, IElement* pNewElement);

					/// <summary>
					///元素交换(注：与元素替换区别在于，元素替换是将一个原有的元素替换为新的元素，而元素交换是两个已经存在于容器内的元素相互交换位置)
					/// </summary>
					/// <param name="element">被替换元素索引</param>
					/// <param name="element">替换元素索引</param>
					/// <returns>是否替换成功</returns>
					virtual ev_bool exchangeElement(ev_int32 srcIndex, ev_int32 destIndex);
					
					/// <summary>
					///获取元素
					/// </summary>
					/// <param name="nIndex">元素对象的索引</param>
					/// <returns>元素对象</returns>
					virtual IElement* getElement(ev_int32 nIndex);

					/// <summary>
					////删除元素
					/// </summary>
					/// <param name="element">元素对象</param>
					/// <returns></returns>
					virtual ev_void removeElement(IElement* element);

					/// <summary>
					///删除被选中元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeSelectedElement();		

					/// <summary>
					///删除所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeAllElement();	

					/// <summary>
					///判断是否存在地图框架
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果存在返回true,否则返回false</returns>
					virtual ev_bool isExistMapFrame()  const;	

					/// <summary>
					///判断某个元素是否已经存在
					/// </summary>
					/// <param name="pElement">某个元素</param>
					/// <returns>如果存在返回true,否则返回false</returns>
					virtual ev_bool isExist(IElement* pElement) const;	

					/// <summary>
					///删除框架
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeMapFrame();	

					/// <summary>
					///获取布局图片
					/// </summary>
					/// <param name=""></param>
					/// <returns>布局图片</returns>
					virtual EarthView::World::Display::IBitmap* getLayoutImage();

					/// <summary>
					///重置容器指针
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void reset();

					/// <summary>
					///访问容器中的下一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual IElement* next();

					/// <summary>
					///获取感兴趣的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>感兴趣的范围</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope * getInterestEnvelope() const;

					/// <summary>
					///设置感兴趣的范围
					/// </summary>
					/// <param name="">感兴趣的范围</param>
					/// <returns>边框范围</returns>
					virtual ev_void setInterestEnvelope( _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					///更新边框范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void updateEnvelop();

					/// <summary>
					///获取布局是否为激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否为激活状态</returns>
					virtual ev_bool isActive() const;

					/// <summary>
					///设置布局是否为激活状态
					/// </summary>
					/// <param name="bActive">是否为激活状态</param>
					/// <returns></returns>
					virtual ev_void setActive(ev_bool bActive);

					/// <summary>
					/// 绘制布局准备
					/// </summary>
					/// <param name="pDisplay">指定设备</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// 绘制布局
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void draw();

					/// <summary>
					/// 绘制结束后续处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void drawOver();

					/// <summary>
					/// 克隆元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图元素</returns>
					virtual IPageLayout *clone() const;
					/// <summary>
					/// 克隆元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图元素</returns>
					CCartoOutput2D* getCartoOutput() const;
					/// <summary>
					/// 将地图的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将地图的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;
					/// <summary>
					/// 从xml元素中恢复指北针的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把比例尺的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				private:
					ev_void init(EarthView::World::Spatial::Atlas::IMap *pMap);
					EarthView::World::Spatial::Carto::ISquareGrid *createSquareGrid(EarthView::World::Spatial::Carto::EVSquareGridType type);
					EarthView::World::Spatial::Atlas::IMap* updateLayersSymbol(EarthView::World::Spatial::Atlas::IMap* pMap);
					ev_void toMapPixelPoint(_out ev_real64&x,_out ev_real64& y);
					IElement* createElement(EVElementType elementType);
					ev_void setMapFrame(IMapFrame *pFrame);
				private:
					EVString m_LayoutName;
					ev_real64 m_dPageScale;
					IPage* m_pPage;
					EarthView::World::Spatial::Display::ISpatialDisplay* m_pPageDisplay;
					EarthView::World::Spatial::Geometry::IEnvelope *m_pInterestEnvelope;
					EarthView::World::Display::IBitmap *m_pImage;
					ev_vector<IElement*> m_elementContainer;
					ev_vector<IElement*>::iterator m_iterator;
					ev_bool m_bActive;
					EarthView::World::Spatial::Carto::CCartoOutput2D* m_pCartoOutput;
				ev_private:
					CPageLayout( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CPageLayout);
				};
			}
		}
	}
}

#endif
