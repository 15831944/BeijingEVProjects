package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 实体类工厂为实体创建实例
 */
public class CustomEntityFactory extends com.earthview.world.graphic.MovableObjectFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CCustomEntityFactory", new CustomEntityFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCCustomEntityFactoryProxy", new CustomEntityFactoryClassFactory());
	}

	native private long createInstanceImpl_EVString_CommonStringPairList(long pNativeObject, String name, long params);
	/**
	 * 创建实例
	 * @param name 名称
	 * @param params 名称键值列表
	 * @return 实例
	 */
	public com.earthview.world.graphic.MovableObject createInstanceImpl(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstanceImpl_EVString_CommonStringPairList(this.nativeObject.pointer, nameParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long createInstanceImpl_EVString_CommonStringPairList_NoVirtual(long pNativeObject, String name, long params);
	protected com.earthview.world.graphic.MovableObject createInstanceImpl_NoVirtual(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstanceImpl_EVString_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CustomEntityFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCustomEntityFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.CustomEntityFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static String get_CUSTOM_FACTORY_TYPE_NAME_void();
	public static String get_CUSTOM_FACTORY_TYPE_NAME()
	{
		String jniValue = get_CUSTOM_FACTORY_TYPE_NAME_void();
		
		return jniValue;
	}
	
	native private static void set_CUSTOM_FACTORY_TYPE_NAME_EVString (String value);
	public static void set_CUSTOM_FACTORY_TYPE_NAME(String CUSTOM_FACTORY_TYPE_NAME)
	{
		String CUSTOM_FACTORY_TYPE_NAMEParamValue = CUSTOM_FACTORY_TYPE_NAME;
		
		set_CUSTOM_FACTORY_TYPE_NAME_EVString(CUSTOM_FACTORY_TYPE_NAMEParamValue);
	}
	
	native private String getType_void(long pNativeObject);
	/**
	 * 获得实体的类型
	 * @param  
	 * @return 实体的类型
	 */
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void destroyInstance_CMovableObject(long pNativeObject, long obj);
	/**
	 * 销毁实例
	 * @param obj 移动对象
	 */
	public void destroyInstance(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroyInstance_CMovableObject(this.nativeObject.pointer, objParamValue);
	}
	native private void destroyInstance_CMovableObject_NoVirtual(long pNativeObject, long obj);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroyInstance_CMovableObject_NoVirtual(this.nativeObject.pointer, objParamValue);
	}

	public CustomEntityFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CustomEntityFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.MovableObject createInstanceImpl(String name)
	{
		return super.createInstanceImpl_NoVirtual(name);
	}
	/**
	 * 鍒涘缓瀹炰緥涓哄璞″垱寤烘柊鐨勫疄渚�
	 * @param name 瀵硅薄鍚嶇О
	 * @param manager 鍦烘櫙绠＄悊鍣�
	 * @param params 鍙傛暟
	 * @return 瀵硅薄绫诲瀷鐨勫��
	 */
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager, com.earthview.world.core.CommonStringPairList params)
	{
		return super.createInstance_NoVirtual(name, ref_manager, params);
	}
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager)
	{
		return super.createInstance_NoVirtual(name, ref_manager);
	}
	/**
	 * 鏍囪绫诲瀷鍒嗛厤宸ュ巶鏍规嵁鍦烘櫙鏌ヨ鏈夐�夋嫨鎬х殑鍒嗛厤
	 * @param  
	 * @return 閿欒锛岃繑鍥為粯璁ゅ疄鐜帮紝鎴愬姛鎸夐渶姹傚垎閰�
	 */
	public boolean requestTypeFlags()
	{
		return super.requestTypeFlags_NoVirtual();
	}
	
	native protected void register_createInstanceImpl_EVString_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createInstanceImpl_EVString(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_EVString_CSceneManager_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createInstance_EVString_CSceneManager(long pNativeObject, String method);
	native protected void register_destroyInstance_CMovableObject(long pNativeObject, String method);
	native protected void register_requestTypeFlags_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createInstanceImpl_EVString_CommonStringPairList(this.nativeObject.pointer, "createInstanceImpl_EVString_CommonStringPairList_callback");
			this.register_createInstanceImpl_EVString(this.nativeObject.pointer, "createInstanceImpl_EVString_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_EVString_CSceneManager_CommonStringPairList(this.nativeObject.pointer, "createInstance_EVString_CSceneManager_CommonStringPairList_callback");
			this.register_createInstance_EVString_CSceneManager(this.nativeObject.pointer, "createInstance_EVString_CSceneManager_callback");
			this.register_destroyInstance_CMovableObject(this.nativeObject.pointer, "destroyInstance_CMovableObject_callback");
			this.register_requestTypeFlags_void(this.nativeObject.pointer, "requestTypeFlags_void_callback");
		}
	}
	
	public static CustomEntityFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CustomEntityFactory obj = null;
 		if(baseObj instanceof CustomEntityFactory)
		{
			obj = (CustomEntityFactory)baseObj;
		} else {
			obj = new CustomEntityFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCustomEntityFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
