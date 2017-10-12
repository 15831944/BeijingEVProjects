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
		namespace Spatial2D
		{
			namespace Analyst
			{
				public class RasterDataAnalysis : EarthView.World.Core.AllocatedObject
				{
					public RasterDataAnalysis() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRasterDataAnalysis",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateSlope_ev_int32_char_char_double_int_EVRasterDataType_char_int(IntPtr pNativeObject, byte[] pszSrcFile, byte[] pszDstFile, double scale, int slopeFormat, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag);

					public int CreateSlope(byte[] pszSrcFile, byte[] pszDstFile, double scale, int slopeFormat, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag)
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateSlope_ev_int32_char_char_double_int_EVRasterDataType_char_int(this.NativeObject, pszSrcFile, pszDstFile, scale, slopeFormat, eDataType, pszFormat, NoDataFlag);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateSlope_ev_int32_CRasterDataSet_char_double_int_EVRasterDataType_char_int(IntPtr pNativeObject, IntPtr psrcData, byte[] pszDstFile, double scale, int slopeFormat, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag);

					public int CreateSlope(EarthView.World.Spatial2D.Raster.RasterDataSet psrcData, byte[] pszDstFile, double scale, int slopeFormat, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag)
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateSlope_ev_int32_CRasterDataSet_char_double_int_EVRasterDataType_char_int(this.NativeObject, object.Equals(psrcData, null) ? IntPtr.Zero : psrcData.NativeObject, pszDstFile, scale, slopeFormat, eDataType, pszFormat, NoDataFlag);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateAspect_ev_int32_char_char_EVRasterDataType_char_int_int(IntPtr pNativeObject, byte[] pszSrcFile, byte[] pszDstFile, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag, int bAngleAsAzimuth);

					public int CreateAspect(byte[] pszSrcFile, byte[] pszDstFile, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag, int bAngleAsAzimuth)
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateAspect_ev_int32_char_char_EVRasterDataType_char_int_int(this.NativeObject, pszSrcFile, pszDstFile, eDataType, pszFormat, NoDataFlag, bAngleAsAzimuth);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateAspect_ev_int32_CRasterDataSet_char_EVRasterDataType_char_int_int(IntPtr pNativeObject, IntPtr psrcData, byte[] pszDstFile, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag, int bAngleAsAzimuth);

					public int CreateAspect(EarthView.World.Spatial2D.Raster.RasterDataSet psrcData, byte[] pszDstFile, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE eDataType, byte[] pszFormat, int NoDataFlag, int bAngleAsAzimuth)
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_CreateAspect_ev_int32_CRasterDataSet_char_EVRasterDataType_char_int_int(this.NativeObject, object.Equals(psrcData, null) ? IntPtr.Zero : psrcData.NativeObject, pszDstFile, eDataType, pszFormat, NoDataFlag, bAngleAsAzimuth);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_ImagePolygonize_ev_bool_char_char_int_bool_char_CProgressInfo(IntPtr pNativeObject, byte[] pszSrcFile, byte[] pszDstFile, int iBandIndex, byte bIs8Con, byte[] pszFormat, IntPtr pProgressArg);

					///<summary>
					///դ��ʸ����
					///<summary>
					///<param = "pszSrcFile">�����ļ�·��</param>
					///<param = "pszDstFile">����ļ�·��</param>
					///<param = "iBandIndex">ָ�����դ���ļ�Ҫ����Ĳ��Σ�Ĭ��Ϊ��һ����</param>
					///<param = "bIs8Con">��ͨ��ʽ������ͨ��������ͨ��trueΪ8��ͨ��Ĭ�ϣ���falseΪ����ͨ</param>
					///<param = "pszFormat">����ļ���ʽ��Ĭ��ΪESRI Shapefile</param>
					///<returns>����ֵ</returns>
					///<summary>
					public bool ImagePolygonize(byte[] pszSrcFile, byte[] pszDstFile, int iBandIndex, bool bIs8Con, byte[] pszFormat, EarthView.World.Spatial2D.Raster.ProgressInfo pProgressArg)
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_ImagePolygonize_ev_bool_char_char_int_bool_char_CProgressInfo(this.NativeObject, pszSrcFile, pszDstFile, iBandIndex, Convert.ToByte(bIs8Con), pszFormat, object.Equals(pProgressArg, null) ? IntPtr.Zero : pProgressArg.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_VectorRasterize_ev_bool_char_char_int_int_int(IntPtr pNativeObject, byte[] pszGeomrtry, byte[] pszDstFile, int nBandcount, int rasterwidth, int rasterhigth);

					public bool VectorRasterize(byte[] pszGeomrtry, byte[] pszDstFile, int nBandcount, int rasterwidth, int rasterhigth)
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRasterDataAnalysis_VectorRasterize_ev_bool_char_char_int_int_int(this.NativeObject, pszGeomrtry, pszDstFile, nBandcount, rasterwidth, rasterhigth);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_d.so");
							private static bool csbLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis.so");
							private static bool csbLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_CSharp.so");

						#else 
							private static bool bLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadRasterDataAnalysis = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis", new RasterDataAnalysisClassFactory());

					public RasterDataAnalysis(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RasterDataAnalysis FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RasterDataAnalysis obj = baseObj as  RasterDataAnalysis;
						if (object.Equals(obj, null))
						{
							obj = new RasterDataAnalysis(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRasterDataAnalysis");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RasterDataAnalysisClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RasterDataAnalysis emptyInstance = new RasterDataAnalysis(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
