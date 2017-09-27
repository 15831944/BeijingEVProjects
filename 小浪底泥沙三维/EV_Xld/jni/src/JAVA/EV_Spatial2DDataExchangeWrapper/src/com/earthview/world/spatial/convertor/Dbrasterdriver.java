package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Dbrasterdriver extends com.earthview.world.spatial.convertor.DataDriver {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDBRasterDriver", new DbrasterdriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDBRasterDriverProxy", new DbrasterdriverClassFactory());
	}

	native private void finishWrite_void(long pNativeObject);
	/**
	 * д���������
	 */
	public void finishWrite()
	{
		finishWrite_void(this.nativeObject.pointer);
	}
	native private void finishWrite_void_NoVirtual(long pNativeObject);
	protected void finishWrite_NoVirtual()
	{
		finishWrite_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void close_void(long pNativeObject);
	/**
	 * �ر���������
	 */
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private void close_void_NoVirtual(long pNativeObject);
	protected void close_NoVirtual()
	{
		close_void_NoVirtual(this.nativeObject.pointer);
	}

	native private int read_ev_uint32_CDataStream(long pNativeObject, long index, long stream);
	///<summary>
	///��ȡ���ݿ��е�դ�����ݿ���Ϣ
	///<summary>
	public int read(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = read_ev_uint32_CDataStream(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}
	native private int read_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long index, long stream);
	protected int read_NoVirtual(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = read_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}

	native private int write_ev_uint32_CDataStream(long pNativeObject, long index, long stream);
	///<summary>
	///�����ݿ��е�դ�����ݼ�д��������Ϣ
	///<summary>
	public int write(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = write_ev_uint32_CDataStream(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}
	native private int write_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long index, long stream);
	protected int write_NoVirtual(long index, com.earthview.world.core.DataStream stream)
	{
		long indexParamValue = index;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = write_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, indexParamValue, streamParamValue);
		return returnValue;
	}

	native private int open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, long pPropertySet, int mode, long ref_param, long blockcount, long stream);
	/**
	 * ����������
	 * @param pPropertySet ���ݼ�������Ϣ
	 * @param mode ����ģʽ
	 * @param param ת������
	 * @param featurecount ��Ҫ����
	 * @param stream ���ݽṹ
	 * @return �������״̬
	 */
	public int open(com.earthview.world.spatial.geodataset.Ipropertyset pPropertySet, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer blockcount, com.earthview.world.core.DataStream stream)
	{
		long pPropertySetParamValue = (pPropertySet == null ? 0L : pPropertySet.nativeObject.pointer);
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long blockcountParamValue = blockcount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, pPropertySetParamValue, modeParamValue, ref_paramParamValue, blockcountParamValue, streamParamValue);
		return returnValue;
	}
	native private int open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long pPropertySet, int mode, long ref_param, long blockcount, long stream);
	protected int open_NoVirtual(com.earthview.world.spatial.geodataset.Ipropertyset pPropertySet, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer blockcount, com.earthview.world.core.DataStream stream)
	{
		long pPropertySetParamValue = (pPropertySet == null ? 0L : pPropertySet.nativeObject.pointer);
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long blockcountParamValue = blockcount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, pPropertySetParamValue, modeParamValue, ref_paramParamValue, blockcountParamValue, streamParamValue);
		return returnValue;
	}

	native private int open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, long ref_dataSource, String datasetName, int mode, long ref_param, long blockcount, long stream);
	/**
	 * ����������
	 * @param pDataSource ����Դ
	 * @param datasetname ���ݼ�����
	 * @param mode ����ģʽ
	 * @param param ת������
	 * @param featurecount ��Ҫ����
	 * @param stream ���ݽṹ
	 * @return �������״̬
	 */
	public int open(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, String datasetName, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer blockcount, com.earthview.world.core.DataStream stream)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long blockcountParamValue = blockcount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, ref_dataSourceParamValue, datasetNameParamValue, modeParamValue, ref_paramParamValue, blockcountParamValue, streamParamValue);
		return returnValue;
	}
	native private int open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(long pNativeObject, long ref_dataSource, String datasetName, int mode, long ref_param, long blockcount, long stream);
	protected int open_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, String datasetName, com.earthview.world.spatial.convertor.EVDataExchangeOperateMode mode, com.earthview.world.spatial.convertor.DataExchangeParam ref_param, UIntegerPointer blockcount, com.earthview.world.core.DataStream stream)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		int modeParamValue = mode.getValue();
		long ref_paramParamValue = (ref_param == null ? 0L : ref_param.nativeObject.pointer);
		long blockcountParamValue = blockcount.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(this.nativeObject.pointer, ref_dataSourceParamValue, datasetNameParamValue, modeParamValue, ref_paramParamValue, blockcountParamValue, streamParamValue);
		return returnValue;
	}

	public Dbrasterdriver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Dbrasterdriver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 当前数据驱动是否支持读操作
	 * @return 支持读操作返回true，否则返回false
	 */
	public boolean canRead()
	{
		return super.canRead_NoVirtual();
	}
	/**
	 * 当前数据驱动是否支持写操作
	 * @return 支持写操作返回true，否则返回false
	 */
	public boolean canWrite()
	{
		return super.canWrite_NoVirtual();
	}
	
	native protected void register_finishWrite_void(long pNativeObject, String method);
	native protected void register_close_void(long pNativeObject, String method);
	native protected void register_canRead_void(long pNativeObject, String method);
	native protected void register_canWrite_void(long pNativeObject, String method);
	native protected void register_read_ev_uint32_CDataStream(long pNativeObject, String method);
	native protected void register_write_ev_uint32_CDataStream(long pNativeObject, String method);
	native protected void register_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, String method);
	native protected void register_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_finishWrite_void(this.nativeObject.pointer, "finishWrite_void_callback");
			this.register_close_void(this.nativeObject.pointer, "close_void_callback");
			this.register_canRead_void(this.nativeObject.pointer, "canRead_void_callback");
			this.register_canWrite_void(this.nativeObject.pointer, "canWrite_void_callback");
			this.register_read_ev_uint32_CDataStream(this.nativeObject.pointer, "read_ev_uint32_CDataStream_callback");
			this.register_write_ev_uint32_CDataStream(this.nativeObject.pointer, "write_ev_uint32_CDataStream_callback");
			this.register_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, "open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback");
			this.register_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.nativeObject.pointer, "open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback");
		}
	}
	
	public static Dbrasterdriver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Dbrasterdriver obj = null;
 		if(baseObj instanceof Dbrasterdriver)
		{
			obj = (Dbrasterdriver)baseObj;
		} else {
			obj = new Dbrasterdriver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDBRasterDriver");
			obj.increaseCast();
		}

		return obj;
	}
}
