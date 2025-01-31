using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Plugin_ParticleFX_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitter", new EarthView.World.Plugin.ParticleFX.AreaEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitterProxy", new EarthView.World.Plugin.ParticleFX.AreaEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidth", new EarthView.World.Plugin.ParticleFX.AreaEmitter.AreaEmitterCmdWidthClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdWidthProxy", new EarthView.World.Plugin.ParticleFX.AreaEmitter.AreaEmitterCmdWidthClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeight", new EarthView.World.Plugin.ParticleFX.AreaEmitter.AreaEmitterCmdHeightClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitter::CAreaEmitterCmdHeightProxy", new EarthView.World.Plugin.ParticleFX.AreaEmitter.AreaEmitterCmdHeightClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepth", new EarthView.World.Plugin.ParticleFX.AreaEmitter.CmdDepthClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CAreaEmitter::CCmdDepthProxy", new EarthView.World.Plugin.ParticleFX.AreaEmitter.CmdDepthClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CBoxEmitter", new EarthView.World.Plugin.ParticleFX.BoxEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CBoxEmitterProxy", new EarthView.World.Plugin.ParticleFX.BoxEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CBoxEmitterFactory", new EarthView.World.Plugin.ParticleFX.BoxEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CBoxEmitterFactoryProxy", new EarthView.World.Plugin.ParticleFX.BoxEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector", new EarthView.World.Plugin.ParticleFX.ColourFaderAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffectorProxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdRedAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjustProxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdRedAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdGreenAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjustProxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdGreenAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdBlueAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjustProxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdBlueAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdAlphaAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjustProxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector.CmdAlphaAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdRedAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdRedAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdGreenAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdGreenAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdBlueAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdBlueAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdAlphaAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdAlphaAdjust1ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdRedAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdRedAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdGreenAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdGreenAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdBlueAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdBlueAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdAlphaAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdAlphaAdjust2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdStateChangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChangeProxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffector2.CmdStateChangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory", new EarthView.World.Plugin.ParticleFX.ColourFaderAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory2", new EarthView.World.Plugin.ParticleFX.ColourFaderAffectorFactory2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourFaderAffectorFactory2Proxy", new EarthView.World.Plugin.ParticleFX.ColourFaderAffectorFactory2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourImageAffector", new EarthView.World.Plugin.ParticleFX.ColourImageAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourImageAffectorProxy", new EarthView.World.Plugin.ParticleFX.ColourImageAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust", new EarthView.World.Plugin.ParticleFX.ColourImageAffector.CmdImageAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjustProxy", new EarthView.World.Plugin.ParticleFX.ColourImageAffector.CmdImageAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourImageAffectorFactory", new EarthView.World.Plugin.ParticleFX.ColourImageAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourImageAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.ColourImageAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffectorProxy", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjust", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffector.CmdColourAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdColourAdjustProxy", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffector.CmdColourAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjust", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffector.CmdTimeAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector::CCmdTimeAdjustProxy", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffector.CmdTimeAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffectorFactory", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.ColourInterpolatorAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CCylinderEmitter", new EarthView.World.Plugin.ParticleFX.CylinderEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CCylinderEmitterProxy", new EarthView.World.Plugin.ParticleFX.CylinderEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CCylinderEmitterFactory", new EarthView.World.Plugin.ParticleFX.CylinderEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CCylinderEmitterFactoryProxy", new EarthView.World.Plugin.ParticleFX.CylinderEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffectorProxy", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffector.CmdPlanePointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePointProxy", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffector.CmdPlanePointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffector.CmdPlaneNormalClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormalProxy", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffector.CmdPlaneNormalClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffector.CmdBounceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounceProxy", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffector.CmdBounceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffectorFactory", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.DeflectorPlaneAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffectorProxy", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffector.CmdRandomnessClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomnessProxy", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffector.CmdRandomnessClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffector.CmdScopeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScopeProxy", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffector.CmdScopeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffector.CmdKeepVelocityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocityProxy", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffector.CmdKeepVelocityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffectorFactory", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.DirectionRandomiserAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CEllipsoidEmitter", new EarthView.World.Plugin.ParticleFX.EllipsoidEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CEllipsoidEmitterProxy", new EarthView.World.Plugin.ParticleFX.EllipsoidEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CEllipsoidEmitterFactory", new EarthView.World.Plugin.ParticleFX.EllipsoidEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CEllipsoidEmitterFactoryProxy", new EarthView.World.Plugin.ParticleFX.EllipsoidEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitterProxy", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerX", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitter.HollowEllipsoidEmitterCmdInnerXClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerXProxy", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitter.HollowEllipsoidEmitterCmdInnerXClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerY", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitter.HollowEllipsoidEmitterCmdInnerYClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerYProxy", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitter.HollowEllipsoidEmitterCmdInnerYClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerZ", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitter.HollowEllipsoidEmitterCmdInnerZClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter::CHollowEllipsoidEmitterCmdInnerZProxy", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitter.HollowEllipsoidEmitterCmdInnerZClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitterFactory", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitterFactoryProxy", new EarthView.World.Plugin.ParticleFX.HollowEllipsoidEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector", new EarthView.World.Plugin.ParticleFX.LinearForceAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffectorProxy", new EarthView.World.Plugin.ParticleFX.LinearForceAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector", new EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVectorProxy", new EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp", new EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceAppClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceAppProxy", new EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceAppClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffectorFactory", new EarthView.World.Plugin.ParticleFX.LinearForceAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.LinearForceAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointEmitter", new EarthView.World.Plugin.ParticleFX.PointEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointEmitterProxy", new EarthView.World.Plugin.ParticleFX.PointEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointEmitterFactory", new EarthView.World.Plugin.ParticleFX.PointEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointEmitterFactoryProxy", new EarthView.World.Plugin.ParticleFX.PointEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointExtendEmitter", new EarthView.World.Plugin.ParticleFX.PointExtendEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointExtendEmitterProxy", new EarthView.World.Plugin.ParticleFX.PointExtendEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactory", new EarthView.World.Plugin.ParticleFX.PointExtendEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CPointExtendEmitterFactoryProxy", new EarthView.World.Plugin.ParticleFX.PointExtendEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter", new EarthView.World.Plugin.ParticleFX.RingEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitterProxy", new EarthView.World.Plugin.ParticleFX.RingEmitterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX", new EarthView.World.Plugin.ParticleFX.RingEmitter.RingEmitterCmdInnerXClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerXProxy", new EarthView.World.Plugin.ParticleFX.RingEmitter.RingEmitterCmdInnerXClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY", new EarthView.World.Plugin.ParticleFX.RingEmitter.RingEmitterCmdInnerYClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerYProxy", new EarthView.World.Plugin.ParticleFX.RingEmitter.RingEmitterCmdInnerYClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitterFactory", new EarthView.World.Plugin.ParticleFX.RingEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitterFactoryProxy", new EarthView.World.Plugin.ParticleFX.RingEmitterFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector", new EarthView.World.Plugin.ParticleFX.RotationAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffectorProxy", new EarthView.World.Plugin.ParticleFX.RotationAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeStartClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStartProxy", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeStartClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeEndClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEndProxy", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeEndClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeStartClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStartProxy", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeStartClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeEndClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEndProxy", new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeEndClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffectorFactory", new EarthView.World.Plugin.ParticleFX.RotationAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.RotationAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CScaleAffector", new EarthView.World.Plugin.ParticleFX.ScaleAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CScaleAffectorProxy", new EarthView.World.Plugin.ParticleFX.ScaleAffectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CScaleAffector::CCmdScaleAdjust", new EarthView.World.Plugin.ParticleFX.ScaleAffector.CmdScaleAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CScaleAffector::CCmdScaleAdjustProxy", new EarthView.World.Plugin.ParticleFX.ScaleAffector.CmdScaleAdjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CScaleAffectorFactory", new EarthView.World.Plugin.ParticleFX.ScaleAffectorFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CScaleAffectorFactoryProxy", new EarthView.World.Plugin.ParticleFX.ScaleAffectorFactoryClassFactory());
	}
}

