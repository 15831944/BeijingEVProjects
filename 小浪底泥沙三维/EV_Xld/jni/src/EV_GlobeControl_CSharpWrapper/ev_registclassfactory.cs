using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_GlobeControl_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::C3DControl", new EarthView.World.Spatial3D.Controls.C3DControlClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::C3DControlProxy", new EarthView.World.Spatial3D.Controls.C3DControlClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCameraAnimationHandler", new EarthView.World.Spatial3D.Controls.CameraAnimationHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCameraAnimationHandlerProxy", new EarthView.World.Spatial3D.Controls.CameraAnimationHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandEffectSelection3D", new EarthView.World.Spatial3D.Controls.CommandEffectSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandEffectSelection3DProxy", new EarthView.World.Spatial3D.Controls.CommandEffectSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandLayerSelection3D", new EarthView.World.Spatial3D.Controls.CommandLayerSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandLayerSelection3DProxy", new EarthView.World.Spatial3D.Controls.CommandLayerSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandModelSelection3D", new EarthView.World.Spatial3D.Controls.CommandModelSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandModelSelection3DProxy", new EarthView.World.Spatial3D.Controls.CommandModelSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandModelSelectionByPoint3D", new EarthView.World.Spatial3D.Controls.CommandModelSelectionByPoint3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandModelSelectionByPoint3DProxy", new EarthView.World.Spatial3D.Controls.CommandModelSelectionByPoint3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandModelSubmeshSelector", new EarthView.World.Spatial3D.Controls.CommandModelSubmeshSelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandModelSubmeshSelectorProxy", new EarthView.World.Spatial3D.Controls.CommandModelSubmeshSelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSaveEdit3D", new EarthView.World.Spatial3D.Controls.CommandSaveEdit3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSaveEdit3DProxy", new EarthView.World.Spatial3D.Controls.CommandSaveEdit3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByCircle3D", new EarthView.World.Spatial3D.Controls.CommandSelectionByCircle3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByCircle3DProxy", new EarthView.World.Spatial3D.Controls.CommandSelectionByCircle3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByPoint3D", new EarthView.World.Spatial3D.Controls.CommandSelectionByPoint3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByPoint3DProxy", new EarthView.World.Spatial3D.Controls.CommandSelectionByPoint3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByPolygon3D", new EarthView.World.Spatial3D.Controls.CommandSelectionByPolygon3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByPolygon3DProxy", new EarthView.World.Spatial3D.Controls.CommandSelectionByPolygon3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByTrangle3D", new EarthView.World.Spatial3D.Controls.CommandSelectionByTrangle3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandSelectionByTrangle3DProxy", new EarthView.World.Spatial3D.Controls.CommandSelectionByTrangle3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandStartEdit3D", new EarthView.World.Spatial3D.Controls.CommandStartEdit3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandStartEdit3DProxy", new EarthView.World.Spatial3D.Controls.CommandStartEdit3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandStopEdit3D", new EarthView.World.Spatial3D.Controls.CommandStopEdit3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommandStopEdit3DProxy", new EarthView.World.Spatial3D.Controls.CommandStopEdit3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CommandSubmeshSelector", new EarthView.World.Spatial3D.Controls.CommandSubmeshSelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CommandSubmeshSelectorProxy", new EarthView.World.Spatial3D.Controls.CommandSubmeshSelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommonSceneControl", new EarthView.World.Spatial3D.Controls.CommonSceneControlClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommonSceneControlProxy", new EarthView.World.Spatial3D.Controls.CommonSceneControlClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener", new EarthView.World.Spatial3D.SystemUI.IcommonscenequerylistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListenerProxy", new EarthView.World.Spatial3D.SystemUI.IcommonscenequerylistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool", new EarthView.World.Spatial3D.SystemUI.CommonSceneRayQueryToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryToolProxy", new EarthView.World.Spatial3D.SystemUI.CommonSceneRayQueryToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent", new EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr", new EarthView.World.Spatial3D.Controls.CompassWidgetVisibleEventPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidget", new EarthView.World.Spatial3D.Controls.CompassWidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCompassWidgetProxy", new EarthView.World.Spatial3D.Controls.CompassWidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CComponentSelectTool", new EarthView.World.Spatial3D.SystemUI.ComponentSelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CComponentSelectToolProxy", new EarthView.World.Spatial3D.SystemUI.ComponentSelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCrossWidget", new EarthView.World.Spatial3D.Controls.CrossWidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCrossWidgetProxy", new EarthView.World.Spatial3D.Controls.CrossWidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeCommand", new EarthView.World.Spatial3D.Controls.GlobeCommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeCommandProxy", new EarthView.World.Spatial3D.Controls.GlobeCommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControl", new EarthView.World.Spatial3D.Controls.GlobeControlClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControlProxy", new EarthView.World.Spatial3D.Controls.GlobeControlClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControlListener", new EarthView.World.Spatial3D.Controls.GlobeControlListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControlListenerProxy", new EarthView.World.Spatial3D.Controls.GlobeControlListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControlMap", new EarthView.World.Spatial3D.Controls.GlobeControlMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControlManager", new EarthView.World.Spatial3D.Controls.GlobeControlManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CGlobeGrid", new EarthView.World.Spatial3D.GlobeGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CGlobeGridProxy", new EarthView.World.Spatial3D.GlobeGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener", new EarthView.World.Spatial3D.SystemUI.IglobequerylistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::IGlobeQueryListenerProxy", new EarthView.World.Spatial3D.SystemUI.IglobequerylistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CGlobeSelection", new EarthView.World.Spatial3D.GlobeSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::GUIEventHandlers", new EarthView.World.Spatial3D.Controls.GuieventhandlersClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelComponentSelector", new EarthView.World.Spatial3D.SystemUI.ModelComponentSelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelComponentSelectorProxy", new EarthView.World.Spatial3D.SystemUI.ModelComponentSelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool", new EarthView.World.Spatial3D.SystemUI.ModelComponentSelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelComponentSelectToolProxy", new EarthView.World.Spatial3D.SystemUI.ModelComponentSelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelRaySelector", new EarthView.World.Spatial3D.SystemUI.ModelRaySelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelRaySelectorProxy", new EarthView.World.Spatial3D.SystemUI.ModelRaySelectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelRaySelectTool", new EarthView.World.Spatial3D.SystemUI.ModelRaySelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CModelRaySelectToolProxy", new EarthView.World.Spatial3D.SystemUI.ModelRaySelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRaySelectTool", new EarthView.World.Spatial3D.SystemUI.RaySelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRaySelectToolProxy", new EarthView.World.Spatial3D.SystemUI.RaySelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRectSelectTool", new EarthView.World.Spatial3D.SystemUI.RectSelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRectSelectToolProxy", new EarthView.World.Spatial3D.SystemUI.RectSelectToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaListener", new EarthView.World.Spatial3D.SystemUI.RegionAreaListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaListenerProxy", new EarthView.World.Spatial3D.SystemUI.RegionAreaListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject", new EarthView.World.Spatial3D.SystemUI.RegionAreaManualObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObjectProxy", new EarthView.World.Spatial3D.SystemUI.RegionAreaManualObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable", new EarthView.World.Spatial3D.SystemUI.RegionAreaManualObject.SubRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderableProxy", new EarthView.World.Spatial3D.SystemUI.RegionAreaManualObject.SubRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaTool", new EarthView.World.Spatial3D.SystemUI.RegionAreaToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CRegionAreaToolProxy", new EarthView.World.Spatial3D.SystemUI.RegionAreaToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent", new EarthView.World.Spatial3D.Controls.LatitudeLonitudeTextBoxVisibleEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr", new EarthView.World.Spatial3D.Controls.LatitudeLonitudeTextBoxVisibleEventPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxEvent", new EarthView.World.Spatial3D.Controls.TextBoxEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxEventPtr", new EarthView.World.Spatial3D.Controls.TextBoxEventPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent", new EarthView.World.Spatial3D.Controls.EnableTextBoxEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr", new EarthView.World.Spatial3D.Controls.EnableTextBoxEventPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent", new EarthView.World.Spatial3D.Controls.TextBoxSetPositionEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr", new EarthView.World.Spatial3D.Controls.TextBoxSetPositionEventPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent", new EarthView.World.Spatial3D.Controls.TextBoxSetTextEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr", new EarthView.World.Spatial3D.Controls.TextBoxSetTextEventPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxWidget", new EarthView.World.Spatial3D.Controls.TextBoxWidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CTextBoxWidgetProxy", new EarthView.World.Spatial3D.Controls.TextBoxWidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox", new EarthView.World.Spatial3D.Controls.LatitudeLonitudeTextBoxClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxProxy", new EarthView.World.Spatial3D.Controls.LatitudeLonitudeTextBoxClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener", new EarthView.World.Spatial3D.SystemUI.TileAltitudeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CTileAltitudeListenerProxy", new EarthView.World.Spatial3D.SystemUI.TileAltitudeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool", new EarthView.World.Spatial3D.SystemUI.TileAltitudeToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::CTileAltitudeToolProxy", new EarthView.World.Spatial3D.SystemUI.TileAltitudeToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CWidget", new EarthView.World.Spatial3D.Controls.WidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CWidgetProxy", new EarthView.World.Spatial3D.Controls.WidgetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CWidgetList", new EarthView.World.Spatial3D.Controls.WidgetListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CWidgetManager", new EarthView.World.Spatial3D.Controls.WidgetManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CWidgetManagerProxy", new EarthView.World.Spatial3D.Controls.WidgetManagerClassFactory());
	}
}

