package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * WMS图层默认专题图专题图类
 */
public class Evwmtsimagetheme extends com.earthview.world.spatial.theme.Itheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CEVWMTSImageTheme", new EvwmtsimagethemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCEVWMTSImageThemeProxy", new EvwmtsimagethemeClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Evwmtsimagetheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEVWMTSImageThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.theme.Evwmtsimagetheme".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制专题图
	 * @param  
	 * @return 返回复制的专题图
	 */
	public com.earthview.world.spatial.theme.Itheme ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Itheme ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将专题图输出为EarthView::World::Core::CXmlElement
	 * @param  
	 * @return 返回EarthView::World::Core::CXmlElement
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从EarthView::World::Core::CXmlElement读取专题图
	 * @param element 指定的EarthView::World::Core::CXmlElement
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

	public Evwmtsimagetheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwmtsimagetheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 鑾峰彇涓撻鍥剧被鍨�
	 * @param  
	 * @return 杩斿洖涓撻鍥剧被鍨�
	 */
	public com.earthview.world.spatial.theme.EVThemeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 鑾峰彇鏍囬
	 * @param  
	 * @return 杩斿洖鏍囬
	 */
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	/**
	 * 璁剧疆鏍囬
	 * @param caption 鏍囬
	 */
	public void setCaption(String caption)
	{
		super.setCaption_NoVirtual(caption);
	}
	/**
	 * 鏄惁涓虹敤鎴疯嚜瀹氫箟绗﹀彿
	 * @param  
	 * @return 濡傛灉鏄繑鍥瀟rue锛涘惁鍒欒繑鍥瀎alse
	 */
	public boolean useDefaultSymbol()
	{
		return super.useDefaultSymbol_NoVirtual();
	}
	/**
	 * 璁剧疆鏄惁涓虹敤鎴疯嚜瀹氫箟绗﹀彿
	 * @param usable 鏄惁鐢ㄦ埛鑷畾涔�
	 */
	public void setUseDefaultSymbol(boolean usable)
	{
		super.setUseDefaultSymbol_NoVirtual(usable);
	}
	/**
	 * 鑾峰彇鑷畾涔夌鍙�
	 * @param  
	 * @return 杩斿洖绗﹀彿
	 */
	public com.earthview.world.spatial.display.Isymbol getDefaultSymbol()
	{
		return super.getDefaultSymbol_NoVirtual();
	}
	/**
	 * 璁剧疆鑷畾涔夌鍙�
	 * @param symbol 鑷畾涔夌鍙�
	 */
	public void setDefaultSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setDefaultSymbol_NoVirtual(symbol);
	}
	/**
	 * 鏄惁涓庢寚瀹氫笓棰樺浘鐩稿悓
	 * @param theme 鎸囧畾鐨勪笓棰樺浘
	 * @return 濡傛灉鏄繑鍥瀟rue锛涘惁鍒欒繑鍥瀎alse
	 */
	public boolean ev_equals(com.earthview.world.spatial.theme.Itheme theme)
	{
		return super.ev_equals_NoVirtual(theme);
	}
	/**
	 * 灏嗕笓棰樺浘杈撳嚭鍒版祦
	 * @param stream 杈撳嚭鍙傛暟锛屾祦
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getCaption_void(long pNativeObject, String method);
	native protected void register_setCaption_EVString(long pNativeObject, String method);
	native protected void register_useDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setUseDefaultSymbol_ev_bool(long pNativeObject, String method);
	native protected void register_getDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setDefaultSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_ev_equals_ITheme(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_onBeforeQuery_IFeatureClass_IQueryFilter(long pNativeObject, String method);
	native protected void register_onAfterQuery_IFeatureSelection_IGeometry(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getCaption_void(this.nativeObject.pointer, "getCaption_void_callback");
			this.register_setCaption_EVString(this.nativeObject.pointer, "setCaption_EVString_callback");
			this.register_useDefaultSymbol_void(this.nativeObject.pointer, "useDefaultSymbol_void_callback");
			this.register_setUseDefaultSymbol_ev_bool(this.nativeObject.pointer, "setUseDefaultSymbol_ev_bool_callback");
			this.register_getDefaultSymbol_void(this.nativeObject.pointer, "getDefaultSymbol_void_callback");
			this.register_setDefaultSymbol_ISymbol(this.nativeObject.pointer, "setDefaultSymbol_ISymbol_callback");
			this.register_ev_equals_ITheme(this.nativeObject.pointer, "ev_equals_ITheme_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_onBeforeQuery_IFeatureClass_IQueryFilter(this.nativeObject.pointer, "onBeforeQuery_IFeatureClass_IQueryFilter_callback");
			this.register_onAfterQuery_IFeatureSelection_IGeometry(this.nativeObject.pointer, "onAfterQuery_IFeatureSelection_IGeometry_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Evwmtsimagetheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwmtsimagetheme obj = null;
 		if(baseObj instanceof Evwmtsimagetheme)
		{
			obj = (Evwmtsimagetheme)baseObj;
		} else {
			obj = new Evwmtsimagetheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWMTSImageTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
