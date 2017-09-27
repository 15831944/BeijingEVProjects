package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Vector3DCacheFieldVector extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector", new Vector3DCacheFieldVectorClassFactory());
	}

	/**
	 * Ĭ�Ϲ��캯��
	 * @param  
	 */
	public Vector3DCacheFieldVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVector3DCacheFieldVector", null);
	}

	native private void push_back_CVector3DCacheField(long pNativeObject, long t);
	/**
	 * ��������β�����ֵΪt��Ԫ��
	 * @param t ���Ԫ�ص�ֵ
	 */
	public void push_back(com.earthview.world.spatial3d.atlas.Vector3DCacheField t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CVector3DCacheField(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * ɾ�����������һ��Ԫ��
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * ���������ĵ�һ��Ԫ�ص�����
	 * @param  
	 */
	public com.earthview.world.spatial3d.atlas.Vector3DCacheField front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.atlas.Vector3DCacheField __returnValue = new com.earthview.world.spatial3d.atlas.Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Vector3DCacheField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheField");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * �������������һ��Ԫ�ص�����
	 * @param  
	 */
	public com.earthview.world.spatial3d.atlas.Vector3DCacheField back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.atlas.Vector3DCacheField __returnValue = new com.earthview.world.spatial3d.atlas.Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Vector3DCacheField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheField");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CVector3DCacheField(long pNativeObject, long pos, long t);
	/**
	 * �ڵ�����pos��ָ���Ԫ��ǰ�����ֵΪt����Ԫ��
	 * @param pos ����Ԫ�ص�λ��
	 * @param t ����Ԫ�ص�ֵ
	 */
	public void insert(long pos, com.earthview.world.spatial3d.atlas.Vector3DCacheField t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CVector3DCacheField(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * ȥ��λ��pos��Ԫ�ص�ֵ
	 * @param pos Ԫ�ص�λ��
	 * @return ����������ǰ��ֵ
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * ���ر��������С�Ƿ�Ϊ0�Ĳ���ֵ
	 * @param  
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * ����[]������ֻ���ɷ�const������ã����ҷ���ֵ���Գ����ڸ�ֵ��������
	 * @param n 
	 */
	public com.earthview.world.spatial3d.atlas.Vector3DCacheField OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.spatial3d.atlas.Vector3DCacheField __returnValue = new com.earthview.world.spatial3d.atlas.Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate, "CVector3DCacheField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Vector3DCacheField)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheField");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * �����±�Ϊn��Ԫ�ص�������const������ã����ҷ���ֵ���ܳ����ڸ�ֵ��������
	 * @param n 
	 */
	public com.earthview.world.spatial3d.atlas.Vector3DCacheField at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.spatial3d.atlas.Vector3DCacheField __returnValue = new com.earthview.world.spatial3d.atlas.Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Vector3DCacheField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheField");
		}
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * ����������Ԫ�صĸ���
	 * @param  
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * ���������ĳ��ȴ�С��ʹ��������newSize��Ԫ��
	 * @param newSize ����
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * ɾ�������е�����Ԫ��
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void swap_CVector3DCacheFieldVector(long pNativeObject, long list);
	/**
	 * ��������
	 * @param  
	 */
	public void swap(com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector list)
	{
		long listParamValue = list.nativeObject.pointer;
		swap_CVector3DCacheFieldVector(this.nativeObject.pointer, listParamValue);
	}
	native private long toXmlElement_void(long pNativeObject);
	/**
	 * ���л���xml�ı�
	 * @param  
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
	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * ��xml�ָ�ͼ�����
	 * @param element xml
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	public Vector3DCacheFieldVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Vector3DCacheFieldVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Vector3DCacheFieldVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Vector3DCacheFieldVector obj = null;
 		if(baseObj instanceof Vector3DCacheFieldVector)
		{
			obj = (Vector3DCacheFieldVector)baseObj;
		} else {
			obj = new Vector3DCacheFieldVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVector3DCacheFieldVector");
			obj.increaseCast();
		}

		return obj;
	}
}
