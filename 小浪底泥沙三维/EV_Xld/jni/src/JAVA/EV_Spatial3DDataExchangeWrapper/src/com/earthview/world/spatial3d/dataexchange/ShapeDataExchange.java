package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换驱动类
 */
public class ShapeDataExchange extends com.earthview.world.spatial3d.dataexchange.ModelDataExchange {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CShapeDataExchange", new ShapeDataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::JCShapeDataExchangeProxy", new ShapeDataExchangeClassFactory());
	}

	public ShapeDataExchange() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCShapeDataExchangeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataexchange.ShapeDataExchange".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean startup_void(long pNativeObject);
	/**
	 * 创建线程
	 * @param  boolforceRestart=true
	 */
	public boolean startup()
	{
		boolean returnValue = startup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean startup_void_NoVirtual(long pNativeObject);
	protected boolean startup_NoVirtual()
	{
		boolean returnValue = startup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setModelFolderPath_EVString(long pNativeObject, String path);
	public void setModelFolderPath(String path)
	{
		String pathParamValue = path;
		setModelFolderPath_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private void setShapeFieldsValue_CShapeAssignedFields(long pNativeObject, long value);
	public void setShapeFieldsValue(com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setShapeFieldsValue_CShapeAssignedFields(this.nativeObject.pointer, valueParamValue);
	}
	public ShapeDataExchange(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShapeDataExchange(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 璁剧疆婧愭暟鎹浆鎹㈤┍鍔�
	 * @param driver 椹卞姩瀵硅薄
	 */
	public void setSrcDataDriver(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		super.setSrcDataDriver_NoVirtual(ref_driver);
	}
	/**
	 * 璁剧疆鐩爣鏁版嵁杞崲椹卞姩
	 * @param driver 椹卞姩瀵硅薄
	 */
	public void setDestDataDriver(com.earthview.world.spatial3d.dataexchange.ModelDataDriver ref_driver)
	{
		super.setDestDataDriver_NoVirtual(ref_driver);
	}
	/**
	 * 鍏抽棴绾跨▼
	 * @param  
	 */
	public void shutdown()
	{
		super.shutdown_NoVirtual();
	}
	/**
	 * 鑾峰彇鏁版嵁杞崲绫诲瀷
	 * @return 鏁版嵁杞崲绫诲瀷
	 */
	public com.earthview.world.spatial.convertor.EVDataExchangeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 杩涜鏁版嵁杞崲
	 * @return 鏁版嵁杞崲缁撴灉锛�0琛ㄧずOK
	 */
	public int exchange()
	{
		return super.exchange_NoVirtual();
	}
	/**
	 * 璁剧疆鐩戝惉锛堝唴閮ㄤ繚瀛樺紩鐢級
	 * @param listener 鐩戝惉瀵硅薄锛岀▼搴忕粨鏉熼渶澶栭儴鍒犻櫎
	 */
	public void setListener(com.earthview.world.spatial.convertor.Idataexchangelistener ref_listener)
	{
		super.setListener_NoVirtual(ref_listener);
	}
	/**
	 * 鑾峰彇鐩戝惉瀵硅薄
	 * @return 鑾峰彇鐩戝惉瀵硅薄鎸囬拡锛屼笉闇�鍒犻櫎
	 */
	public com.earthview.world.spatial.convertor.Idataexchangelistener getListener()
	{
		return super.getListener_NoVirtual();
	}
	
	native protected void register_setSrcDataDriver_CModelDataDriver(long pNativeObject, String method);
	native protected void register_setDestDataDriver_CModelDataDriver(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_startup_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_exchange_void(long pNativeObject, String method);
	native protected void register_setListener_IDataExchangeListener(long pNativeObject, String method);
	native protected void register_getListener_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setSrcDataDriver_CModelDataDriver(this.nativeObject.pointer, "setSrcDataDriver_CModelDataDriver_callback");
			this.register_setDestDataDriver_CModelDataDriver(this.nativeObject.pointer, "setDestDataDriver_CModelDataDriver_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_startup_void(this.nativeObject.pointer, "startup_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_exchange_void(this.nativeObject.pointer, "exchange_void_callback");
			this.register_setListener_IDataExchangeListener(this.nativeObject.pointer, "setListener_IDataExchangeListener_callback");
			this.register_getListener_void(this.nativeObject.pointer, "getListener_void_callback");
		}
	}
	
	public static ShapeDataExchange fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShapeDataExchange obj = null;
 		if(baseObj instanceof ShapeDataExchange)
		{
			obj = (ShapeDataExchange)baseObj;
		} else {
			obj = new ShapeDataExchange(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShapeDataExchange");
			obj.increaseCast();
		}

		return obj;
	}
}
