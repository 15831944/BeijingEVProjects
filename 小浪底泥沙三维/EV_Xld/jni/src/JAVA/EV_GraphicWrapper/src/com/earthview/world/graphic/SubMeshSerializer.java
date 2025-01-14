package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubMeshSerializer extends com.earthview.world.graphic.AnimationBaseSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSubMeshSerializer", new SubMeshSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSubMeshSerializerProxy", new SubMeshSerializerClassFactory());
	}

	public SubMeshSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSubMeshSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SubMeshSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void fromStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void fromStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void fromStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private void toStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void toStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void toStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private long get_msubMeshID_void(long pNativeObject);
	public long get_msubMeshID()
	{
		long jniValue = get_msubMeshID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_msubMeshID_ev_uint32 (long pNativeObject, long value);
	public void set_msubMeshID(long msubMeshID)
	{
		long msubMeshIDParamValue = msubMeshID;
		
		set_msubMeshID_ev_uint32(this.nativeObject.pointer, msubMeshIDParamValue);
	}
	
	native private long get_mInstanceIndex_void(long pNativeObject);
	public long get_mInstanceIndex()
	{
		long jniValue = get_mInstanceIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mInstanceIndex_ev_uint32 (long pNativeObject, long value);
	public void set_mInstanceIndex(long mInstanceIndex)
	{
		long mInstanceIndexParamValue = mInstanceIndex;
		
		set_mInstanceIndex_ev_uint32(this.nativeObject.pointer, mInstanceIndexParamValue);
	}
	
	native private int get_mIndexBegun_void(long pNativeObject);
	public int get_mIndexBegun()
	{
		int jniValue = get_mIndexBegun_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIndexBegun_ev_int32 (long pNativeObject, int value);
	public void set_mIndexBegun(int mIndexBegun)
	{
		int mIndexBegunParamValue = mIndexBegun;
		
		set_mIndexBegun_ev_int32(this.nativeObject.pointer, mIndexBegunParamValue);
	}
	
	native private int get_mIndexEnd_void(long pNativeObject);
	public int get_mIndexEnd()
	{
		int jniValue = get_mIndexEnd_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIndexEnd_ev_int32 (long pNativeObject, int value);
	public void set_mIndexEnd(int mIndexEnd)
	{
		int mIndexEndParamValue = mIndexEnd;
		
		set_mIndexEnd_ev_int32(this.nativeObject.pointer, mIndexEndParamValue);
	}
	
	public SubMeshSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubMeshSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void flipToLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipToLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipToLittleEndian(VoidPointer pData, long size)
	{
		super.flipToLittleEndian_NoVirtual(pData, size);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size);
	}
	public void flipEndian(VoidPointer pData, long size, long count)
	{
		super.flipEndian_NoVirtual(pData, size, count);
	}
	public void flipEndian(VoidPointer pData, long size)
	{
		super.flipEndian_NoVirtual(pData, size);
	}
	//// Determine the endianness of the incoming stream compared to native
	public void determineEndianness(com.earthview.world.core.DataStreamPtr stream)
	{
		super.determineEndianness_NoVirtual(stream);
	}
	//// Determine the endianness to write with based on option
	public void determineEndianness(com.earthview.world.graphic.AnimationBaseSerializer.Endian requestedEndian)
	{
		super.determineEndianness_NoVirtual(requestedEndian);
	}
	
	native protected void register_fromStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_toStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_determineEndianness_DataStreamPtr(long pNativeObject, String method);
	native protected void register_determineEndianness_Endian(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, "fromStreamImplement_DataStreamPtr_callback");
			this.register_toStreamImplement_DataStreamPtr(this.nativeObject.pointer, "toStreamImplement_DataStreamPtr_callback");
			this.register_flipToLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipToLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_callback");
			this.register_determineEndianness_DataStreamPtr(this.nativeObject.pointer, "determineEndianness_DataStreamPtr_callback");
			this.register_determineEndianness_Endian(this.nativeObject.pointer, "determineEndianness_Endian_callback");
		}
	}
	
	public static SubMeshSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubMeshSerializer obj = null;
 		if(baseObj instanceof SubMeshSerializer)
		{
			obj = (SubMeshSerializer)baseObj;
		} else {
			obj = new SubMeshSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubMeshSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
