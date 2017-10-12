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
		namespace Spatial
		{
			namespace Display
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
				public class EagleEyeControlAgent : EarthView.World.Core.BaseObject
				{
					public EagleEyeControlAgent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CEagleEyeControlAgentProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.EagleEyeControlAgent".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getEagleEyeCanvas_CallBack_IPaintDevice();

					protected getEagleEyeCanvas_CallBack_IPaintDevice m_getEagleEyeCanvas_CallBack_IPaintDevice;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡӥ�ۻ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>ӥ�ۻ���</returns>
					public virtual EarthView.World.Display.Ipaintdevice GetEagleEyeCanvas_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Display.Ipaintdevice csObj = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPaintDevice");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
							csObj.BindNativeObject(__ptr, "IPaintDevice");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Function()
					{
						EarthView.World.Display.Ipaintdevice csret=GetEagleEyeCanvas();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡӥ�ۻ���
					/// </summary>
					/// <param name=""></param>
					/// <returns>ӥ�ۻ���</returns>
					public virtual EarthView.World.Display.Ipaintdevice GetEagleEyeCanvas()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Display.Ipaintdevice csObj = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPaintDevice");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
							csObj.BindNativeObject(__ptr, "IPaintDevice");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onRepaint_CallBack_void();

					protected onRepaint_CallBack_void m_onRepaint_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// �ػ�
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void OnRepaint_NoVirtual()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Function()
					{
						OnRepaint();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void(IntPtr pNativeObject);

					/// <summary>
					/// �ػ�
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void OnRepaint()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadEagleEyeControlAgent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent", new EagleEyeControlAgentClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEagleEyeControlAgentProxy", new EagleEyeControlAgentClassFactory());

					public EagleEyeControlAgent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice(IntPtr pObject, getEagleEyeCanvas_CallBack_IPaintDevice pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void(IntPtr pObject, onRepaint_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getEagleEyeCanvas_CallBack_IPaintDevice = EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice_Function;
							GC.KeepAlive(m_getEagleEyeCanvas_CallBack_IPaintDevice);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_getEagleEyeCanvas_IPaintDevice(this.NativeObject, m_getEagleEyeCanvas_CallBack_IPaintDevice);
							m_onRepaint_CallBack_void = EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void_Function;
							GC.KeepAlive(m_onRepaint_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControlAgent_onRepaint_void(this.NativeObject, m_onRepaint_CallBack_void);
						}
					}
					public static EagleEyeControlAgent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EagleEyeControlAgent obj = baseObj as  EagleEyeControlAgent;
						if (object.Equals(obj, null))
						{
							obj = new EagleEyeControlAgent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEagleEyeControlAgent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EagleEyeControlAgentClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EagleEyeControlAgent emptyInstance = new EagleEyeControlAgent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// ��ͼ�ؼ����¼�����
				/// </summary>
				public class Ieagleeyecontrollistener : EarthView.World.Spatial.Atlas.Imaplistener
				{
					/// <summary>
					/// Ĭ�Ϲ��캯��
					/// </summary>
					public Ieagleeyecontrollistener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("IEagleEyeControlListenerProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.Ieagleeyecontrollistener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(int button, int shift, int x, int y, double geoX, double geoY);

					protected onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ��갴���¼�����											
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseDown_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function(int button, int shift, int x, int y, double geoX, double geoY)
					{
						bool csret=OnMouseDown(button, shift, x, y, geoX, geoY);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ��갴���¼�����											
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseDown(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(int button, int shift, int x, int y, double geoX, double geoY);

					protected onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ��굯���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseUp_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function(int button, int shift, int x, int y, double geoX, double geoY)
					{
						bool csret=OnMouseUp(button, shift, x, y, geoX, geoY);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ��굯���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseUp(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(int button, int shift, int x, int y, double geoX, double geoY);

					protected onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ����ƶ��¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseMove_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function(int button, int shift, int x, int y, double geoX, double geoY)
					{
						bool csret=OnMouseMove(button, shift, x, y, geoX, geoY);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ����ƶ��¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseMove(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onDoubleClick_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(int button, int shift, int x, int y, double geoX, double geoY);

					protected onDoubleClick_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 m_onDoubleClick_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ���˫���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnDoubleClick_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function(int button, int shift, int x, int y, double geoX, double geoY)
					{
						bool csret=OnDoubleClick(button, shift, x, y, geoX, geoY);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);

					/// <summary>
					/// ���˫���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnDoubleClick(int button, int shift, int x, int y, double geoX, double geoY)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, button, shift, x, y, geoX, geoY);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onMouseWheel_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(int delta, int x, int y, double geoX, double geoY, int flag);

					protected onMouseWheel_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32 m_onMouseWheel_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(IntPtr pNativeObject, int delta, int x, int y, double geoX, double geoY, int flag);

					/// <summary>
					/// �������¼�����
					/// </summary>
					/// <param name="delta">����ת���ĽǶ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseWheel_NoVirtual(int delta, int x, int y, double geoX, double geoY, int flag)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(this.NativeObject, delta, x, y, geoX, geoY, flag);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Function(int delta, int x, int y, double geoX, double geoY, int flag)
					{
						bool csret=OnMouseWheel(delta, x, y, geoX, geoY, flag);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(IntPtr pNativeObject, int delta, int x, int y, double geoX, double geoY, int flag);

					/// <summary>
					/// �������¼�����
					/// </summary>
					/// <param name="delta">����ת���ĽǶ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="geoX">����λ��x</param>
					/// <param name="geoY">����λ��y</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnMouseWheel(int delta, int x, int y, double geoX, double geoY, int flag)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(this.NativeObject, delta, x, y, geoX, geoY, flag);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onKeyDown_CallBack_ev_bool_ev_int32_ev_int32(int keyCode, int shift);

					protected onKeyDown_CallBack_ev_bool_ev_int32_ev_int32 m_onKeyDown_CallBack_ev_bool_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̰����¼�����
					/// </summary>
					/// <param name="key">���µļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnKeyDown_NoVirtual(int keyCode, int shift)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(this.NativeObject, keyCode, shift);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Function(int keyCode, int shift)
					{
						bool csret=OnKeyDown(keyCode, shift);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̰����¼�����
					/// </summary>
					/// <param name="key">���µļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnKeyDown(int keyCode, int shift)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(this.NativeObject, keyCode, shift);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onKeyUp_CallBack_ev_bool_ev_int32_ev_int32(int keyCode, int shift);

					protected onKeyUp_CallBack_ev_bool_ev_int32_ev_int32 m_onKeyUp_CallBack_ev_bool_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̵����¼�����
					/// </summary>
					/// <param name="key">���µļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnKeyUp_NoVirtual(int keyCode, int shift)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_NoVirtual(this.NativeObject, keyCode, shift);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Function(int keyCode, int shift)
					{
						bool csret=OnKeyUp(keyCode, shift);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̵����¼�����
					/// </summary>
					/// <param name="key">���µļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <returns>true,��ʾ�¼�������ϣ�������ҪMapControl����false����ʾ�¼�����󣬻���ҪMapControl����</returns>
					public virtual bool OnKeyUp(int keyCode, int shift)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(this.NativeObject, keyCode, shift);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onResize_CallBack_ev_bool_ev_int32_ev_int32(int width, int height);

					protected onResize_CallBack_ev_bool_ev_int32_ev_int32 m_onResize_CallBack_ev_bool_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int width, int height);

					/// <summary>
					/// ���ڴ�С�����仯
					/// </summary>
					/// <param name="width">���ڿ��</param>
					/// <param name="height">���ڸ߶�</param>
					/// <returns></returns>
					public virtual bool OnResize_NoVirtual(int width, int height)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_NoVirtual(this.NativeObject, width, height);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Function(int width, int height)
					{
						bool csret=OnResize(width, height);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, int width, int height);

					/// <summary>
					/// ���ڴ�С�����仯
					/// </summary>
					/// <param name="width">���ڿ��</param>
					/// <param name="height">���ڸ߶�</param>
					/// <returns></returns>
					public virtual bool OnResize(int width, int height)
					{
						byte ret=EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32(this.NativeObject, width, height);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onBeforeRefresh_CallBack_void_ISpatialDisplay_IEnvelope(IntPtr display, IntPtr viewportEnvelope);

					protected onBeforeRefresh_CallBack_void_ISpatialDisplay_IEnvelope m_onBeforeRefresh_CallBack_void_ISpatialDisplay_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(IntPtr pNativeObject, IntPtr display, IntPtr viewportEnvelope);

					/// <summary>
					/// ��ͼˢ��֮ǰ���¼�
					/// </summary>
					/// <param name="display">��ʾ����</param>
					/// <param name="viewportEnvelope">�µ��ӿڷ�Χ</param>
					/// <returns></returns>
					public virtual void OnBeforeRefresh_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Geometry.Ienvelope viewportEnvelope)
					{
						EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, object.Equals(viewportEnvelope, null) ? IntPtr.Zero : viewportEnvelope.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Function(IntPtr display, IntPtr viewportEnvelope)
					{
						EarthView.World.Spatial.Display.Ispatialdisplay csobj_display = new EarthView.World.Spatial.Display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_display.BindNativeObject(display,"ISpatialDisplay");
						csobj_display.Delegate = true;
						IClassFactory csobj_displayClassFactory = GlobalClassFactoryMap.Get(csobj_display.GetCppInstanceTypeName());
						if (csobj_displayClassFactory != null)
						{
							csobj_display.Delegate = true;
							csobj_display = csobj_displayClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialdisplay;
							csobj_display.BindNativeObject(display, "ISpatialDisplay");
							csobj_display.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csobj_viewportEnvelope = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_viewportEnvelope.BindNativeObject(viewportEnvelope,"IEnvelope");
						csobj_viewportEnvelope.Delegate = true;
						IClassFactory csobj_viewportEnvelopeClassFactory = GlobalClassFactoryMap.Get(csobj_viewportEnvelope.GetCppInstanceTypeName());
						if (csobj_viewportEnvelopeClassFactory != null)
						{
							csobj_viewportEnvelope.Delegate = true;
							csobj_viewportEnvelope = csobj_viewportEnvelopeClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_viewportEnvelope.BindNativeObject(viewportEnvelope, "IEnvelope");
							csobj_viewportEnvelope.Delegate = true;
						}
						
						OnBeforeRefresh(csobj_display, csobj_viewportEnvelope);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(IntPtr pNativeObject, IntPtr display, IntPtr viewportEnvelope);

					/// <summary>
					/// ��ͼˢ��֮ǰ���¼�
					/// </summary>
					/// <param name="display">��ʾ����</param>
					/// <param name="viewportEnvelope">�µ��ӿڷ�Χ</param>
					/// <returns></returns>
					public virtual void OnBeforeRefresh(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Geometry.Ienvelope viewportEnvelope)
					{
						EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, object.Equals(viewportEnvelope, null) ? IntPtr.Zero : viewportEnvelope.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onAfterRefresh_CallBack_void_ISpatialDisplay_IEnvelope(IntPtr display, IntPtr viewportEnvelope);

					protected onAfterRefresh_CallBack_void_ISpatialDisplay_IEnvelope m_onAfterRefresh_CallBack_void_ISpatialDisplay_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(IntPtr pNativeObject, IntPtr display, IntPtr viewportEnvelope);

					/// <summary>
					/// ��ͼˢ��֮����¼�
					/// </summary>
					/// <param name="display">��ʾ����</param>
					/// <param name="viewportEnvelope">�µ��ӿڷ�Χ</param>
					/// <returns></returns>
					public virtual void OnAfterRefresh_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Geometry.Ienvelope viewportEnvelope)
					{
						EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_NoVirtual(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, object.Equals(viewportEnvelope, null) ? IntPtr.Zero : viewportEnvelope.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Function(IntPtr display, IntPtr viewportEnvelope)
					{
						EarthView.World.Spatial.Display.Ispatialdisplay csobj_display = new EarthView.World.Spatial.Display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_display.BindNativeObject(display,"ISpatialDisplay");
						csobj_display.Delegate = true;
						IClassFactory csobj_displayClassFactory = GlobalClassFactoryMap.Get(csobj_display.GetCppInstanceTypeName());
						if (csobj_displayClassFactory != null)
						{
							csobj_display.Delegate = true;
							csobj_display = csobj_displayClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialdisplay;
							csobj_display.BindNativeObject(display, "ISpatialDisplay");
							csobj_display.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csobj_viewportEnvelope = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_viewportEnvelope.BindNativeObject(viewportEnvelope,"IEnvelope");
						csobj_viewportEnvelope.Delegate = true;
						IClassFactory csobj_viewportEnvelopeClassFactory = GlobalClassFactoryMap.Get(csobj_viewportEnvelope.GetCppInstanceTypeName());
						if (csobj_viewportEnvelopeClassFactory != null)
						{
							csobj_viewportEnvelope.Delegate = true;
							csobj_viewportEnvelope = csobj_viewportEnvelopeClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_viewportEnvelope.BindNativeObject(viewportEnvelope, "IEnvelope");
							csobj_viewportEnvelope.Delegate = true;
						}
						
						OnAfterRefresh(csobj_display, csobj_viewportEnvelope);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(IntPtr pNativeObject, IntPtr display, IntPtr viewportEnvelope);

					/// <summary>
					/// ��ͼˢ��֮����¼�
					/// </summary>
					/// <param name="display">��ʾ����</param>
					/// <param name="viewportEnvelope">�µ��ӿڷ�Χ</param>
					/// <returns></returns>
					public virtual void OnAfterRefresh(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Geometry.Ienvelope viewportEnvelope)
					{
						EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, object.Equals(viewportEnvelope, null) ? IntPtr.Zero : viewportEnvelope.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadIeagleeyecontrollistener = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::IEagleEyeControlListener", new IeagleeyecontrollistenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::IEagleEyeControlListenerProxy", new IeagleeyecontrollistenerClassFactory());

					public Ieagleeyecontrollistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pObject, onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pObject, onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pObject, onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(IntPtr pObject, onDoubleClick_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(IntPtr pObject, onMouseWheel_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(IntPtr pObject, onKeyDown_CallBack_ev_bool_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(IntPtr pObject, onKeyUp_CallBack_ev_bool_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32(IntPtr pObject, onResize_CallBack_ev_bool_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(IntPtr pObject, onBeforeRefresh_CallBack_void_ISpatialDisplay_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(IntPtr pObject, onAfterRefresh_CallBack_void_ISpatialDisplay_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer(IntPtr pObject, onBeforeAddLayer_CallBack_void_ILayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer(IntPtr pObject, onAfterAddLayer_CallBack_void_ILayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer(IntPtr pObject, onBeforeRemoveLayer_CallBack_void_ILayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer(IntPtr pObject, onAfterRemoveLayer_CallBack_void_ILayer pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32(IntPtr pObject, onBeforeMoveLayer_CallBack_void_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32(IntPtr pObject, onAfterMoveLayer_CallBack_void_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void(IntPtr pObject, onMapSelectionChanged_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(IntPtr pObject, onMapDraw_CallBack_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							m_onDoubleClick_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_onDoubleClick_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.NativeObject, m_onDoubleClick_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64);
							m_onMouseWheel_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_Function;
							GC.KeepAlive(m_onMouseWheel_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(this.NativeObject, m_onMouseWheel_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32);
							m_onKeyDown_CallBack_ev_bool_ev_int32_ev_int32 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onKeyDown_CallBack_ev_bool_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyDown_ev_bool_ev_int32_ev_int32(this.NativeObject, m_onKeyDown_CallBack_ev_bool_ev_int32_ev_int32);
							m_onKeyUp_CallBack_ev_bool_ev_int32_ev_int32 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onKeyUp_CallBack_ev_bool_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onKeyUp_ev_bool_ev_int32_ev_int32(this.NativeObject, m_onKeyUp_CallBack_ev_bool_ev_int32_ev_int32);
							m_onResize_CallBack_ev_bool_ev_int32_ev_int32 = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onResize_CallBack_ev_bool_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onResize_ev_bool_ev_int32_ev_int32(this.NativeObject, m_onResize_CallBack_ev_bool_ev_int32_ev_int32);
							m_onBeforeRefresh_CallBack_void_ISpatialDisplay_IEnvelope = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope_Function;
							GC.KeepAlive(m_onBeforeRefresh_CallBack_void_ISpatialDisplay_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRefresh_void_ISpatialDisplay_IEnvelope(this.NativeObject, m_onBeforeRefresh_CallBack_void_ISpatialDisplay_IEnvelope);
							m_onAfterRefresh_CallBack_void_ISpatialDisplay_IEnvelope = EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope_Function;
							GC.KeepAlive(m_onAfterRefresh_CallBack_void_ISpatialDisplay_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRefresh_void_ISpatialDisplay_IEnvelope(this.NativeObject, m_onAfterRefresh_CallBack_void_ISpatialDisplay_IEnvelope);
							m_onBeforeAddLayer_CallBack_void_ILayer = EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Function;
							GC.KeepAlive(m_onBeforeAddLayer_CallBack_void_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeAddLayer_void_ILayer(this.NativeObject, m_onBeforeAddLayer_CallBack_void_ILayer);
							m_onAfterAddLayer_CallBack_void_ILayer = EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Function;
							GC.KeepAlive(m_onAfterAddLayer_CallBack_void_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterAddLayer_void_ILayer(this.NativeObject, m_onAfterAddLayer_CallBack_void_ILayer);
							m_onBeforeRemoveLayer_CallBack_void_ILayer = EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Function;
							GC.KeepAlive(m_onBeforeRemoveLayer_CallBack_void_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeRemoveLayer_void_ILayer(this.NativeObject, m_onBeforeRemoveLayer_CallBack_void_ILayer);
							m_onAfterRemoveLayer_CallBack_void_ILayer = EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Function;
							GC.KeepAlive(m_onAfterRemoveLayer_CallBack_void_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterRemoveLayer_void_ILayer(this.NativeObject, m_onAfterRemoveLayer_CallBack_void_ILayer);
							m_onBeforeMoveLayer_CallBack_void_ev_int32_ev_int32 = EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onBeforeMoveLayer_CallBack_void_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onBeforeMoveLayer_void_ev_int32_ev_int32(this.NativeObject, m_onBeforeMoveLayer_CallBack_void_ev_int32_ev_int32);
							m_onAfterMoveLayer_CallBack_void_ev_int32_ev_int32 = EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onAfterMoveLayer_CallBack_void_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onAfterMoveLayer_void_ev_int32_ev_int32(this.NativeObject, m_onAfterMoveLayer_CallBack_void_ev_int32_ev_int32);
							m_onMapSelectionChanged_CallBack_void = EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Function;
							GC.KeepAlive(m_onMapSelectionChanged_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapSelectionChanged_void(this.NativeObject, m_onMapSelectionChanged_CallBack_void);
							m_onMapDraw_CallBack_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType = EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Function;
							GC.KeepAlive(m_onMapDraw_CallBack_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_IEagleEyeControlListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(this.NativeObject, m_onMapDraw_CallBack_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType);
						}
					}
					public override void OnBeforeAddLayer(EarthView.World.Spatial.Atlas.Ilayer layer)
					{
						base.OnBeforeAddLayer_NoVirtual(layer);
					}
					public override void OnAfterAddLayer(EarthView.World.Spatial.Atlas.Ilayer layer)
					{
						base.OnAfterAddLayer_NoVirtual(layer);
					}
					public override void OnBeforeRemoveLayer(EarthView.World.Spatial.Atlas.Ilayer layer)
					{
						base.OnBeforeRemoveLayer_NoVirtual(layer);
					}
					public override void OnAfterRemoveLayer(EarthView.World.Spatial.Atlas.Ilayer layer)
					{
						base.OnAfterRemoveLayer_NoVirtual(layer);
					}
					public override void OnBeforeMoveLayer(int oldIndex, int newIndex)
					{
						base.OnBeforeMoveLayer_NoVirtual(oldIndex,newIndex);
					}
					public override void OnAfterMoveLayer(int oldIndex, int newIndex)
					{
						base.OnAfterMoveLayer_NoVirtual(oldIndex,newIndex);
					}
					public override void OnMapSelectionChanged()
					{
						base.OnMapSelectionChanged_NoVirtual();
					}
					public override void OnMapDraw(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Atlas.Ilayer layer, EarthView.World.Spatial.Atlas.EVVECTORLAYERRENDERERTYPE type)
					{
						base.OnMapDraw_NoVirtual(display,layer,type);
					}
					public static Ieagleeyecontrollistener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ieagleeyecontrollistener obj = baseObj as  Ieagleeyecontrollistener;
						if (object.Equals(obj, null))
						{
							obj = new Ieagleeyecontrollistener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IEagleEyeControlListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IeagleeyecontrollistenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ieagleeyecontrollistener emptyInstance = new Ieagleeyecontrollistener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class EagleEyeControl : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EagleEyeControl() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CEagleEyeControlProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.EagleEyeControl".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getEagleEyeCanvas_IPaintDevice(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡӥ�ۻ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Display.Ipaintdevice GetEagleEyeCanvas()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getEagleEyeCanvas_IPaintDevice(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Display.Ipaintdevice csObj = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPaintDevice");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
							csObj.BindNativeObject(__ptr, "IPaintDevice");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setUseDefaultMap_void_ev_bool(IntPtr pNativeObject, byte bUse);

					/// <summary>
					/// ����ӥ���Ƿ�ʹ��Ĭ�ϵ�ͼ
					/// </summary>
					/// <param name="bUse">���ʹ��Ĭ�ϵ�ͼ������Ϊtrue</param>
					/// <returns></returns>
					public void SetUseDefaultMap(bool bUse)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setUseDefaultMap_void_ev_bool(this.NativeObject, Convert.ToByte(bUse));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CEagleEyeControl_isUseDefaultMap_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// �ж��Ƿ�ʹ��Ĭ�ϵ�ͼ
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public bool IsUseDefaultMap()
					{
						byte ret=EarthView_World_Spatial2D_Controls_CEagleEyeControl_isUseDefaultMap_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_addSpatialControl_void_ISpatialControl_ev_bool(IntPtr pNativeObject, IntPtr pControl, byte bAddMap);

					/// <summary>
					/// ��ӹ����ĵ�ͼ�����ؼ�
					/// </summary>
					/// <param name="pControl">��ͼ�����ؼ�</param>
					/// <param name="bAddMap">����ǵ�ͼ�ؼ�������£��Ƿ񽫿ؼ��еĵ�ͼ��ӵ�ӥ����</param>
					/// <returns></returns>
					public void AddSpatialControl(EarthView.World.Spatial.Atlas.Ispatialcontrol pControl, bool bAddMap)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_addSpatialControl_void_ISpatialControl_ev_bool(this.NativeObject, object.Equals(pControl, null) ? IntPtr.Zero : pControl.NativeObject, Convert.ToByte(bAddMap));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeSpatialControl_void_ISpatialControl(IntPtr pNativeObject, IntPtr pControl);

					/// <summary>
					/// �Ƴ������ĵ�ͼ�����ؼ�
					/// </summary>
					/// <param name="pControl">��ͼ�����ؼ�</param>
					/// <returns></returns>
					public void RemoveSpatialControl(EarthView.World.Spatial.Atlas.Ispatialcontrol pControl)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeSpatialControl_void_ISpatialControl(this.NativeObject, object.Equals(pControl, null) ? IntPtr.Zero : pControl.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getSpatialControl_ISpatialControl_ev_int32(IntPtr pNativeObject, int nIndex);

					/// <summary>
					/// ��ȡ������ͼ�����ؼ�
					/// </summary>
					/// <param name="nIndex">��ͼ�����ؼ���Ӧ������</param>
					/// <returns>nIndex������Ӧ�Ŀؼ�</returns>
					public EarthView.World.Spatial.Atlas.Ispatialcontrol GetSpatialControl(int nIndex)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getSpatialControl_ISpatialControl_ev_int32(this.NativeObject, nIndex);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialControl");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
							csObj.BindNativeObject(__ptr, "ISpatialControl");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CEagleEyeControl_isExist_ev_bool_ISpatialControl(IntPtr pNativeObject, IntPtr pControl);

					/// <summary>
					/// �ж�ĳ����ͼ�����ؼ��Ƿ��Ѿ�����
					/// </summary>
					/// <param name="pControl">�����жϵĿؼ�</param>
					/// <returns>�����ڷ���true,���򷵻�false</returns>
					public bool IsExist(EarthView.World.Spatial.Atlas.Ispatialcontrol pControl)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CEagleEyeControl_isExist_ev_bool_ISpatialControl(this.NativeObject, object.Equals(pControl, null) ? IntPtr.Zero : pControl.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setActiveControl_void_ISpatialControl(IntPtr pNativeObject, IntPtr pControl);

					/// <summary>
					/// ���ü���ĵ�ͼ�����ؼ�
					/// </summary>
					/// <param name="pControl">���ڼ���Ŀؼ�</param>
					/// <returns></returns>
					public void SetActiveControl(EarthView.World.Spatial.Atlas.Ispatialcontrol pControl)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setActiveControl_void_ISpatialControl(this.NativeObject, object.Equals(pControl, null) ? IntPtr.Zero : pControl.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getActiveControl_ISpatialControl(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ����Ŀؼ�
					/// </summary>
					/// <param name="pControl">���ڼ���Ŀؼ�</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Atlas.Ispatialcontrol GetActiveControl()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getActiveControl_ISpatialControl(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialControl");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
							csObj.BindNativeObject(__ptr, "ISpatialControl");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CEagleEyeControl_isActiveControl_ev_bool_ISpatialControl(IntPtr pNativeObject, IntPtr pControl);

					/// <summary>
					/// �ж�ĳ���ؼ��ǲ��Ǽ���
					/// </summary>
					/// <param name="pControl">�ؼ�</param>
					/// <returns></returns>
					public bool IsActiveControl(EarthView.World.Spatial.Atlas.Ispatialcontrol pControl)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CEagleEyeControl_isActiveControl_ev_bool_ISpatialControl(this.NativeObject, object.Equals(pControl, null) ? IntPtr.Zero : pControl.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setAllControlUnActive_void(IntPtr pNativeObject);

					/// <summary>
					/// �������пؼ�Ϊ������״̬
					/// </summary>
					/// <param name="pControl"></param>
					/// <returns></returns>
					public void SetAllControlUnActive()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setAllControlUnActive_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CEagleEyeControl_getSpatialControlCount_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ�����Ŀؼ�����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public int GetSpatialControlCount()
					{
						int ret=EarthView_World_Spatial2D_Controls_CEagleEyeControl_getSpatialControlCount_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_addMap_void_IMap(IntPtr pNativeObject, IntPtr pMap);

					/// <summary>
					/// Ϊӥ�������ض��ĵ�ͼ
					/// </summary>
					/// <param name="pControl">��ͼ����</param>
					/// <returns></returns>
					public void AddMap(EarthView.World.Spatial.Atlas.Imap pMap)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_addMap_void_IMap(this.NativeObject, object.Equals(pMap, null) ? IntPtr.Zero : pMap.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeMap_void_IMap(IntPtr pNativeObject, IntPtr pMap);

					/// <summary>
					/// �Ƴ�Ϊӥ�����õ��ض���ͼ
					/// </summary>
					/// <param name="pControl">��ͼ����</param>
					/// <returns></returns>
					public void RemoveMap(EarthView.World.Spatial.Atlas.Imap pMap)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeMap_void_IMap(this.NativeObject, object.Equals(pMap, null) ? IntPtr.Zero : pMap.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setMapCacheDirty_void(IntPtr pNativeObject);

					/// <summary>
					/// ��ӹ����ĵ�ͼ
					/// </summary>
					/// <param name="pControl">��ͼ����</param>
					/// <returns></returns>
					public void SetMapCacheDirty()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setMapCacheDirty_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMapCount_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡΪӥ�����õĵ�ͼ����
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public int GetMapCount()
					{
						int ret=EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMapCount_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMap_IMap_ev_int32(IntPtr pNativeObject, int nIndex);

					/// <summary>
					/// ��ȡΪӥ�����õĵ�ͼ
					/// </summary>
					/// <param name="nIndex">��ͼ��Ӧ������</param>
					/// <returns>nIndex������Ӧ�ĵ�ͼ</returns>
					public EarthView.World.Spatial.Atlas.Imap GetMap(int nIndex)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getMap_IMap_ev_int32(this.NativeObject, nIndex);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Imap csObj = new EarthView.World.Spatial.Atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMap");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Imap;
							csObj.BindNativeObject(__ptr, "IMap");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CEagleEyeControl_isExist_ev_bool_IMap(IntPtr pNativeObject, IntPtr pMap);

					/// <summary>
					/// �ж�ĳ����ͼ�Ƿ��Ѿ�����
					/// </summary>
					/// <param name="pControl">�����жϵĿؼ�</param>
					/// <returns>�����ڷ���true,���򷵻�false</returns>
					public bool IsExist(EarthView.World.Spatial.Atlas.Imap pMap)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CEagleEyeControl_isExist_ev_bool_IMap(this.NativeObject, object.Equals(pMap, null) ? IntPtr.Zero : pMap.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_addRectangle_void_CPoint_CPoint_CPoint_ISymbol(IntPtr pNativeObject, IntPtr pLeftTop, IntPtr pRightTop, IntPtr pRightBottom, IntPtr pSymbol);

					/// <summary>
					/// ����Զ������
					/// </summary>
					/// <param name="pLeftTop">�������Ͻǵ�</param>
					/// <param name="pRightTop">�������Ͻǵ�</param>
					/// <param name="pRightBottom">�������½ǵ�</param>
					/// <param name="pSymbol">���</param>
					/// <returns></returns>
					public void AddRectangle(EarthView.World.Spatial.Geometry.Point pLeftTop, EarthView.World.Spatial.Geometry.Point pRightTop, EarthView.World.Spatial.Geometry.Point pRightBottom, EarthView.World.Spatial.Display.Isymbol pSymbol)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_addRectangle_void_CPoint_CPoint_CPoint_ISymbol(this.NativeObject, object.Equals(pLeftTop, null) ? IntPtr.Zero : pLeftTop.NativeObject, object.Equals(pRightTop, null) ? IntPtr.Zero : pRightTop.NativeObject, object.Equals(pRightBottom, null) ? IntPtr.Zero : pRightBottom.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_addGeometry_void_IGeometry_ISymbol(IntPtr pNativeObject, IntPtr pGeometry, IntPtr pSymbol);

					/// <summary>
					/// ����Զ�����Ⱦͼ��
					/// </summary>
					/// <param name="pGeometry">���ζ���</param>
					/// <param name="pSymbol">���</param>
					/// <returns></returns>
					public void AddGeometry(EarthView.World.Spatial.Geometry.Igeometry pGeometry, EarthView.World.Spatial.Display.Isymbol pSymbol)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_addGeometry_void_IGeometry_ISymbol(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_clearGeometry_void(IntPtr pNativeObject);

					/// <summary>
					/// ����Զ�����Ⱦͼ��
					/// </summary>
					/// <returns></returns>
					public void ClearGeometry()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_clearGeometry_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onRepaint_CallBack_void();

					protected onRepaint_CallBack_void m_onRepaint_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// �ػ�
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void OnRepaint_NoVirtual()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Function()
					{
						OnRepaint();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void(IntPtr pNativeObject);

					/// <summary>
					/// �ػ�
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void OnRepaint()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_refresh_void(IntPtr pNativeObject);

					/// <summary>
					/// ˢ��
					/// </summary>
					/// <param name="symbol">���</param>
					/// <returns></returns>
					public void Refresh()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_refresh_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setUnActiveRectSymbol_void_ISymbol(IntPtr pNativeObject, IntPtr pSymbol);

					/// <summary>
					/// ���÷ǵ�ǰ�����ͼ��Ӧ�ľ��ο���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void SetUnActiveRectSymbol(EarthView.World.Spatial.Display.Isymbol pSymbol)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setUnActiveRectSymbol_void_ISymbol(this.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getUnActiveRectSymbol_ISymbol(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ�ǵ�ǰ�����ͼ��Ӧ�ľ��ο���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Display.Isymbol GetUnActiveRectSymbol()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getUnActiveRectSymbol_ISymbol(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csObj.BindNativeObject(__ptr, "ISymbol");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getBackground_IColor(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ����ɫ
					/// </summary>
					/// <param name=""></param>
					/// <returns>����ɫ</returns>
					public EarthView.World.Spatial.Display.Icolor GetBackground()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getBackground_IColor(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Icolor csObj = new EarthView.World.Spatial.Display.Icolor(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IColor");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Icolor;
							csObj.BindNativeObject(__ptr, "IColor");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setBackground_void_IColor(IntPtr pNativeObject, IntPtr background);

					/// <summary>
					/// ���ñ���ɫ
					/// </summary>
					/// <param name="background">����ɫ</param>
					/// <returns></returns>
					public void SetBackground(EarthView.World.Spatial.Display.Icolor background)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setBackground_void_IColor(this.NativeObject, object.Equals(background, null) ? IntPtr.Zero : background.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getExtent_IEnvelope(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ��ʾ��Χ
					/// </summary>
					/// <param name=""></param>
					/// <returns>��ʾ��Χ</returns>
					public EarthView.World.Spatial.Geometry.Ienvelope GetExtent()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getExtent_IEnvelope(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setExtent_void_IEnvelope(IntPtr pNativeObject, IntPtr pEnvelope);

					/// <summary>
					/// ������ʾ��Χ
					/// </summary>
					/// <param name="pEnvelope">��ʾ��Χ</param>
					/// <returns></returns>
					public void SetExtent(EarthView.World.Spatial.Geometry.Ienvelope pEnvelope)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setExtent_void_IEnvelope(this.NativeObject, object.Equals(pEnvelope, null) ? IntPtr.Zero : pEnvelope.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setActiveRectSymbol_void_ISymbol(IntPtr pNativeObject, IntPtr pSymbol);

					/// <summary>
					/// ���õ�ǰ�����ͼ��Ӧ�ľ��ο���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void SetActiveRectSymbol(EarthView.World.Spatial.Display.Isymbol pSymbol)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setActiveRectSymbol_void_ISymbol(this.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getActiveRectSymbol_ISymbol(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ��ǰ�����ͼ��Ӧ�ľ��ο���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Display.Isymbol GetActiveRectSymbol()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getActiveRectSymbol_ISymbol(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csObj.BindNativeObject(__ptr, "ISymbol");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_goTo_void_IEnvelope_ISpatialControl(IntPtr pNativeObject, IntPtr pEvn, IntPtr pCtrl);

					/// <summary>
					/// �Ŵ�ĳ����Χ
					/// </summary>
					/// <param name="pEvn">�Ŵ󵽵ķ�Χ</param>
					/// <param name="pEvn">���Ŵ�ĵ�����ͼ�ؼ�</param>
					/// <returns></returns>
					public void GoTo(EarthView.World.Spatial.Geometry.Ienvelope pEvn, EarthView.World.Spatial.Atlas.Ispatialcontrol pCtrl)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_goTo_void_IEnvelope_ISpatialControl(this.NativeObject, object.Equals(pEvn, null) ? IntPtr.Zero : pEvn.NativeObject, object.Equals(pCtrl, null) ? IntPtr.Zero : pCtrl.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setCenter_void_ev_real64_ev_real64_ISpatialControl(IntPtr pNativeObject, double dPX, double dPY, IntPtr pCtrl);

					/// <summary>
					/// ���õ�����ͼ�ؼ������ĵ�
					/// </summary>
					/// <param name="dPX">���ĵ�X����</param>
					/// <param name="dPY">���ĵ�Y����</param>
					/// <param name="pCtrl">������ͼ�ؼ�</param>
					/// <returns></returns>
					public void SetCenter(double dPX, double dPY, EarthView.World.Spatial.Atlas.Ispatialcontrol pCtrl)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setCenter_void_ev_real64_ev_real64_ISpatialControl(this.NativeObject, dPX, dPY, object.Equals(pCtrl, null) ? IntPtr.Zero : pCtrl.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getSpatialControlRectangle_IGeometry_ISpatialControl(IntPtr pNativeObject, IntPtr pCtrl);

					/// <summary>
					/// ��ȡ�ؼ��ķ�Χ
					/// </summary>
					/// <param name="pCtrl">������ͼ�ؼ�</param>
					/// <returns>������ͼ�ؼ���Ӧ�ľ��η�Χ</returns>
					public EarthView.World.Spatial.Geometry.Igeometry GetSpatialControlRectangle(EarthView.World.Spatial.Atlas.Ispatialcontrol pCtrl)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getSpatialControlRectangle_IGeometry_ISpatialControl(this.NativeObject, object.Equals(pCtrl, null) ? IntPtr.Zero : pCtrl.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Igeometry csObj = new EarthView.World.Spatial.Geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IGeometry");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Igeometry;
							csObj.BindNativeObject(__ptr, "IGeometry");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// ��վ���
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CEagleEyeControl_isDrawing_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// �ж��Ƿ����ڻ�ͼ
					/// </summary>
					/// <param name=""></param>
					/// <returns>������ڻ�ͼ����true,���򷵻�false</returns>
					public bool IsDrawing()
					{
						byte ret=EarthView_World_Spatial2D_Controls_CEagleEyeControl_isDrawing_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onResize_void_ev_int32_ev_int32(IntPtr pNativeObject, int nWidth, int nHeight);

					/// <summary>
					/// �������ô�С
					/// </summary>
					/// <param name="nWidth">����</param>
					/// <param name="nWidth">�߶�</param>
					/// <returns></returns>
					public void OnResize(int nWidth, int nHeight)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onResize_void_ev_int32_ev_int32(this.NativeObject, nWidth, nHeight);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onDoubleClick_void_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ���˫���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns></returns>
					public void OnDoubleClick(int button, int shift, int x, int y)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onDoubleClick_void_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onKeyDown_void_ev_int32_ev_int32(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̰����¼�����
					/// </summary>
					/// <param name="key">���µļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <returns></returns>
					public void OnKeyDown(int keyCode, int shift)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onKeyDown_void_ev_int32_ev_int32(this.NativeObject, keyCode, shift);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onKeyUp_void_ev_int32_ev_int32(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̵����¼�����
					/// </summary>
					/// <param name="key">����ļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>                    
					/// <returns></returns>
					public void OnKeyUp(int keyCode, int shift)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onKeyUp_void_ev_int32_ev_int32(this.NativeObject, keyCode, shift);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseDown_void_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ��갴���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns></returns>
					public void OnMouseDown(int button, int shift, int x, int y)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseDown_void_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseMove_void_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ����ƶ��¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns></returns>
					public void OnMouseMove(int button, int shift, int x, int y)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseMove_void_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseUp_void_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ��굯���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns></returns>
					public void OnMouseUp(int button, int shift, int x, int y)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseUp_void_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseWheel_void_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int delta, int x, int y, int flag);

					/// <summary>
					/// �����ֹ����¼�����
					/// </summary>
					/// <param name="delta">�����ķ���</param>        
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="flag">��ʶλ</param>  
					/// <returns></returns>
					public void OnMouseWheel(int delta, int x, int y, int flag)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_onMouseWheel_void_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, delta, x, y, flag);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_addEagleEyeControlListener_void_IEagleEyeControlListener(IntPtr pNativeObject, IntPtr ref_listener);

					public void AddEagleEyeControlListener(EarthView.World.Spatial2D.Controls.Ieagleeyecontrollistener ref_listener)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_addEagleEyeControlListener_void_IEagleEyeControlListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeEagleEyeControlListener_void_IEagleEyeControlListener(IntPtr pNativeObject, IntPtr ref_listener);

					public void RemoveEagleEyeControlListener(EarthView.World.Spatial2D.Controls.Ieagleeyecontrollistener ref_listener)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_removeEagleEyeControlListener_void_IEagleEyeControlListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getDisplay_ISpatialDisplay(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ�ռ���ʾ����
					/// </summary>
					/// <param name=""></param>
					/// <returns>�ռ���ʾָ��(�ڲ�ָ��)</returns>
					public EarthView.World.Spatial.Display.Ispatialdisplay GetDisplay()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getDisplay_ISpatialDisplay(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Ispatialdisplay csObj = new EarthView.World.Spatial.Display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialDisplay");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialdisplay;
							csObj.BindNativeObject(__ptr, "ISpatialDisplay");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEagleEyeControl_setProxy_void_CEagleEyeControlAgent(IntPtr pNativeObject, IntPtr ref_pxy);

					/// <summary>
					/// ���ÿؼ�����
					/// </summary>
					/// <param name="pxy">�ؼ�����</param>
					/// <returns></returns>
					public void SetProxy(EarthView.World.Spatial2D.Controls.EagleEyeControlAgent ref_pxy)
					{
						EarthView_World_Spatial2D_Controls_CEagleEyeControl_setProxy_void_CEagleEyeControlAgent(this.NativeObject, object.Equals(ref_pxy, null) ? IntPtr.Zero : ref_pxy.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEagleEyeControl_getCurrentTool_CToolEagleEyeControl(IntPtr pNativeObject);

					/// <summary>
					/// ��ȡ��ǰ����
					/// </summary>
					/// <param name="pxy"></param>
					/// <returns>��ǰӥ�۹���</returns>
					public EarthView.World.Spatial2D.Controls.ToolEagleEyeControl GetCurrentTool()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEagleEyeControl_getCurrentTool_CToolEagleEyeControl(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Controls.ToolEagleEyeControl csObj = new EarthView.World.Spatial2D.Controls.ToolEagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CToolEagleEyeControl");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Controls.ToolEagleEyeControl;
							csObj.BindNativeObject(__ptr, "CToolEagleEyeControl");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEagleEyeControl", new EagleEyeControlClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEagleEyeControlProxy", new EagleEyeControlClassFactory());

					public EagleEyeControl(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void(IntPtr pObject, onRepaint_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onRepaint_CallBack_void = EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void_Function;
							GC.KeepAlive(m_onRepaint_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEagleEyeControl_onRepaint_void(this.NativeObject, m_onRepaint_CallBack_void);
						}
					}
					public static EagleEyeControl FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EagleEyeControl obj = baseObj as  EagleEyeControl;
						if (object.Equals(obj, null))
						{
							obj = new EagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEagleEyeControl");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EagleEyeControlClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EagleEyeControl emptyInstance = new EagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public enum EAGLEEYEOPERATIONTYPE
				{
								EEOT_PointSelect = 0,
								EEOT_RectSelect = 1,
								EEOT_Pan = 2
				
				}

				public class ToolEagleEyeControl : EarthView.World.Core.AllocatedObject
				{
					public enum OPERATIONFLAG
					{
										OF_Click = 1,
										OF_Rect = 2,
										OF_Wheel = 4
					
					}

					/// <summary>
					/// ���캯��
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public ToolEagleEyeControl(EarthView.World.Spatial2D.Controls.EagleEyeControl ref_ctrl) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_ctrl = new BasePtr(ref_ctrl);
						list.Add("ref_ctrl", valueref_ctrl.PtrVal);
						Create("CToolEagleEyeControlProxy", list);
						if (!"EarthView.World.Spatial2D.Controls.ToolEagleEyeControl".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_create_void_CEagleEyeControl(IntPtr pNativeObject, IntPtr pEagleEyeControl);

					/// <summary>
					/// ��������
					/// </summary>
					/// <param name="ctrl">�ռ���ƶ���</param>
					/// <returns></returns>
					/// <memo></memo>
					public void Create(EarthView.World.Spatial2D.Controls.EagleEyeControl pEagleEyeControl)
					{
						EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_create_void_CEagleEyeControl(this.NativeObject, object.Equals(pEagleEyeControl, null) ? IntPtr.Zero : pEagleEyeControl.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(int button, int shift, int x, int y);

					protected onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ��갴���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
					public virtual bool OnMouseDown_NoVirtual(int button, int shift, int x, int y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, button, shift, x, y);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Function(int button, int shift, int x, int y)
					{
						bool csret=OnMouseDown(button, shift, x, y);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ��갴���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
					public virtual bool OnMouseDown(int button, int shift, int x, int y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(int button, int shift, int x, int y);

					protected onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ����ƶ��¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
					public virtual bool OnMouseMove_NoVirtual(int button, int shift, int x, int y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, button, shift, x, y);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Function(int button, int shift, int x, int y)
					{
						bool csret=OnMouseMove(button, shift, x, y);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ����ƶ��¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
					public virtual bool OnMouseMove(int button, int shift, int x, int y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(int button, int shift, int x, int y);

					protected onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ��굯���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
					public virtual bool OnMouseUp_NoVirtual(int button, int shift, int x, int y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.NativeObject, button, shift, x, y);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Function(int button, int shift, int x, int y)
					{
						bool csret=OnMouseUp(button, shift, x, y);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ��굯���¼�����
					/// </summary>
					/// <param name="button">���ı�ʶ(1���������2�����Ҽ���4�����м�)</param>
					/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <returns>��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)</returns>
					public virtual bool OnMouseUp(int button, int shift, int x, int y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int delta, int x, int y, int flag);

					/// <summary>
					/// �����ֹ����¼�����
					/// </summary>
					/// <param name="delta">�����ķ���</param>        
					/// <param name="x">���λ��x</param>
					/// <param name="y">���λ��y</param>
					/// <param name="flag">��ʶλ</param>  
					/// <returns></returns>
					public bool OnMouseWheel(int delta, int x, int y, int flag)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, delta, x, y, flag);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onKeyDown_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̰����¼�����
					/// </summary>
					/// <param name="key">���µļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ������</param>
					/// <returns></returns>
					public bool OnKeyDown(int keyCode, int shift)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onKeyDown_ev_bool_ev_int32_ev_int32(this.NativeObject, keyCode, shift);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onKeyUp_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, int keyCode, int shift);

					/// <summary>
					/// ���̵����¼�����
					/// </summary>
					/// <param name="key">����ļ�</param>
					/// <param name="shift">shift���Ƿ�ͬʱ���ͷ�</param>                    
					/// <returns></returns>
					public bool OnKeyUp(int keyCode, int shift)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onKeyUp_ev_bool_ev_int32_ev_int32(this.NativeObject, keyCode, shift);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, int button, int shift, int x, int y);

					/// <summary>
					/// ���˫��
					/// </summary>
					/// <param name=""></param>
					/// <returns>������˫��������true,���û��˫��������false</returns>
					public bool OnDoubleClick(int button, int shift, int x, int y)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, button, shift, x, y);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_setOperationFlag_void_int(IntPtr pNativeObject, int flag);

					/// <summary>
					/// ���ò���ģʽ����������򡢹���    OF_CLick | OF_Rect | OF_Wheel, Ĭ�϶�֧�������ֲ��������ֲ���������Ҫʱ����Ϊ0
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void SetOperationFlag(int flag)
					{
						EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_setOperationFlag_void_int(this.NativeObject, flag);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_getOperationFlag_int(IntPtr pNativeObject);

					public int GetOperationFlag()
					{
						int ret=EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_getOperationFlag_int(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadToolEagleEyeControl = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CToolEagleEyeControl", new ToolEagleEyeControlClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CToolEagleEyeControlProxy", new ToolEagleEyeControlClassFactory());

					public ToolEagleEyeControl(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pObject, onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pObject, onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(IntPtr pObject, onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, m_onMouseDown_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32);
							m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, m_onMouseMove_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32);
							m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32 = EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolEagleEyeControl_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(this.NativeObject, m_onMouseUp_CallBack_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32);
						}
					}
					public static ToolEagleEyeControl FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ToolEagleEyeControl obj = baseObj as  ToolEagleEyeControl;
						if (object.Equals(obj, null))
						{
							obj = new ToolEagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CToolEagleEyeControl");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ToolEagleEyeControlClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ToolEagleEyeControl emptyInstance = new ToolEagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
