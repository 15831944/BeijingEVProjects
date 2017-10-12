package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

/**
 * �����пɼ�����ļ���
 */
public class StreetPointList extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetPointList", new StreetPointListClassFactory());
	}

	/**
	 * Ĭ�Ϲ��캯��
	 * @param  
	 */
	public StreetPointList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CStreetPointList", null);
	}

	native private void push_back_CStreetPoint(long pNativeObject, long t);
	/**
	 * ������ĩβ���Ԫ��
	 * @param t Ԫ��ֵ
	 */
	public void push_back(com.earthview.world.spatial.download.StreetPoint t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CStreetPoint(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * ɾ�����Ԫ��
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * ���ص�һ��Ԫ��
	 * @param  
	 * @return ��һ��Ԫ��ֵ
	 */
	public com.earthview.world.spatial.download.StreetPoint front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.spatial.download.StreetPoint __returnValue = new com.earthview.world.spatial.download.StreetPoint(CreatedWhenConstruct.CWC_NotToCreate, "CStreetPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.StreetPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStreetPoint");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * �������Ԫ��
	 * @param  
	 * @return ���Ԫ��ֵ
	 */
	public com.earthview.world.spatial.download.StreetPoint back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.spatial.download.StreetPoint __returnValue = new com.earthview.world.spatial.download.StreetPoint(CreatedWhenConstruct.CWC_NotToCreate, "CStreetPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.StreetPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStreetPoint");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	/**
	 * �����м�ĳԪ��
	 * @param  
	 * @return Ԫ��ֵ
	 */
	public com.earthview.world.spatial.download.StreetPoint at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.spatial.download.StreetPoint __returnValue = new com.earthview.world.spatial.download.StreetPoint(CreatedWhenConstruct.CWC_NotToCreate, "CStreetPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.StreetPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStreetPoint");
		}
		return __returnValue;
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * �ж������Ƿ�Ϊ��
	 * @param  
	 * @return Ϊ�շ���true������false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * ����������Ԫ��������С
	 * @param  
	 * @return ����������Ԫ��������С
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * �ı�������С
	 * @param newSize ������С
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * �������
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public StreetPointList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StreetPointList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static StreetPointList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StreetPointList obj = null;
 		if(baseObj instanceof StreetPointList)
		{
			obj = (StreetPointList)baseObj;
		} else {
			obj = new StreetPointList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStreetPointList");
			obj.increaseCast();
		}

		return obj;
	}
}
