package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单线类提供方法如下：获取与设置简单风格类型获取符号类型、获取流、获取SLD深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class SimpleLineSymbol extends com.earthview.world.spatial.display.LineSymbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSimpleLineSymbol", new SimpleLineSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSimpleLineSymbolProxy", new SimpleLineSymbolClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public SimpleLineSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSimpleLineSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.SimpleLineSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getSimpleLineType_void(long pNativeObject);
	/**
	 * 获取简单风格类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVSimleLineType getSimpleLineType()
	{
		int returnValue = getSimpleLineType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVSimleLineType.toEnum(returnValue);
	}
	native private void setSimpleLineType_EVSimleLineType(long pNativeObject, int nType);
	/**
	 * 设置简单风格类型
	 * @param nType 类型
	 */
	public void setSimpleLineType(com.earthview.world.spatial.display.EVSimleLineType nType)
	{
		int nTypeParamValue = nType.getValue();
		setSimpleLineType_EVSimleLineType(this.nativeObject.pointer, nTypeParamValue);
	}
	native private int getSymbolType_void(long pNativeObject);
	/**
	 * 获取符号类型
	 * @param  
	 * @return 符号类型
	 */
	public int getSymbolType()
	{
		int returnValue = getSymbolType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSymbolType_void_NoVirtual(long pNativeObject);
	protected int getSymbolType_NoVirtual()
	{
		int returnValue = getSymbolType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度copy风格对象
	 * @param  
	 * @return 风格对象
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 获取流
	 * @param stream 流对象
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private String toSLD_void(long pNativeObject);
	/**
	 * 获取SLD
	 * @param  
	 * @return SLD字符串
	 */
	public String toSLD()
	{
		String returnValue = toSLD_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toSLD_void_NoVirtual(long pNativeObject);
	protected String toSLD_NoVirtual()
	{
		String returnValue = toSLD_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML元素中恢复Symbol属性
	 * @param xml XML字符串
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将Symbol属性写入XML元素
	 * @param xml XML字符串
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	native private boolean equal_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否属性相同
	 * @param pSymbol Symbol对象
	 */
	public boolean equal(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean equal_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	native private void fromSLD_EVString(long pNativeObject, long sld);
	/**
	 * 从SLD恢复Symbol属性
	 * @param sld SLD字符串
	 */
	public void fromSLD(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString(this.nativeObject.pointer, sldParamValue);
	}
	native private void fromSLD_EVString_NoVirtual(long pNativeObject, long sld);
	protected void fromSLD_NoVirtual(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString_NoVirtual(this.nativeObject.pointer, sldParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Symbol属性
	 * @param stream 流对象
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public SimpleLineSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SimpleLineSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取线宽度
	 * @param  
	 * @return 线宽
	 */
	public double getWidth()
	{
		return super.getWidth_NoVirtual();
	}
	/**
	 * 设置线宽度
	 * @param dWidth 线宽度
	 */
	public void setWidth(double dWidth)
	{
		super.setWidth_NoVirtual(dWidth);
	}
	/**
	 * 获取拐点类型
	 * @param  
	 * @return 拐点类型
	 */
	public com.earthview.world.spatial.display.EVLineJoinType getJoinType()
	{
		return super.getJoinType_NoVirtual();
	}
	/**
	 * 获取端点类型
	 * @param  
	 * @return 端点类型
	 */
	public com.earthview.world.spatial.display.EVLineCapType getCapType()
	{
		return super.getCapType_NoVirtual();
	}
	/**
	 * 设置拐点类型
	 * @param nType 拐点类型
	 */
	public void setJoinType(com.earthview.world.spatial.display.EVLineJoinType nType)
	{
		super.setJoinType_NoVirtual(nType);
	}
	/**
	 * 设置端点类型
	 * @param nType 端点类型
	 */
	public void setCapType(com.earthview.world.spatial.display.EVLineCapType nType)
	{
		super.setCapType_NoVirtual(nType);
	}
	/**
	 * 获取上下偏移量
	 * @param  
	 * @return 偏移量
	 */
	public double getOffset()
	{
		return super.getOffset_NoVirtual();
	}
	/**
	 * 设置上下偏移量
	 * @param value 偏移量
	 */
	public void setOffset(double value)
	{
		super.setOffset_NoVirtual(value);
	}
	/**
	 * 获取符号大小
	 * @param  
	 * @return 返回符号大小
	 */
	public double getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef()
	{
		return super.getColorRef_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColor()
	{
		return super.getColor_NoVirtual();
	}
	/**
	 * 设置符号颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setColor_NoVirtual(color);
	}
	/**
	 * 符号知否包含图像
	 * @param  
	 * @return 如果包含返回true；否则返回false
	 */
	public boolean hasImage()
	{
		return super.hasImage_NoVirtual();
	}
	/**
	 * 获取包含图像数量
	 * @param  
	 * @return 返回包含图像数量
	 */
	public long getImageCount()
	{
		return super.getImageCount_NoVirtual();
	}
	/**
	 * 获取指定索引处图像ID
	 * @param index 指定位置
	 * @return 返回图像ID
	 */
	public String getImageID(long index)
	{
		return super.getImageID_NoVirtual(index);
	}
	/**
	 * 以内存流的形式获取指定索引处图像
	 * @param index 指定位置
	 * @return 返回图像流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		return super.getImage_NoVirtual(index);
	}
	/**
	 * 设置指定索引的图像
	 * @param index 指定位置
	 * @param imageID 输出，图像
	 * @param stream 输入，流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		super.setImage_NoVirtual(index, imageID, stream);
	}
	/**
	 * 获取符号名称
	 * @param  
	 * @return 返回符号名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置符号名称
	 * @param szName 符号名称
	 */
	public void setName(String szName)
	{
		super.setName_NoVirtual(szName);
	}
	
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_setWidth_ev_real64(long pNativeObject, String method);
	native protected void register_getJoinType_void(long pNativeObject, String method);
	native protected void register_getCapType_void(long pNativeObject, String method);
	native protected void register_setJoinType_EVLineJoinType(long pNativeObject, String method);
	native protected void register_setCapType_EVLineCapType(long pNativeObject, String method);
	native protected void register_getOffset_void(long pNativeObject, String method);
	native protected void register_setOffset_ev_real64(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getColorRef_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toSLD_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_setColor_IColor(long pNativeObject, String method);
	native protected void register_getSymbolType_void(long pNativeObject, String method);
	native protected void register_hasImage_void(long pNativeObject, String method);
	native protected void register_getImageCount_void(long pNativeObject, String method);
	native protected void register_getImageID_ev_uint32(long pNativeObject, String method);
	native protected void register_getImage_ev_uint32(long pNativeObject, String method);
	native protected void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_equal_ISymbol(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromSLD_EVString(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_setWidth_ev_real64(this.nativeObject.pointer, "setWidth_ev_real64_callback");
			this.register_getJoinType_void(this.nativeObject.pointer, "getJoinType_void_callback");
			this.register_getCapType_void(this.nativeObject.pointer, "getCapType_void_callback");
			this.register_setJoinType_EVLineJoinType(this.nativeObject.pointer, "setJoinType_EVLineJoinType_callback");
			this.register_setCapType_EVLineCapType(this.nativeObject.pointer, "setCapType_EVLineCapType_callback");
			this.register_getOffset_void(this.nativeObject.pointer, "getOffset_void_callback");
			this.register_setOffset_ev_real64(this.nativeObject.pointer, "setOffset_ev_real64_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getColorRef_void(this.nativeObject.pointer, "getColorRef_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toSLD_void(this.nativeObject.pointer, "toSLD_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_setColor_IColor(this.nativeObject.pointer, "setColor_IColor_callback");
			this.register_getSymbolType_void(this.nativeObject.pointer, "getSymbolType_void_callback");
			this.register_hasImage_void(this.nativeObject.pointer, "hasImage_void_callback");
			this.register_getImageCount_void(this.nativeObject.pointer, "getImageCount_void_callback");
			this.register_getImageID_ev_uint32(this.nativeObject.pointer, "getImageID_ev_uint32_callback");
			this.register_getImage_ev_uint32(this.nativeObject.pointer, "getImage_ev_uint32_callback");
			this.register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
			this.register_equal_ISymbol(this.nativeObject.pointer, "equal_ISymbol_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromSLD_EVString(this.nativeObject.pointer, "fromSLD_EVString_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static SimpleLineSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SimpleLineSymbol obj = null;
 		if(baseObj instanceof SimpleLineSymbol)
		{
			obj = (SimpleLineSymbol)baseObj;
		} else {
			obj = new SimpleLineSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSimpleLineSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
