package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageCut extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CImageCut", new ImageCutClassFactory());
	}

	public ImageCut() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CImageCut", null);
	}

	native private int ImageCutByAOI_char_char_char(long pNativeObject, long pszSrcFile, long pszDstFile, long pszAOIWKT);
	///<summary>
	///ͼ��aoi���У���·����
	///<summary>
	/// <param = "pszSrcFile">�����ļ�·��</param>
	///<param = "pszDstFile">����ļ�·��</param>
	///<param = "pszAOIWKT">����AOI��ʹ��WKT�ַ�����ʽ��������ͼ�����к�
	///��const char* pszAOIWKT = "POLYGON((400 500,400 1500,1400 1500,400 500))";</param>
	///<returns>����ֵ</returns>
	///<summary>
	public int ImageCutByAOI(BytePointer pszSrcFile, BytePointer pszDstFile, BytePointer pszAOIWKT)
	{
		long pszSrcFileParamValue = (pszSrcFile == null ? 0L : pszSrcFile.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		long pszAOIWKTParamValue = (pszAOIWKT == null ? 0L : pszAOIWKT.nativeObject.pointer);
		int returnValue = ImageCutByAOI_char_char_char(this.nativeObject.pointer, pszSrcFileParamValue, pszDstFileParamValue, pszAOIWKTParamValue);
		return returnValue;
	}
	native private int ImageCutByAOIByPolygon_CRasterDataSet_char_CPolygon(long pNativeObject, long Dataset, long pszDstFile, long polygon);
	///<summary>
	///ͼ��aoi���У������ݼ���
	///<summary>
	/// <param = "Dataset">�����е����ݼ�</param>
	///<param = "pszDstFile">����ļ�·��</param>
	///<param = "feature">Ҫ����</param>
	///<returns>����ֵ</returns>
	///<summary>
	//					ev_int32 ImageCutByAOIByFeature(EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset, const char* pszDstFile,
	//EarthView::World::Spatial::GeoDataset::IFeatureClass* featureclass);
	///<summary>
	///ͼ��aoi���У������ݼ���
	///<summary>
	/// <param = "Dataset">�����е����ݼ�</param>
	///<param = "pszDstFile">����ļ�·��</param>
	///<param = "feature">�������</param>
	///<returns>����ֵ</returns>
	///<summary>
	public int ImageCutByAOIByPolygon(com.earthview.world.spatial2d.raster.RasterDataSet Dataset, BytePointer pszDstFile, com.earthview.world.spatial.geometry.Polygon polygon)
	{
		long DatasetParamValue = (Dataset == null ? 0L : Dataset.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		long polygonParamValue = (polygon == null ? 0L : polygon.nativeObject.pointer);
		int returnValue = ImageCutByAOIByPolygon_CRasterDataSet_char_CPolygon(this.nativeObject.pointer, DatasetParamValue, pszDstFileParamValue, polygonParamValue);
		return returnValue;
	}
	public ImageCut(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageCut(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ImageCut fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageCut obj = null;
 		if(baseObj instanceof ImageCut)
		{
			obj = (ImageCut)baseObj;
		} else {
			obj = new ImageCut(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageCut");
			obj.increaseCast();
		}

		return obj;
	}
}
