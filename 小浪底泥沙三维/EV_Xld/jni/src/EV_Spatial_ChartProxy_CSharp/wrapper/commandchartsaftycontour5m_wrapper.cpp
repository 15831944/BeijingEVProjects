/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialchartproxy/commandchartsaftycontour5m.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CCommandChartSaftyContour5MProxy : public EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M
				{
				private:
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback;
				public:
					CCommandChartSaftyContour5MProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommandChartSaftyContour5M(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCommandChartSaftyContour5MProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback();
						}
						else
							return this->CCommandChartSaftyContour5M::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CCommandChartSaftyContour5M::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CCommandChartSaftyContour5M::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CCommandChartSaftyContour5M::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CCommandChartSaftyContour5M::update(e);
					}
				};
				REGISTER_FACTORY_CLASS(CCommandChartSaftyContour5MProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					if (dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent_Callback* pCallback )
				{
					CCommandChartSaftyContour5MProxy* ptr = dynamic_cast<CCommandChartSaftyContour5MProxy*>((EarthView::World::Spatial2D::Controls::CCommandChartSaftyContour5M*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CCommandChartSaftyContour5M_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
