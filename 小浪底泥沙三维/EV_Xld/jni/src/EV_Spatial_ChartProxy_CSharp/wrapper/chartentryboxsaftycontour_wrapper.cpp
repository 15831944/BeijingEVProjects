/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialchartproxy/chartentryboxsaftycontour.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CChartEntryBoxSaftyContourProxy : public EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour
				{
				private:
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback;
				public:
					CChartEntryBoxSaftyContourProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartEntryBoxSaftyContour(pList)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent(EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback();
						}
						else
							return this->CChartEntryBoxSaftyContour::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CChartEntryBoxSaftyContour::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CChartEntryBoxSaftyContour::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback(ctrl);
						}
						else
							return this->CChartEntryBoxSaftyContour::create(ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::update(e);
					}
					virtual ev_uint32 getEntryCount() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getEntryCount();
					}
					virtual EVString getEntry(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getEntry(index);
					}
					virtual ev_int32 getCurrentIndex() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getCurrentIndex();
					}
					virtual void currentIndexChanged(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback(index);
						}
						else
							return this->CChartEntryBoxSaftyContour::currentIndexChanged(index);
					}
					virtual ev_uint32 getWidth() const
					{
						if(m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartEntryBoxSaftyContour::getWidth();
					}
				};
				REGISTER_FACTORY_CLASS(CChartEntryBoxSaftyContourProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::create(ctrl);
					else
						ptrNativeObject->create(ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::create(ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getEntryCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getEntryCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntryCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getEntryCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getEntry(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getEntry(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getEntry_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getEntry(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getCurrentIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getCurrentIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::getCurrentIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					if (dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::currentIndexChanged(index);
					else
						ptrNativeObject->currentIndexChanged(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_currentIndexChanged_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour::currentIndexChanged(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32_Callback* pCallback )
				{
					CChartEntryBoxSaftyContourProxy* ptr = dynamic_cast<CChartEntryBoxSaftyContourProxy*>((EarthView::World::Spatial::SystemUI::CChartEntryBoxSaftyContour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_CChartEntryBoxSaftyContour_getWidth_ev_uint32(pCallback);
					}
				}
			}
		}
	}
}
