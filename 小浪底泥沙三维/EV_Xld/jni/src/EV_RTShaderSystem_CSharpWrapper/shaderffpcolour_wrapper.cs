/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace Rtshadersystem
			{
				public class Ffpcolour : EarthView.World.Graphic.Rtshadersystem.SubRenderState
				{
					public enum STAGEFLAGS
					{
										SF_VS_INPUT_DIFFUSE = 1,
										SF_VS_INPUT_SPECULAR = 2,
										SF_VS_OUTPUT_DIFFUSE = 3,
										SF_VS_OUTPUT_SPECULAR = 4,
										SF_PS_INPUT_DIFFUSE = 5,
										SF_PS_INPUT_SPECULAR = 6,
										SF_PS_OUTPUT_DIFFUSE = 7,
										SF_PS_OUTPUT_SPECULAR = 8
					
					}

					public Ffpcolour() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CFFPColourProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.Ffpcolour".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColour_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColour_getType_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColour_getType_EVString(IntPtr pNativeObject);

					public override string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColour_getType_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Graphic_RTShaderSystem_CFFPColour_getExecutionOrder_int_NoVirtual(IntPtr pNativeObject);

					public new int GetExecutionOrder_NoVirtual()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_getExecutionOrder_int_NoVirtual(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Graphic_RTShaderSystem_CFFPColour_getExecutionOrder_int(IntPtr pNativeObject);

					public override int GetExecutionOrder()
					{
						int ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_getExecutionOrder_int(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPColour_copyFrom_void_CSubRenderState_NoVirtual(IntPtr pNativeObject, IntPtr rhs);

					public new void CopyFrom_NoVirtual(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPColour_copyFrom_void_CSubRenderState_NoVirtual(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPColour_copyFrom_void_CSubRenderState(IntPtr pNativeObject, IntPtr rhs);

					public override void CopyFrom(EarthView.World.Graphic.Rtshadersystem.SubRenderState rhs)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPColour_copyFrom_void_CSubRenderState(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public new bool PreAddToRenderState_NoVirtual(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr renderState, IntPtr srcPass, IntPtr dstPass);

					public override bool PreAddToRenderState(EarthView.World.Graphic.Rtshadersystem.RenderState renderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, object.Equals(renderState, null) ? IntPtr.Zero : renderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPColour_setResolveStageFlags_void_ev_uint32(IntPtr pNativeObject, uint flags);

					public void SetResolveStageFlags(uint flags)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPColour_setResolveStageFlags_void_ev_uint32(this.NativeObject, flags);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Graphic_RTShaderSystem_CFFPColour_getResolveStageFlags_ev_uint32(IntPtr pNativeObject);

					public uint GetResolveStageFlags()
					{
						uint ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_getResolveStageFlags_ev_uint32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPColour_addResolveStageMask_void_ev_uint32(IntPtr pNativeObject, uint mask);

					public void AddResolveStageMask(uint mask)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPColour_addResolveStageMask_void_ev_uint32(this.NativeObject, mask);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPColour_removeResolveStageMask_void_ev_uint32(IntPtr pNativeObject, uint mask);

					public void RemoveResolveStageMask(uint mask)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPColour_removeResolveStageMask_void_ev_uint32(this.NativeObject, mask);
						
					}

					private static string TypeField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Graphic_RTShaderSystem_CFFPColour_Type( );

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Graphic_RTShaderSystem_CFFPColour_Type( string value );

					public 					static string EVType
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_RTShaderSystem_CFFPColour_Type();
							
							string ret = Marshal.PtrToStringAnsi(__ptr);
							ClassFactory.FreeString(ref __ptr);
							return ret;
							
						}

						set
						{
							TypeField = value;
							Set_EarthView_World_Graphic_RTShaderSystem_CFFPColour_Type( value );
						}
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveParameters_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveParameters_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveParameters_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveParameters_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveParameters(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveParameters_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveDependencies_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool ResolveDependencies_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveDependencies_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveDependencies_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool ResolveDependencies(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveDependencies_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_addFunctionInvocations_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					protected new bool AddFunctionInvocations_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_addFunctionInvocations_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CFFPColour_addFunctionInvocations_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					protected override bool AddFunctionInvocations(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CFFPColour_addFunctionInvocations_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfpcolour = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPColour", new FfpcolourClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPColourProxy", new FfpcolourClassFactory());

					public Ffpcolour(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_getExecutionOrder_int(IntPtr pObject, getExecutionOrder_CallBack_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_copyFrom_void_CSubRenderState(IntPtr pObject, copyFrom_CallBack_void_CSubRenderState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_createCpuSubPrograms_bool_CProgramSet(IntPtr pObject, createCpuSubPrograms_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(IntPtr pObject, updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_preAddToRenderState_bool_CRenderState_CPass_CPass(IntPtr pObject, preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveParameters_bool_CProgramSet(IntPtr pObject, resolveParameters_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveDependencies_bool_CProgramSet(IntPtr pObject, resolveDependencies_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_addFunctionInvocations_bool_CProgramSet(IntPtr pObject, addFunctionInvocations_CallBack_bool_CProgramSet pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_getExecutionOrder_CallBack_int = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Function;
							GC.KeepAlive(m_getExecutionOrder_CallBack_int);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_getExecutionOrder_int(this.NativeObject, m_getExecutionOrder_CallBack_int);
							m_copyFrom_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Function;
							GC.KeepAlive(m_copyFrom_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_copyFrom_void_CSubRenderState(this.NativeObject, m_copyFrom_CallBack_void_CSubRenderState);
							m_createCpuSubPrograms_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Function;
							GC.KeepAlive(m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_createCpuSubPrograms_bool_CProgramSet(this.NativeObject, m_createCpuSubPrograms_CallBack_bool_CProgramSet);
							m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Function;
							GC.KeepAlive(m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(this.NativeObject, m_updateGpuProgramsParams_CallBack_void_CRenderable_CPass_CAutoParamDataSource_LightList);
							m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_preAddToRenderState_bool_CRenderState_CPass_CPass(this.NativeObject, m_preAddToRenderState_CallBack_bool_CRenderState_CPass_CPass);
							m_resolveParameters_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveParameters_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveParameters_bool_CProgramSet(this.NativeObject, m_resolveParameters_CallBack_bool_CProgramSet);
							m_resolveDependencies_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Function;
							GC.KeepAlive(m_resolveDependencies_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_resolveDependencies_bool_CProgramSet(this.NativeObject, m_resolveDependencies_CallBack_bool_CProgramSet);
							m_addFunctionInvocations_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Function;
							GC.KeepAlive(m_addFunctionInvocations_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColour_addFunctionInvocations_bool_CProgramSet(this.NativeObject, m_addFunctionInvocations_CallBack_bool_CProgramSet);
						}
					}
					public override bool CreateCpuSubPrograms(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						return base.CreateCpuSubPrograms_NoVirtual(programSet);
					}
					public override void UpdateGpuProgramsParams(EarthView.World.Graphic.Renderable rend, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.AutoParamDataSource source, EarthView.World.Graphic.LightList pLightList)
					{
						base.UpdateGpuProgramsParams_NoVirtual(rend,pass,source,pLightList);
					}
					public static Ffpcolour FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ffpcolour obj = baseObj as  Ffpcolour;
						if (object.Equals(obj, null))
						{
							obj = new Ffpcolour(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFFPColour");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FfpcolourClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ffpcolour emptyInstance = new Ffpcolour(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Ffpcolourfactory : EarthView.World.Graphic.Rtshadersystem.SubRenderStateFactory
				{
					public Ffpcolourfactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CFFPColourFactoryProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.Ffpcolourfactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_getType_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetType_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_getType_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_getType_EVString(IntPtr pNativeObject);

					public override string GetType()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_getType_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public new EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pNativeObject, IntPtr compiler, IntPtr prop, IntPtr pass, IntPtr translator);

					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.Pass pass, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(prop, null) ? IntPtr.Zero : prop.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject, object.Equals(translator, null) ? IntPtr.Zero : translator.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public new void WriteInstance_NoVirtual(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pNativeObject, IntPtr ser, IntPtr subRenderState, IntPtr srcPass, IntPtr dstPass);

					public override void WriteInstance(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.Pass srcPass, EarthView.World.Graphic.Pass dstPass)
					{
						EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, object.Equals(ser, null) ? IntPtr.Zero : ser.NativeObject, object.Equals(subRenderState, null) ? IntPtr.Zero : subRenderState.NativeObject, object.Equals(srcPass, null) ? IntPtr.Zero : srcPass.NativeObject, object.Equals(dstPass, null) ? IntPtr.Zero : dstPass.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstanceImpl_CSubRenderState_NoVirtual(IntPtr pNativeObject);

					protected new EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstanceImpl_CSubRenderState_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstanceImpl_CSubRenderState(IntPtr pNativeObject);

					protected override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstanceImpl()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstanceImpl_CSubRenderState(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Rtshadersystem.SubRenderState csObj = new EarthView.World.Graphic.Rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSubRenderState");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.SubRenderState;
							csObj.BindNativeObject(__ptr, "CSubRenderState");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadFfpcolourfactory = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPColourFactory", new FfpcolourfactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CFFPColourFactoryProxy", new FfpcolourfactoryClassFactory());

					public Ffpcolourfactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState(IntPtr pObject, createInstance_CallBack_CSubRenderState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(IntPtr pObject, createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(IntPtr pObject, createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_destroyInstance_void_CSubRenderState(IntPtr pObject, destroyInstance_CallBack_void_CSubRenderState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_destroyAllInstances_void(IntPtr pObject, destroyAllInstances_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(IntPtr pObject, writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstanceImpl_CSubRenderState(IntPtr pObject, createInstanceImpl_CallBack_CSubRenderState pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Function;
							GC.KeepAlive(m_getType_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
							m_createInstance_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState(this.NativeObject, m_createInstance_CallBack_CSubRenderState);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator);
							m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.NativeObject, m_createInstance_CallBack_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator);
							m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Function;
							GC.KeepAlive(m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(this.NativeObject, m_createOrRetrieveInstance_CallBack_CSubRenderState_CSGScriptTranslator);
							m_destroyInstance_CallBack_void_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Function;
							GC.KeepAlive(m_destroyInstance_CallBack_void_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_destroyInstance_void_CSubRenderState(this.NativeObject, m_destroyInstance_CallBack_void_CSubRenderState);
							m_destroyAllInstances_CallBack_void = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Function;
							GC.KeepAlive(m_destroyAllInstances_CallBack_void);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_destroyAllInstances_void(this.NativeObject, m_destroyAllInstances_CallBack_void);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CPass_CPass);
							m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Function;
							GC.KeepAlive(m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.NativeObject, m_writeInstance_CallBack_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState);
							m_createInstanceImpl_CallBack_CSubRenderState = EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Function;
							GC.KeepAlive(m_createInstanceImpl_CallBack_CSubRenderState);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPColourFactory_createInstanceImpl_CSubRenderState(this.NativeObject, m_createInstanceImpl_CallBack_CSubRenderState);
						}
					}
					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance()
					{
						return base.CreateInstance_NoVirtual();
					}
					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateInstance(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.PropertyAbstractNode prop, EarthView.World.Graphic.TextureUnitState texState, EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						return base.CreateInstance_NoVirtual(compiler,prop,texState,translator);
					}
					public override EarthView.World.Graphic.Rtshadersystem.SubRenderState CreateOrRetrieveInstance(EarthView.World.Graphic.Rtshadersystem.Sgscripttranslator translator)
					{
						return base.CreateOrRetrieveInstance_NoVirtual(translator);
					}
					public override void DestroyInstance(EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState)
					{
						base.DestroyInstance_NoVirtual(subRenderState);
					}
					public override void DestroyAllInstances()
					{
						base.DestroyAllInstances_NoVirtual();
					}
					public override void WriteInstance(EarthView.World.Graphic.MaterialSerializer ser, EarthView.World.Graphic.Rtshadersystem.SubRenderState subRenderState, EarthView.World.Graphic.TextureUnitState srcTextureUnit, EarthView.World.Graphic.TextureUnitState dstTextureUnit)
					{
						base.WriteInstance_NoVirtual(ser,subRenderState,srcTextureUnit,dstTextureUnit);
					}
					public static Ffpcolourfactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ffpcolourfactory obj = baseObj as  Ffpcolourfactory;
						if (object.Equals(obj, null))
						{
							obj = new Ffpcolourfactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFFPColourFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FfpcolourfactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ffpcolourfactory emptyInstance = new Ffpcolourfactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
