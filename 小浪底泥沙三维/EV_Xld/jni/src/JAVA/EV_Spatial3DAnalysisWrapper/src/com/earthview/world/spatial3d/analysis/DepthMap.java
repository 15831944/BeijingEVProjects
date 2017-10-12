package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///�����ʾ�������׵��
public class DepthMap extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CDepthMap", new DepthMapClassFactory());
	}

	public DepthMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDepthMap", null);
	}

	native private float getDepthAt_int_int(long pNativeObject, int x, int y);
	/**
	 * ��ȡλ��(x,y)��Ӧ�����ֵ
	 * @param x ������
	 * @param y ������
	 * @return ���ֵ
	 */
	public float getDepthAt(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		float returnValue = getDepthAt_int_int(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private long getViewProjMatrix_void(long pNativeObject);
	/**
	 * ��ȡ��Ⱦ�����ͼʱʹ�õ������Ӧ����ͼͶӰ����
	 * @return ��ͼͶӰ����
	 */
	public com.earthview.world.spatial.math.Matrix4 getViewProjMatrix()
	{
		long returnValue = getViewProjMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private int getWidth_void(long pNativeObject);
	/**
	 * ��ȡ���ͼ���
	 * @return ���
	 */
	public int getWidth()
	{
		int returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHeight_void(long pNativeObject);
	/**
	 * ��ȡ���ͼ�߶�
	 * @return �߶�
	 */
	public int getHeight()
	{
		int returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DepthMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DepthMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DepthMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DepthMap obj = null;
 		if(baseObj instanceof DepthMap)
		{
			obj = (DepthMap)baseObj;
		} else {
			obj = new DepthMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDepthMap");
			obj.increaseCast();
		}

		return obj;
	}
}
