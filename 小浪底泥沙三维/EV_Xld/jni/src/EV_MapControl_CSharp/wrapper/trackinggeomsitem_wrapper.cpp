/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackinggeomsitem.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
			}
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback)();
				class CTrackingGeomsItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingGeomsItem
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback;
				public:
					CTrackingGeomsItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingGeomsItem(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingGeomsItem::boundingRect();
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingGeomsItem::paint(display, state, rect);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingGeomsItem::type();
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingGeomsItem::isContains(x, y);
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingGeomsItemProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingGeomsItemProxy* ptr = dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_boundingRect_CSpatialRect_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::boundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					else
						ptrNativeObject->paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingGeomsItemProxy* ptr = dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::type();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->type();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_Callback* pCallback )
				{
					CTrackingGeomsItemProxy* ptr = dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_type_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::type();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::isContains(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isContains(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingGeomsItemProxy* ptr = dynamic_cast<CTrackingGeomsItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomsItem::isContains(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_setSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					ptrNativeObject->setSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_getSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_addGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geo )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					ptrNativeObject->addGeometry(geo);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomsItem_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomsItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomsItem*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
