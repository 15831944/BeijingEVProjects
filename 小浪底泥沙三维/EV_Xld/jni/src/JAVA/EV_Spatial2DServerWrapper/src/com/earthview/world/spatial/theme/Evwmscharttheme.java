package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * WMSͼ��Ĭ��ר��ͼר��ͼ��
 */
public class Evwmscharttheme extends com.earthview.world.spatial.theme.Itheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CEVWMSChartTheme", new EvwmschartthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCEVWMSChartThemeProxy", new EvwmschartthemeClassFactory());
	}

	/**
	 * ���캯��
	 */
	public Evwmscharttheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEVWMSChartThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.theme.Evwmscharttheme".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setDisplayMode_EVString_callback(String displayMode)
	{
		String displayModeParamValue = displayMode;
		setDisplayMode(displayModeParamValue);
	}

	native private void setDisplayMode_EVString(long pNativeObject, String displayMode);
	/**
	 * ������ʾģʽ
	 */
	public void setDisplayMode(String displayMode)
	{
		String displayModeParamValue = displayMode;
		setDisplayMode_EVString(this.nativeObject.pointer, displayModeParamValue);
	}
	native private void setDisplayMode_EVString_NoVirtual(long pNativeObject, String displayMode);
	protected void setDisplayMode_NoVirtual(String displayMode)
	{
		String displayModeParamValue = displayMode;
		setDisplayMode_EVString_NoVirtual(this.nativeObject.pointer, displayModeParamValue);
	}

	protected  String getDisplayMode_void_callback()
	{
		String returnValue = getDisplayMode();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDisplayMode_void(long pNativeObject);
	/**
	 * ��ȡ��ʾģʽ
	 */
	public String getDisplayMode()
	{
		String returnValue = getDisplayMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDisplayMode_void_NoVirtual(long pNativeObject);
	protected String getDisplayMode_NoVirtual()
	{
		String returnValue = getDisplayMode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColorMode_EVString_callback(String colorMode)
	{
		String colorModeParamValue = colorMode;
		setColorMode(colorModeParamValue);
	}

	native private void setColorMode_EVString(long pNativeObject, String colorMode);
	/**
	 * ������ɫģʽ
	 */
	public void setColorMode(String colorMode)
	{
		String colorModeParamValue = colorMode;
		setColorMode_EVString(this.nativeObject.pointer, colorModeParamValue);
	}
	native private void setColorMode_EVString_NoVirtual(long pNativeObject, String colorMode);
	protected void setColorMode_NoVirtual(String colorMode)
	{
		String colorModeParamValue = colorMode;
		setColorMode_EVString_NoVirtual(this.nativeObject.pointer, colorModeParamValue);
	}

	protected  String getColorMode_void_callback()
	{
		String returnValue = getColorMode();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getColorMode_void(long pNativeObject);
	/**
	 * ��ȡ��ɫģʽ
	 */
	public String getColorMode()
	{
		String returnValue = getColorMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getColorMode_void_NoVirtual(long pNativeObject);
	protected String getColorMode_NoVirtual()
	{
		String returnValue = getColorMode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSymbolMode_EVString_callback(String symbolMode)
	{
		String symbolModeParamValue = symbolMode;
		setSymbolMode(symbolModeParamValue);
	}

	native private void setSymbolMode_EVString(long pNativeObject, String symbolMode);
	/**
	 * ���÷���ģʽ
	 */
	public void setSymbolMode(String symbolMode)
	{
		String symbolModeParamValue = symbolMode;
		setSymbolMode_EVString(this.nativeObject.pointer, symbolModeParamValue);
	}
	native private void setSymbolMode_EVString_NoVirtual(long pNativeObject, String symbolMode);
	protected void setSymbolMode_NoVirtual(String symbolMode)
	{
		String symbolModeParamValue = symbolMode;
		setSymbolMode_EVString_NoVirtual(this.nativeObject.pointer, symbolModeParamValue);
	}

	protected  String getSymbolMode_void_callback()
	{
		String returnValue = getSymbolMode();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSymbolMode_void(long pNativeObject);
	/**
	 * ��ȡ����ģʽ
	 */
	public String getSymbolMode()
	{
		String returnValue = getSymbolMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSymbolMode_void_NoVirtual(long pNativeObject);
	protected String getSymbolMode_NoVirtual()
	{
		String returnValue = getSymbolMode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setIsoBath_EVString_callback(String isoBath)
	{
		String isoBathParamValue = isoBath;
		setIsoBath(isoBathParamValue);
	}

	native private void setIsoBath_EVString(long pNativeObject, String isoBath);
	/**
	 * ���ð�ȫ������
	 */
	public void setIsoBath(String isoBath)
	{
		String isoBathParamValue = isoBath;
		setIsoBath_EVString(this.nativeObject.pointer, isoBathParamValue);
	}
	native private void setIsoBath_EVString_NoVirtual(long pNativeObject, String isoBath);
	protected void setIsoBath_NoVirtual(String isoBath)
	{
		String isoBathParamValue = isoBath;
		setIsoBath_EVString_NoVirtual(this.nativeObject.pointer, isoBathParamValue);
	}

	protected  String getIsoBath_void_callback()
	{
		String returnValue = getIsoBath();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getIsoBath_void(long pNativeObject);
	/**
	 * ��ȡ��ȫ�����߲���
	 */
	public String getIsoBath()
	{
		String returnValue = getIsoBath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getIsoBath_void_NoVirtual(long pNativeObject);
	protected String getIsoBath_NoVirtual()
	{
		String returnValue = getIsoBath_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAnnoMode_EVString_callback(String annoMode)
	{
		String annoModeParamValue = annoMode;
		setAnnoMode(annoModeParamValue);
	}

	native private void setAnnoMode_EVString(long pNativeObject, String annoMode);
	/**
	 * ����ע������
	 */
	public void setAnnoMode(String annoMode)
	{
		String annoModeParamValue = annoMode;
		setAnnoMode_EVString(this.nativeObject.pointer, annoModeParamValue);
	}
	native private void setAnnoMode_EVString_NoVirtual(long pNativeObject, String annoMode);
	protected void setAnnoMode_NoVirtual(String annoMode)
	{
		String annoModeParamValue = annoMode;
		setAnnoMode_EVString_NoVirtual(this.nativeObject.pointer, annoModeParamValue);
	}

	protected  String getAnnoMode_void_callback()
	{
		String returnValue = getAnnoMode();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getAnnoMode_void(long pNativeObject);
	/**
	 * ��ȡע������
	 */
	public String getAnnoMode()
	{
		String returnValue = getAnnoMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAnnoMode_void_NoVirtual(long pNativeObject);
	protected String getAnnoMode_NoVirtual()
	{
		String returnValue = getAnnoMode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * ����ר��ͼ
	 * @param  
	 * @return ���ظ��Ƶ�ר��ͼ
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

	native private boolean ev_equals_ITheme(long pNativeObject, long theme);
	/**
	 * �Ƿ���ָ��ר��ͼ��ͬ
	 * @param theme ָ����ר��ͼ
	 * @return ����Ƿ���true�����򷵻�false
	 */
	public boolean ev_equals(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		boolean returnValue = ev_equals_ITheme(this.nativeObject.pointer, themeParamValue);
		return returnValue;
	}
	native private boolean ev_equals_ITheme_NoVirtual(long pNativeObject, long theme);
	protected boolean ev_equals_NoVirtual(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		boolean returnValue = ev_equals_ITheme_NoVirtual(this.nativeObject.pointer, themeParamValue);
		return returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * ��ר��ͼ�������
	 * @param stream �����������
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * �������л�ר��ͼ
	 * @param stream �����������
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * ��ר��ͼ���ΪEarthView::World::Core::CXmlElement
	 * @param  
	 * @return ����EarthView::World::Core::CXmlElement
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
	 * ��EarthView::World::Core::CXmlElement��ȡר��ͼ
	 * @param element ָ����EarthView::World::Core::CXmlElement
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

	public Evwmscharttheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwmscharttheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取专题图类型
	 * @param  
	 * @return 返回专题图类型
	 */
	public com.earthview.world.spatial.theme.EVThemeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取标题
	 * @param  
	 * @return 返回标题
	 */
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	/**
	 * 设置标题
	 * @param caption 标题
	 */
	public void setCaption(String caption)
	{
		super.setCaption_NoVirtual(caption);
	}
	/**
	 * 是否为用户自定义符号
	 * @param  
	 * @return 如果是返回true；否则返回false
	 */
	public boolean useDefaultSymbol()
	{
		return super.useDefaultSymbol_NoVirtual();
	}
	/**
	 * 设置是否为用户自定义符号
	 * @param usable 是否用户自定义
	 */
	public void setUseDefaultSymbol(boolean usable)
	{
		super.setUseDefaultSymbol_NoVirtual(usable);
	}
	/**
	 * 获取自定义符号
	 * @param  
	 * @return 返回符号
	 */
	public com.earthview.world.spatial.display.Isymbol getDefaultSymbol()
	{
		return super.getDefaultSymbol_NoVirtual();
	}
	/**
	 * 设置自定义符号
	 * @param symbol 自定义符号
	 */
	public void setDefaultSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setDefaultSymbol_NoVirtual(symbol);
	}
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	
	native protected void register_setDisplayMode_EVString(long pNativeObject, String method);
	native protected void register_getDisplayMode_void(long pNativeObject, String method);
	native protected void register_setColorMode_EVString(long pNativeObject, String method);
	native protected void register_getColorMode_void(long pNativeObject, String method);
	native protected void register_setSymbolMode_EVString(long pNativeObject, String method);
	native protected void register_getSymbolMode_void(long pNativeObject, String method);
	native protected void register_setIsoBath_EVString(long pNativeObject, String method);
	native protected void register_getIsoBath_void(long pNativeObject, String method);
	native protected void register_setAnnoMode_EVString(long pNativeObject, String method);
	native protected void register_getAnnoMode_void(long pNativeObject, String method);
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
			this.register_setDisplayMode_EVString(this.nativeObject.pointer, "setDisplayMode_EVString_callback");
			this.register_getDisplayMode_void(this.nativeObject.pointer, "getDisplayMode_void_callback");
			this.register_setColorMode_EVString(this.nativeObject.pointer, "setColorMode_EVString_callback");
			this.register_getColorMode_void(this.nativeObject.pointer, "getColorMode_void_callback");
			this.register_setSymbolMode_EVString(this.nativeObject.pointer, "setSymbolMode_EVString_callback");
			this.register_getSymbolMode_void(this.nativeObject.pointer, "getSymbolMode_void_callback");
			this.register_setIsoBath_EVString(this.nativeObject.pointer, "setIsoBath_EVString_callback");
			this.register_getIsoBath_void(this.nativeObject.pointer, "getIsoBath_void_callback");
			this.register_setAnnoMode_EVString(this.nativeObject.pointer, "setAnnoMode_EVString_callback");
			this.register_getAnnoMode_void(this.nativeObject.pointer, "getAnnoMode_void_callback");
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
	
	public static Evwmscharttheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwmscharttheme obj = null;
 		if(baseObj instanceof Evwmscharttheme)
		{
			obj = (Evwmscharttheme)baseObj;
		} else {
			obj = new Evwmscharttheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWMSChartTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
