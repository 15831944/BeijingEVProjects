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
			namespace Accessor
			{
				/// <summary>
				/// 访问者类型枚举
				/// </summary>
				public enum EVACCESSORTYPE
				{
								AT_UNKNOWN = 0,
								AT_FILE = 1,
								AT_DATABASE = 2,
								AT_WEB = 3
				
				}

				/// <summary>
				/// 访问者类，是所有访问者类的基类，用于数据打开和关闭操作。
				/// </summary>
				public class Idataaccessor : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getType_CallBack_EVAccessorType();

					protected getType_CallBack_EVAccessorType m_getType_CallBack_EVAccessorType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>访问者类型</returns>	
					public virtual EarthView.World.Spatial.Accessor.EVACCESSORTYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Accessor.EVACCESSORTYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Function()
					{
						EarthView.World.Spatial.Accessor.EVACCESSORTYPE csret=GetType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType(IntPtr pNativeObject);

					/// <summary>
					/// 获取类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>访问者类型</returns>	
					public virtual EarthView.World.Spatial.Accessor.EVACCESSORTYPE GetType()
					{
						int ret=EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType(this.NativeObject);
						
						return (EarthView.World.Spatial.Accessor.EVACCESSORTYPE)ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte open_CallBack_ev_bool_EVString(ref IntPtr connectionString);

					protected open_CallBack_ev_bool_EVString m_open_CallBack_ev_bool_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string connectionString);

					/// <summary>
					/// 根据连接字符串，打开相应的数据文件
					/// </summary>
					/// <param name="connectionString">连接字符串</param>
					/// <returns>成功关闭，返回true；否则，返回false</returns>	
					public virtual bool Open_NoVirtual(string connectionString)
					{
						byte ret=EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_NoVirtual(this.NativeObject, connectionString);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Function(ref IntPtr connectionString)
					{
						string strconnectionString= Marshal.PtrToStringAnsi(connectionString);
						ClassFactory.FreeString(ref connectionString);
						
						bool csret=Open(strconnectionString);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString(IntPtr pNativeObject, string connectionString);

					/// <summary>
					/// 根据连接字符串，打开相应的数据文件
					/// </summary>
					/// <param name="connectionString">连接字符串</param>
					/// <returns>成功关闭，返回true；否则，返回false</returns>	
					public virtual bool Open(string connectionString)
					{
						byte ret=EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString(this.NativeObject, connectionString);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte close_CallBack_ev_bool();

					protected close_CallBack_ev_bool m_close_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 关闭打开的数据文件
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功关闭，返回true；否则，返回false</returns>	
					public virtual bool Close_NoVirtual()
					{
						byte ret=EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Function()
					{
						bool csret=Close();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 关闭打开的数据文件
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功关闭，返回true；否则，返回false</returns>	
					public virtual bool Close()
					{
						byte ret=EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdataaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDataAccessor", new IdataaccessorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDataAccessorProxy", new IdataaccessorClassFactory());

					public Idataaccessor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType(IntPtr pObject, getType_CallBack_EVAccessorType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString(IntPtr pObject, open_CallBack_ev_bool_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool(IntPtr pObject, close_CallBack_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVAccessorType = EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Function;
							GC.KeepAlive(m_getType_CallBack_EVAccessorType);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType(this.NativeObject, m_getType_CallBack_EVAccessorType);
							m_open_CallBack_ev_bool_EVString = EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Function;
							GC.KeepAlive(m_open_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString(this.NativeObject, m_open_CallBack_ev_bool_EVString);
							m_close_CallBack_ev_bool = EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Function;
							GC.KeepAlive(m_close_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool(this.NativeObject, m_close_CallBack_ev_bool);
						}
					}
					public static Idataaccessor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Idataaccessor obj = baseObj as  Idataaccessor;
						if (object.Equals(obj, null))
						{
							obj = new Idataaccessor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IDataAccessor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IdataaccessorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Idataaccessor emptyInstance = new Idataaccessor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
