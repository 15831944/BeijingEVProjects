package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CreateParticleSystemScriptCompilerEvent extends com.earthview.world.graphic.ScriptCompilerEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent", new CreateParticleSystemScriptCompilerEventClassFactory());
	}

	native private String get_mName_void(long pNativeObject);
	public String get_mName()
	{
		String jniValue = get_mName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mName_EVString (long pNativeObject, String value);
	public void set_mName(String mName)
	{
		String mNameParamValue = mName;
		
		set_mName_EVString(this.nativeObject.pointer, mNameParamValue);
	}
	
	native private String get_mResourceGroup_void(long pNativeObject);
	public String get_mResourceGroup()
	{
		String jniValue = get_mResourceGroup_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mResourceGroup_EVString (long pNativeObject, String value);
	public void set_mResourceGroup(String mResourceGroup)
	{
		String mResourceGroupParamValue = mResourceGroup;
		
		set_mResourceGroup_EVString(this.nativeObject.pointer, mResourceGroupParamValue);
	}
	
	native private String get_mFile_void(long pNativeObject);
	public String get_mFile()
	{
		String jniValue = get_mFile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mFile_EVString (long pNativeObject, String value);
	public void set_mFile(String mFile)
	{
		String mFileParamValue = mFile;
		
		set_mFile_EVString(this.nativeObject.pointer, mFileParamValue);
	}
	
	native private static String get_eventType_void();
	public static String get_eventType()
	{
		String jniValue = get_eventType_void();
		
		return jniValue;
	}
	
	native private static void set_eventType_EVString (String value);
	public static void set_eventType(String eventType)
	{
		String eventTypeParamValue = eventType;
		
		set_eventType_EVString(eventTypeParamValue);
	}
	
	public CreateParticleSystemScriptCompilerEvent(String file, String name, String resourceGroup) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer filePtr = new BasePointer(file);
		list.add("file", filePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer resourceGroupPtr = new BasePointer(resourceGroup);
		list.add("resourceGroup", resourceGroupPtr.get());
		Create("CCreateParticleSystemScriptCompilerEvent", list);
	}

	public CreateParticleSystemScriptCompilerEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CreateParticleSystemScriptCompilerEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CreateParticleSystemScriptCompilerEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CreateParticleSystemScriptCompilerEvent obj = null;
 		if(baseObj instanceof CreateParticleSystemScriptCompilerEvent)
		{
			obj = (CreateParticleSystemScriptCompilerEvent)baseObj;
		} else {
			obj = new CreateParticleSystemScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCreateParticleSystemScriptCompilerEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
