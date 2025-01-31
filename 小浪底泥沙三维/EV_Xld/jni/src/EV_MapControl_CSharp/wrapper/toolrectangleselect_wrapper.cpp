/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/toolrectangleselect.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CToolRectangleSelectProxy : public EarthView::World::Spatial2D::Controls::CToolRectangleSelect
				{
				private:
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback;
				public:
					CToolRectangleSelectProxy(EarthView::World::Core::CNameValuePairList *pList) : CToolRectangleSelect(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CToolRectangleSelectProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback();
						}
						else
							return this->CToolRectangleSelect::onClicked();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback();
						}
						else
							return this->CToolRectangleSelect::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback();
						}
						else
							return this->CToolRectangleSelect::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::update(e);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CToolRectangleSelect::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CToolRectangleSelect::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CToolRectangleSelect::create(ref_ctrl);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolRectangleSelect::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CToolRectangleSelectProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onClicked();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getCursor();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getCursor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::getCursor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onContextMenu(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onContextMenu_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					if (dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolRectangleSelect::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial2D::Controls::CToolRectangleSelect* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX;
					ptrNativeObject->setColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl_Callback* pCallback )
				{
					CToolRectangleSelectProxy* ptr = dynamic_cast<CToolRectangleSelectProxy*>((EarthView::World::Spatial2D::Controls::CToolRectangleSelect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolRectangleSelect_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
