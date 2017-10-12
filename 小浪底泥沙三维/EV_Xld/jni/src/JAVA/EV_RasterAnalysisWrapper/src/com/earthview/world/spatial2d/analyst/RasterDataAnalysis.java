package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterDataAnalysis extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis", new RasterDataAnalysisClassFactory());
	}

	public RasterDataAnalysis() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRasterDataAnalysis", null);
	}

	native private int CreateSlope_char_char_double_int_EVRasterDataType_char_int(long pNativeObject, long pszSrcFile, long pszDstFile, double scale, int slopeFormat, int eDataType, long pszFormat, int NoDataFlag);
	///�¶ȼ���
	public int CreateSlope(BytePointer pszSrcFile, BytePointer pszDstFile, double scale, int slopeFormat, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType, BytePointer pszFormat, int NoDataFlag)
	{
		long pszSrcFileParamValue = (pszSrcFile == null ? 0L : pszSrcFile.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		double scaleParamValue = scale;
		int slopeFormatParamValue = slopeFormat;
		int eDataTypeParamValue = eDataType.getValue();
		long pszFormatParamValue = (pszFormat == null ? 0L : pszFormat.nativeObject.pointer);
		int NoDataFlagParamValue = NoDataFlag;
		int returnValue = CreateSlope_char_char_double_int_EVRasterDataType_char_int(this.nativeObject.pointer, pszSrcFileParamValue, pszDstFileParamValue, scaleParamValue, slopeFormatParamValue, eDataTypeParamValue, pszFormatParamValue, NoDataFlagParamValue);
		return returnValue;
	}
	native private int CreateSlope_CRasterDataSet_char_double_int_EVRasterDataType_char_int(long pNativeObject, long psrcData, long pszDstFile, double scale, int slopeFormat, int eDataType, long pszFormat, int NoDataFlag);
	public int CreateSlope(com.earthview.world.spatial2d.raster.RasterDataSet psrcData, BytePointer pszDstFile, double scale, int slopeFormat, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType, BytePointer pszFormat, int NoDataFlag)
	{
		long psrcDataParamValue = (psrcData == null ? 0L : psrcData.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		double scaleParamValue = scale;
		int slopeFormatParamValue = slopeFormat;
		int eDataTypeParamValue = eDataType.getValue();
		long pszFormatParamValue = (pszFormat == null ? 0L : pszFormat.nativeObject.pointer);
		int NoDataFlagParamValue = NoDataFlag;
		int returnValue = CreateSlope_CRasterDataSet_char_double_int_EVRasterDataType_char_int(this.nativeObject.pointer, psrcDataParamValue, pszDstFileParamValue, scaleParamValue, slopeFormatParamValue, eDataTypeParamValue, pszFormatParamValue, NoDataFlagParamValue);
		return returnValue;
	}
	native private int CreateAspect_char_char_EVRasterDataType_char_int_int(long pNativeObject, long pszSrcFile, long pszDstFile, int eDataType, long pszFormat, int NoDataFlag, int bAngleAsAzimuth);
	///�������
	public int CreateAspect(BytePointer pszSrcFile, BytePointer pszDstFile, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType, BytePointer pszFormat, int NoDataFlag, int bAngleAsAzimuth)
	{
		long pszSrcFileParamValue = (pszSrcFile == null ? 0L : pszSrcFile.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		int eDataTypeParamValue = eDataType.getValue();
		long pszFormatParamValue = (pszFormat == null ? 0L : pszFormat.nativeObject.pointer);
		int NoDataFlagParamValue = NoDataFlag;
		int bAngleAsAzimuthParamValue = bAngleAsAzimuth;
		int returnValue = CreateAspect_char_char_EVRasterDataType_char_int_int(this.nativeObject.pointer, pszSrcFileParamValue, pszDstFileParamValue, eDataTypeParamValue, pszFormatParamValue, NoDataFlagParamValue, bAngleAsAzimuthParamValue);
		return returnValue;
	}
	native private int CreateAspect_CRasterDataSet_char_EVRasterDataType_char_int_int(long pNativeObject, long psrcData, long pszDstFile, int eDataType, long pszFormat, int NoDataFlag, int bAngleAsAzimuth);
	public int CreateAspect(com.earthview.world.spatial2d.raster.RasterDataSet psrcData, BytePointer pszDstFile, com.earthview.world.spatial.geodataset.EVRasterDataType eDataType, BytePointer pszFormat, int NoDataFlag, int bAngleAsAzimuth)
	{
		long psrcDataParamValue = (psrcData == null ? 0L : psrcData.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		int eDataTypeParamValue = eDataType.getValue();
		long pszFormatParamValue = (pszFormat == null ? 0L : pszFormat.nativeObject.pointer);
		int NoDataFlagParamValue = NoDataFlag;
		int bAngleAsAzimuthParamValue = bAngleAsAzimuth;
		int returnValue = CreateAspect_CRasterDataSet_char_EVRasterDataType_char_int_int(this.nativeObject.pointer, psrcDataParamValue, pszDstFileParamValue, eDataTypeParamValue, pszFormatParamValue, NoDataFlagParamValue, bAngleAsAzimuthParamValue);
		return returnValue;
	}
	native private boolean ImagePolygonize_char_char_int_bool_char_CProgressInfo(long pNativeObject, long pszSrcFile, long pszDstFile, int iBandIndex, boolean bIs8Con, long pszFormat, long pProgressArg);
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
	public boolean ImagePolygonize(BytePointer pszSrcFile, BytePointer pszDstFile, int iBandIndex, boolean bIs8Con, BytePointer pszFormat, com.earthview.world.spatial2d.raster.ProgressInfo pProgressArg)
	{
		long pszSrcFileParamValue = (pszSrcFile == null ? 0L : pszSrcFile.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		int iBandIndexParamValue = iBandIndex;
		boolean bIs8ConParamValue = bIs8Con;
		long pszFormatParamValue = (pszFormat == null ? 0L : pszFormat.nativeObject.pointer);
		long pProgressArgParamValue = (pProgressArg == null ? 0L : pProgressArg.nativeObject.pointer);
		boolean returnValue = ImagePolygonize_char_char_int_bool_char_CProgressInfo(this.nativeObject.pointer, pszSrcFileParamValue, pszDstFileParamValue, iBandIndexParamValue, bIs8ConParamValue, pszFormatParamValue, pProgressArgParamValue);
		return returnValue;
	}
	native private boolean VectorRasterize_char_char_int_int_int(long pNativeObject, long pszGeomrtry, long pszDstFile, int nBandcount, int rasterwidth, int rasterhigth);
	///ʸ��դ��
	public boolean VectorRasterize(BytePointer pszGeomrtry, BytePointer pszDstFile, int nBandcount, int rasterwidth, int rasterhigth)
	{
		long pszGeomrtryParamValue = (pszGeomrtry == null ? 0L : pszGeomrtry.nativeObject.pointer);
		long pszDstFileParamValue = (pszDstFile == null ? 0L : pszDstFile.nativeObject.pointer);
		int nBandcountParamValue = nBandcount;
		int rasterwidthParamValue = rasterwidth;
		int rasterhigthParamValue = rasterhigth;
		boolean returnValue = VectorRasterize_char_char_int_int_int(this.nativeObject.pointer, pszGeomrtryParamValue, pszDstFileParamValue, nBandcountParamValue, rasterwidthParamValue, rasterhigthParamValue);
		return returnValue;
	}
	public RasterDataAnalysis(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterDataAnalysis(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RasterDataAnalysis fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterDataAnalysis obj = null;
 		if(baseObj instanceof RasterDataAnalysis)
		{
			obj = (RasterDataAnalysis)baseObj;
		} else {
			obj = new RasterDataAnalysis(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterDataAnalysis");
			obj.increaseCast();
		}

		return obj;
	}
}
