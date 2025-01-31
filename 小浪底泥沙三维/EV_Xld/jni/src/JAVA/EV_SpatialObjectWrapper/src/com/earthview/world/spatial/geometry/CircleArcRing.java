package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial::Geometry::CCircleArcRing，所有圆弧环的基类
 */
public class CircleArcRing extends com.earthview.world.spatial.geometry.CurveRing {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CCircleArcRing", new CircleArcRingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JCCircleArcRingProxy", new CircleArcRingClassFactory());
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断几何体是否有效
	 * @return 如果有效，返回true；否则，返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void_NoVirtual(long pNativeObject);
	protected boolean isValid_NoVirtual()
	{
		boolean returnValue = isValid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getCenterPoint_void_callback()
	{
		com.earthview.world.spatial.geometry.Point returnValue = getCenterPoint();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCenterPoint_void(long pNativeObject);
	/**
	 * 获取中心点对象
	 * @param  
	 * @return 中心点对象指针
	 */
	public com.earthview.world.spatial.geometry.Point getCenterPoint()
	{
		long returnValue = getCenterPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getCenterPoint_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getCenterPoint_NoVirtual()
	{
		long returnValue = getCenterPoint_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	protected  long getCenterPoint2_void_callback()
	{
		com.earthview.world.spatial.geometry.Point returnValue = getCenterPoint2();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCenterPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getCenterPoint2()
	{
		long returnValue = getCenterPoint2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getCenterPoint2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getCenterPoint2_NoVirtual()
	{
		long returnValue = getCenterPoint2_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	protected  long getArcFromPoint_void_callback()
	{
		com.earthview.world.spatial.geometry.Point returnValue = getArcFromPoint();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getArcFromPoint_void(long pNativeObject);
	/**
	 * 获取圆弧起点
	 * @param  
	 * @return 圆弧起点
	 */
	public com.earthview.world.spatial.geometry.Point getArcFromPoint()
	{
		long returnValue = getArcFromPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getArcFromPoint_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getArcFromPoint_NoVirtual()
	{
		long returnValue = getArcFromPoint_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	protected  long getArcFromPoint2_void_callback()
	{
		com.earthview.world.spatial.geometry.Point returnValue = getArcFromPoint2();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getArcFromPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getArcFromPoint2()
	{
		long returnValue = getArcFromPoint2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getArcFromPoint2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getArcFromPoint2_NoVirtual()
	{
		long returnValue = getArcFromPoint2_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	protected  long getArcToPoint_void_callback()
	{
		com.earthview.world.spatial.geometry.Point returnValue = getArcToPoint();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getArcToPoint_void(long pNativeObject);
	/**
	 * 获取圆弧终点
	 * @param  
	 * @return 圆弧终点
	 */
	public com.earthview.world.spatial.geometry.Point getArcToPoint()
	{
		long returnValue = getArcToPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getArcToPoint_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getArcToPoint_NoVirtual()
	{
		long returnValue = getArcToPoint_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	protected  long getArcToPoint2_void_callback()
	{
		com.earthview.world.spatial.geometry.Point returnValue = getArcToPoint2();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getArcToPoint2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point getArcToPoint2()
	{
		long returnValue = getArcToPoint2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getArcToPoint2_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Point getArcToPoint2_NoVirtual()
	{
		long returnValue = getArcToPoint2_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}

	protected  double getRadius_void_callback()
	{
		double returnValue = getRadius();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRadius_void(long pNativeObject);
	/**
	 * 获取半径
	 * @param  
	 * @return 圆半径
	 */
	public double getRadius()
	{
		double returnValue = getRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRadius_void_NoVirtual(long pNativeObject);
	protected double getRadius_NoVirtual()
	{
		double returnValue = getRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getFromAngle_void_callback()
	{
		double returnValue = getFromAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFromAngle_void(long pNativeObject);
	/**
	 * 获取起始角度
	 * @param  
	 * @return 起始角度
	 */
	public double getFromAngle()
	{
		double returnValue = getFromAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFromAngle_void_NoVirtual(long pNativeObject);
	protected double getFromAngle_NoVirtual()
	{
		double returnValue = getFromAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getToAngle_void_callback()
	{
		double returnValue = getToAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getToAngle_void(long pNativeObject);
	/**
	 * 获取终止角度
	 * @param  
	 * @return 终止角度
	 */
	public double getToAngle()
	{
		double returnValue = getToAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getToAngle_void_NoVirtual(long pNativeObject);
	protected double getToAngle_NoVirtual()
	{
		double returnValue = getToAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getSweepAngle_void_callback()
	{
		double returnValue = getSweepAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSweepAngle_void(long pNativeObject);
	/**
	 * 获取圆心角
	 * @param  
	 * @return 圆心角
	 */
	public double getSweepAngle()
	{
		double returnValue = getSweepAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSweepAngle_void_NoVirtual(long pNativeObject);
	protected double getSweepAngle_NoVirtual()
	{
		double returnValue = getSweepAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getArcLength_void_callback()
	{
		double returnValue = getArcLength();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getArcLength_void(long pNativeObject);
	/**
	 * 获取圆弧长度
	 * @param  
	 * @return 圆弧长度
	 */
	public double getArcLength()
	{
		double returnValue = getArcLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getArcLength_void_NoVirtual(long pNativeObject);
	protected double getArcLength_NoVirtual()
	{
		double returnValue = getArcLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getChordLength_void_callback()
	{
		double returnValue = getChordLength();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getChordLength_void(long pNativeObject);
	/**
	 * 获取弦长
	 * @param  
	 * @return 弦长
	 */
	public double getChordLength()
	{
		double returnValue = getChordLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getChordLength_void_NoVirtual(long pNativeObject);
	protected double getChordLength_NoVirtual()
	{
		double returnValue = getChordLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getChordHeight_void_callback()
	{
		double returnValue = getChordHeight();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getChordHeight_void(long pNativeObject);
	/**
	 * 获取弦高
	 * @param  
	 * @return 弦高
	 */
	public double getChordHeight()
	{
		double returnValue = getChordHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getChordHeight_void_NoVirtual(long pNativeObject);
	protected double getChordHeight_NoVirtual()
	{
		double returnValue = getChordHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCircleArcRingByThreePoint_CPoint_CPoint_CPoint_callback(long fromPoint, long toPoint, long controlPoint)
	{
		com.earthview.world.spatial.geometry.Point fromPointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		fromPointParamValue.setDelegate(true);
		fromPointParamValue.setInstancePointer(new InstancePointer(fromPoint));
		IClassFactory fromPointParamValueClassFactory = GlobalClassFactoryMap.get(fromPointParamValue.getCppInstanceTypeName());
		if (fromPointParamValueClassFactory != null)
		{
			fromPointParamValue.setDelegate(true);
			fromPointParamValue = (com.earthview.world.spatial.geometry.Point)fromPointParamValueClassFactory.create();
			fromPointParamValue.setDelegate(true);
			fromPointParamValue.setInstancePointer(new InstancePointer(fromPoint));
		}
		com.earthview.world.spatial.geometry.Point toPointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		toPointParamValue.setDelegate(true);
		toPointParamValue.setInstancePointer(new InstancePointer(toPoint));
		IClassFactory toPointParamValueClassFactory = GlobalClassFactoryMap.get(toPointParamValue.getCppInstanceTypeName());
		if (toPointParamValueClassFactory != null)
		{
			toPointParamValue.setDelegate(true);
			toPointParamValue = (com.earthview.world.spatial.geometry.Point)toPointParamValueClassFactory.create();
			toPointParamValue.setDelegate(true);
			toPointParamValue.setInstancePointer(new InstancePointer(toPoint));
		}
		com.earthview.world.spatial.geometry.Point controlPointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		controlPointParamValue.setDelegate(true);
		controlPointParamValue.setInstancePointer(new InstancePointer(controlPoint));
		IClassFactory controlPointParamValueClassFactory = GlobalClassFactoryMap.get(controlPointParamValue.getCppInstanceTypeName());
		if (controlPointParamValueClassFactory != null)
		{
			controlPointParamValue.setDelegate(true);
			controlPointParamValue = (com.earthview.world.spatial.geometry.Point)controlPointParamValueClassFactory.create();
			controlPointParamValue.setDelegate(true);
			controlPointParamValue.setInstancePointer(new InstancePointer(controlPoint));
		}
		setCircleArcRingByThreePoint(fromPointParamValue, toPointParamValue, controlPointParamValue);
	}

	native private void setCircleArcRingByThreePoint_CPoint_CPoint_CPoint(long pNativeObject, long fromPoint, long toPoint, long controlPoint);
	/**
	 * 设置圆弧环
	 * @param fromPoint 圆弧起点
	 * @param toPoint 圆弧终点
	 * @param controlPoint 控制（弦高）点
	 */
	public void setCircleArcRingByThreePoint(com.earthview.world.spatial.geometry.Point fromPoint, com.earthview.world.spatial.geometry.Point toPoint, com.earthview.world.spatial.geometry.Point controlPoint)
	{
		long fromPointParamValue = fromPoint.nativeObject.pointer;
		long toPointParamValue = toPoint.nativeObject.pointer;
		long controlPointParamValue = controlPoint.nativeObject.pointer;
		setCircleArcRingByThreePoint_CPoint_CPoint_CPoint(this.nativeObject.pointer, fromPointParamValue, toPointParamValue, controlPointParamValue);
	}
	native private void setCircleArcRingByThreePoint_CPoint_CPoint_CPoint_NoVirtual(long pNativeObject, long fromPoint, long toPoint, long controlPoint);
	protected void setCircleArcRingByThreePoint_NoVirtual(com.earthview.world.spatial.geometry.Point fromPoint, com.earthview.world.spatial.geometry.Point toPoint, com.earthview.world.spatial.geometry.Point controlPoint)
	{
		long fromPointParamValue = fromPoint.nativeObject.pointer;
		long toPointParamValue = toPoint.nativeObject.pointer;
		long controlPointParamValue = controlPoint.nativeObject.pointer;
		setCircleArcRingByThreePoint_CPoint_CPoint_CPoint_NoVirtual(this.nativeObject.pointer, fromPointParamValue, toPointParamValue, controlPointParamValue);
	}

	protected  void setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64_callback(long centerPoint, double radius, double fromAngle, double sweepAngle)
	{
		com.earthview.world.spatial.geometry.Point centerPointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		centerPointParamValue.setDelegate(true);
		centerPointParamValue.setInstancePointer(new InstancePointer(centerPoint));
		IClassFactory centerPointParamValueClassFactory = GlobalClassFactoryMap.get(centerPointParamValue.getCppInstanceTypeName());
		if (centerPointParamValueClassFactory != null)
		{
			centerPointParamValue.setDelegate(true);
			centerPointParamValue = (com.earthview.world.spatial.geometry.Point)centerPointParamValueClassFactory.create();
			centerPointParamValue.setDelegate(true);
			centerPointParamValue.setInstancePointer(new InstancePointer(centerPoint));
		}
		double radiusParamValue = radius;
		double fromAngleParamValue = fromAngle;
		double sweepAngleParamValue = sweepAngle;
		setCircleArcRingByRadius(centerPointParamValue, radiusParamValue, fromAngleParamValue, sweepAngleParamValue);
	}

	native private void setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64(long pNativeObject, long centerPoint, double radius, double fromAngle, double sweepAngle);
	/**
	 * 设置圆弧环
	 * @param centerPoint 中心点
	 * @param radius 半径
	 * @param fromAngle 起始角度
	 * @param sweepAngle 圆心角
	 */
	public void setCircleArcRingByRadius(com.earthview.world.spatial.geometry.Point centerPoint, double radius, double fromAngle, double sweepAngle)
	{
		long centerPointParamValue = centerPoint.nativeObject.pointer;
		double radiusParamValue = radius;
		double fromAngleParamValue = fromAngle;
		double sweepAngleParamValue = sweepAngle;
		setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, centerPointParamValue, radiusParamValue, fromAngleParamValue, sweepAngleParamValue);
	}
	native private void setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long centerPoint, double radius, double fromAngle, double sweepAngle);
	protected void setCircleArcRingByRadius_NoVirtual(com.earthview.world.spatial.geometry.Point centerPoint, double radius, double fromAngle, double sweepAngle)
	{
		long centerPointParamValue = centerPoint.nativeObject.pointer;
		double radiusParamValue = radius;
		double fromAngleParamValue = fromAngle;
		double sweepAngleParamValue = sweepAngle;
		setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, centerPointParamValue, radiusParamValue, fromAngleParamValue, sweepAngleParamValue);
	}

	protected  void setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64_callback(long centerPoint, long edgePoint, double sweepAngle)
	{
		com.earthview.world.spatial.geometry.Point centerPointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		centerPointParamValue.setDelegate(true);
		centerPointParamValue.setInstancePointer(new InstancePointer(centerPoint));
		IClassFactory centerPointParamValueClassFactory = GlobalClassFactoryMap.get(centerPointParamValue.getCppInstanceTypeName());
		if (centerPointParamValueClassFactory != null)
		{
			centerPointParamValue.setDelegate(true);
			centerPointParamValue = (com.earthview.world.spatial.geometry.Point)centerPointParamValueClassFactory.create();
			centerPointParamValue.setDelegate(true);
			centerPointParamValue.setInstancePointer(new InstancePointer(centerPoint));
		}
		com.earthview.world.spatial.geometry.Point edgePointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		edgePointParamValue.setDelegate(true);
		edgePointParamValue.setInstancePointer(new InstancePointer(edgePoint));
		IClassFactory edgePointParamValueClassFactory = GlobalClassFactoryMap.get(edgePointParamValue.getCppInstanceTypeName());
		if (edgePointParamValueClassFactory != null)
		{
			edgePointParamValue.setDelegate(true);
			edgePointParamValue = (com.earthview.world.spatial.geometry.Point)edgePointParamValueClassFactory.create();
			edgePointParamValue.setDelegate(true);
			edgePointParamValue.setInstancePointer(new InstancePointer(edgePoint));
		}
		double sweepAngleParamValue = sweepAngle;
		setCircleArcRingByTwoPoint(centerPointParamValue, edgePointParamValue, sweepAngleParamValue);
	}

	native private void setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64(long pNativeObject, long centerPoint, long edgePoint, double sweepAngle);
	/**
	 * 设置圆弧环
	 * @param centerPoint 中心点
	 * @param edgePoint 起始点
	 * @param sweepAngle 圆心角
	 */
	public void setCircleArcRingByTwoPoint(com.earthview.world.spatial.geometry.Point centerPoint, com.earthview.world.spatial.geometry.Point edgePoint, double sweepAngle)
	{
		long centerPointParamValue = centerPoint.nativeObject.pointer;
		long edgePointParamValue = edgePoint.nativeObject.pointer;
		double sweepAngleParamValue = sweepAngle;
		setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64(this.nativeObject.pointer, centerPointParamValue, edgePointParamValue, sweepAngleParamValue);
	}
	native private void setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64_NoVirtual(long pNativeObject, long centerPoint, long edgePoint, double sweepAngle);
	protected void setCircleArcRingByTwoPoint_NoVirtual(com.earthview.world.spatial.geometry.Point centerPoint, com.earthview.world.spatial.geometry.Point edgePoint, double sweepAngle)
	{
		long centerPointParamValue = centerPoint.nativeObject.pointer;
		long edgePointParamValue = edgePoint.nativeObject.pointer;
		double sweepAngleParamValue = sweepAngle;
		setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64_NoVirtual(this.nativeObject.pointer, centerPointParamValue, edgePointParamValue, sweepAngleParamValue);
	}

	protected  void setCenterPoint_CPoint_callback(long point)
	{
		com.earthview.world.spatial.geometry.Point pointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Point)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		setCenterPoint(pointParamValue);
	}

	native private void setCenterPoint_CPoint(long pNativeObject, long point);
	/**
	 * 设置中心点
	 * @param point 中心点
	 */
	public void setCenterPoint(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		setCenterPoint_CPoint(this.nativeObject.pointer, pointParamValue);
	}
	native private void setCenterPoint_CPoint_NoVirtual(long pNativeObject, long point);
	protected void setCenterPoint_NoVirtual(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		setCenterPoint_CPoint_NoVirtual(this.nativeObject.pointer, pointParamValue);
	}

	protected  void setRadius_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setRadius(valueParamValue);
	}

	native private void setRadius_ev_real64(long pNativeObject, double value);
	/**
	 * 设置半径
	 * @param value 半径
	 */
	public void setRadius(double value)
	{
		double valueParamValue = value;
		setRadius_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setRadius_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setRadius_NoVirtual(double value)
	{
		double valueParamValue = value;
		setRadius_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void setFromAngle_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setFromAngle(valueParamValue);
	}

	native private void setFromAngle_ev_real64(long pNativeObject, double value);
	/**
	 * 设置起始角度
	 * @param value 起始角度
	 */
	public void setFromAngle(double value)
	{
		double valueParamValue = value;
		setFromAngle_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setFromAngle_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setFromAngle_NoVirtual(double value)
	{
		double valueParamValue = value;
		setFromAngle_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void setSweepAngle_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setSweepAngle(valueParamValue);
	}

	native private void setSweepAngle_ev_real64(long pNativeObject, double value);
	/**
	 * 设置圆心角
	 * @param value 圆心角
	 */
	public void setSweepAngle(double value)
	{
		double valueParamValue = value;
		setSweepAngle_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSweepAngle_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setSweepAngle_NoVirtual(double value)
	{
		double valueParamValue = value;
		setSweepAngle_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getArea_void(long pNativeObject);
	/**
	 * 获取圆弧环的面积
	 * @param  
	 * @return 面积
	 */
	public double getArea()
	{
		double returnValue = getArea_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getArea_void_NoVirtual(long pNativeObject);
	protected double getArea_NoVirtual()
	{
		double returnValue = getArea_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getArcFromCoordinateRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Coordinate returnValue = getArcFromCoordinateRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getArcFromCoordinateRef_void(long pNativeObject);
	/**
	 * 获取起始点坐标
	 * @param  
	 * @return 起始点坐标
	 */
	public com.earthview.world.spatial.geometry.Coordinate getArcFromCoordinateRef()
	{
		long returnValue = getArcFromCoordinateRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private long getArcFromCoordinateRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Coordinate getArcFromCoordinateRef_NoVirtual()
	{
		long returnValue = getArcFromCoordinateRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}

	protected  long getArcToCoordinateRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Coordinate returnValue = getArcToCoordinateRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getArcToCoordinateRef_void(long pNativeObject);
	/**
	 * 获取终止点坐标
	 * @param  
	 * @return 终止点坐标
	 */
	public com.earthview.world.spatial.geometry.Coordinate getArcToCoordinateRef()
	{
		long returnValue = getArcToCoordinateRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private long getArcToCoordinateRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Coordinate getArcToCoordinateRef_NoVirtual()
	{
		long returnValue = getArcToCoordinateRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}

	protected  long getCenterCoordinateRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Coordinate returnValue = getCenterCoordinateRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCenterCoordinateRef_void(long pNativeObject);
	/**
	 * 获取中心点坐标
	 * @param  
	 * @return 中心点坐标
	 */
	public com.earthview.world.spatial.geometry.Coordinate getCenterCoordinateRef()
	{
		long returnValue = getCenterCoordinateRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}
	native private long getCenterCoordinateRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Coordinate getCenterCoordinateRef_NoVirtual()
	{
		long returnValue = getCenterCoordinateRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Coordinate __returnValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate, "CCoordinate");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Coordinate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoordinate");
		}
		return __returnValue;
	}

	native private long clone2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.CircleArcRing clone2()
	{
		long returnValue = clone2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.CircleArcRing __returnValue = new com.earthview.world.spatial.geometry.CircleArcRing(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCircleArcRing");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.CircleArcRing)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCircleArcRing");
		}
		return __returnValue;
	}
	native private int add_CCurve_ev_int32(long pNativeObject, long curve, int index);
	public int add(com.earthview.world.spatial.geometry.Curve curve, int index)
	{
		long curveParamValue = curve.nativeObject.pointer;
		int indexParamValue = index;
		int returnValue = add_CCurve_ev_int32(this.nativeObject.pointer, curveParamValue, indexParamValue);
		return returnValue;
	}
	native private int add_CCurve_ev_int32_NoVirtual(long pNativeObject, long curve, int index);
	protected int add_NoVirtual(com.earthview.world.spatial.geometry.Curve curve, int index)
	{
		long curveParamValue = curve.nativeObject.pointer;
		int indexParamValue = index;
		int returnValue = add_CCurve_ev_int32_NoVirtual(this.nativeObject.pointer, curveParamValue, indexParamValue);
		return returnValue;
	}

	native private int remove_ev_uint32_ev_int32(long pNativeObject, long index, int size);
	public int remove(long index, int size)
	{
		long indexParamValue = index;
		int sizeParamValue = size;
		int returnValue = remove_ev_uint32_ev_int32(this.nativeObject.pointer, indexParamValue, sizeParamValue);
		return returnValue;
	}
	native private int remove_ev_uint32_ev_int32_NoVirtual(long pNativeObject, long index, int size);
	protected int remove_NoVirtual(long index, int size)
	{
		long indexParamValue = index;
		int sizeParamValue = size;
		int returnValue = remove_ev_uint32_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue, sizeParamValue);
		return returnValue;
	}

	native private int clear_void(long pNativeObject);
	public int clear()
	{
		int returnValue = clear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int clear_void_NoVirtual(long pNativeObject);
	protected int clear_NoVirtual()
	{
		int returnValue = clear_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public CircleArcRing(com.earthview.world.spatial.geometry.CircleArcRing obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("JCCircleArcRingProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.CircleArcRing".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CCircleArcRing(long pNativeObject, long obj);
	public com.earthview.world.spatial.geometry.CircleArcRing OperatorAssign(com.earthview.world.spatial.geometry.CircleArcRing obj)
	{
		long objParamValue = obj.nativeObject.pointer;
		long returnValue = OperatorAssign_CCircleArcRing(this.nativeObject.pointer, objParamValue);
		com.earthview.world.spatial.geometry.CircleArcRing __returnValue = new com.earthview.world.spatial.geometry.CircleArcRing(CreatedWhenConstruct.CWC_NotToCreate, "CCircleArcRing");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.CircleArcRing)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCircleArcRing");
		}
		return __returnValue;
	}
	public CircleArcRing(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CircleArcRing(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取子曲线的数目
	 * @param  
	 */
	public long getCurveCount()
	{
		return super.getCurveCount_NoVirtual();
	}
	/**
	 * 获取指定索引的曲线对象
	 * @param index 索引
	 */
	public com.earthview.world.spatial.geometry.Curve getCurve(long index)
	{
		return super.getCurve_NoVirtual(index);
	}
	/**
	 * 获取指定索引的曲线对象
	 * @param index 索引
	 */
	public com.earthview.world.spatial.geometry.Curve getCurveRef(long index)
	{
		return super.getCurveRef_NoVirtual(index);
	}
	public int replace(com.earthview.world.spatial.geometry.Curve curve, long index)
	{
		return super.replace_NoVirtual(curve, index);
	}
	public com.earthview.world.spatial.geometry.LineString toLineString2(long smooth)
	{
		return super.toLineString2_NoVirtual(smooth);
	}
	/**
	 * 获取起始点
	 * @param  
	 * @return 起始点
	 */
	public com.earthview.world.spatial.geometry.Point getStartPoint()
	{
		return super.getStartPoint_NoVirtual();
	}
	public com.earthview.world.spatial.geometry.Point getStartPoint2()
	{
		return super.getStartPoint2_NoVirtual();
	}
	/**
	 * 获取结尾点
	 * @param  
	 * @return 结尾点
	 */
	public com.earthview.world.spatial.geometry.Point getEndPoint()
	{
		return super.getEndPoint_NoVirtual();
	}
	public com.earthview.world.spatial.geometry.Point getEndPoint2()
	{
		return super.getEndPoint2_NoVirtual();
	}
	/**
	 * 获取曲线长度
	 * @param  
	 * @return 曲线长度
	 */
	public double getLength()
	{
		return super.getLength_NoVirtual();
	}
	/**
	 * 判断是否闭合。判断标准是首尾点相等
	 * @param  
	 * @return 如果闭合，返回true;否则，返回false
	 */
	public boolean isClosed()
	{
		return super.isClosed_NoVirtual();
	}
	/**
	 * 判断是否环。判断标准是必须简单曲线，然后首尾点相等。
	 * @param  
	 */
	public boolean isRing()
	{
		return super.isRing_NoVirtual();
	}
	/**
	 * 反转曲线环
	 * @param  
	 * @return 成功，返回true;否则，返回false
	 */
	public boolean reverse()
	{
		return super.reverse_NoVirtual();
	}
	/**
	 * 转换成折线
	 * @param smooth 平滑度
	 */
	public com.earthview.world.spatial.geometry.LineString toLineString(long smooth)
	{
		return super.toLineString_NoVirtual(smooth);
	}
	/**
	 * 判断对象的参数是否发生变化
	 * @param  
	 * @return true，表示发生变化，false，表示没有变化
	 */
	public boolean isDirty()
	{
		return super.isDirty_NoVirtual();
	}
	/**
	 * 设置对象的更新标识
	 * @param dirty 新的更新标识
	 */
	public void setDirty(boolean dirty)
	{
		super.setDirty_NoVirtual(dirty);
	}
	/**
	 * 更新对象
	 * @param  
	 */
	public void update()
	{
		super.update_NoVirtual();
	}
	/**
	 * 用道格拉斯算法对几何对象进行化简
	 * @param tolerance 距离容差
	 * @param dimension 几何对象的维度
	 * @return 化简后的几何对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry resample(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.resample_NoVirtual(tolerance, dimension);
	}
	/**
	 * 对称变换
	 * @param line 对称变换的参照线
	 * @return 变换后的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry mirror(com.earthview.world.spatial.geometry.Igeometry line)
	{
		return super.mirror_NoVirtual(line);
	}
	/**
	 * 分割
	 * @param pSplitGeom 分割几何图形（可以为点，线）
	 * @return 分割后得到的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry split(com.earthview.world.spatial.geometry.Igeometry pSplitGeom)
	{
		return super.split_NoVirtual(pSplitGeom);
	}
	/**
	 * 裁剪
	 * @param clipRegion 裁剪区域多边形
	 * @return 裁剪后得到的对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry clip(com.earthview.world.spatial.geometry.Igeometry clipRegion)
	{
		return super.clip_NoVirtual(clipRegion);
	}
	/**
	 * 平滑
	 * @param tolerance 距离容差
	 * @param dimension 几何对象的维度
	 * @return 平滑处理后的几何对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry smooth(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.smooth_NoVirtual(tolerance, dimension);
	}
	/**
	 * 捕捉点
	 * @param point 输入点
	 * @param tolerance 捕捉距离上限
	 * @param snap 捕捉类型参数
	 * @return 捕捉到的点
	 */
	public com.earthview.world.spatial.geometry.Igeometry snapToPoint(com.earthview.world.spatial.geometry.Igeometry point, double tolerance, EnumPointer snap)
	{
		return super.snapToPoint_NoVirtual(point, tolerance, snap);
	}
	/**
	 * 捕捉线段
	 * @param point 输入点
	 * @param tolerance 捕捉距离上限
	 * @return 捕捉到的线段
	 */
	public com.earthview.world.spatial.geometry.Igeometry snapToSegment(com.earthview.world.spatial.geometry.Igeometry point, double tolerance)
	{
		return super.snapToSegment_NoVirtual(point, tolerance);
	}
	/**
	 * 移动一个点
	 * @param frmPoint 待移动的点
	 * @param toPoint 目标点
	 */
	public boolean movePointTo(com.earthview.world.spatial.geometry.Igeometry frmPoint, com.earthview.world.spatial.geometry.Igeometry cpy_toPoint)
	{
		return super.movePointTo_NoVirtual(frmPoint, cpy_toPoint);
	}
	/**
	 * 增加一个点
	 * @param point 待增加的点
	 */
	public boolean addPointTo(com.earthview.world.spatial.geometry.Igeometry cpy_point)
	{
		return super.addPointTo_NoVirtual(cpy_point);
	}
	/**
	 * 删除一个点
	 * @param point 待删除的点
	 */
	public boolean deletePoint(com.earthview.world.spatial.geometry.Igeometry point)
	{
		return super.deletePoint_NoVirtual(point);
	}
	/**
	 * 获取几何体对象的最大外包围盒
	 * @param  
	 * @return 最大外包围盒，const对象，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 获取几何体对象的空间参考系
	 * @param  
	 * @return 空间参考系，const对象指针，原则上该对象是不能直接修改
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		return super.getSpatialReferenceRef_NoVirtual();
	}
	/**
	 * 获取几何体对象的类型
	 * @param  
	 * @return 返回几何体类型
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 获取几何体对象的WKB类型
	 * @param  
	 * @return 返回几何体WKB类型
	 */
	public com.earthview.world.spatial.geometry.EVWKBGeometryType getWKBGeometryType()
	{
		return super.getWKBGeometryType_NoVirtual();
	}
	/**
	 * 判断几何体是否为空
	 * @param  
	 * @return 如果为空，返回true；否则，返回false
	 */
	public boolean isEmpty()
	{
		return super.isEmpty_NoVirtual();
	}
	/**
	 * 判断几何体是否为简单几何体。所谓简单几何体，就是几何体对象没有自相交情况。
	 * @param  
	 * @return 如果为真，返回true；否则，返回false
	 */
	public boolean isSimple()
	{
		return super.isSimple_NoVirtual();
	}
	/**
	 * 把复杂几何体重新切分，组成简单几何体对象。内部会调用isSimple()方法，判断是否为简单几何体。
	 * @param  
	 */
	public void simplify()
	{
		super.simplify_NoVirtual();
	}
	/**
	 * 获取几何体对象的外边框对象。点的外边框对象为空；线的外边框对象是两个端点；面的外边框对象是外边界。
	 * @param  
	 * @return 返回Geometry对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry getBoundary()
	{
		return super.getBoundary_NoVirtual();
	}
	/**
	 * 统一设置Z值
	 * @param z 坐标轴Z值
	 */
	public void makeZ(double z)
	{
		super.makeZ_NoVirtual(z);
	}
	/**
	 * 统一设置M值
	 * @param m 坐标轴M值
	 */
	public void makeM(double m)
	{
		super.makeM_NoVirtual(m);
	}
	/**
	 * 设置空间坐标系
	 * @param sr 空间坐标系
	 */
	public void setSpatialReferenceRef(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReferenceRef_NoVirtual(ref_sr);
	}
	/**
	 * /深度拷贝几何体对象/
	 * @param  
	 * @return 拷贝后的几何体对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * /判断该几何体对象是否包含指定几何体对象。/目前，只支持2维几何体对象的空间关系。/
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果包含，则返回true；否则，返回false
	 */
	public boolean isContains(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isContains_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否与指定几何体对象形状相同。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param tolerance 指定误差范围
	 * @param dimension 指定几何体维数
	 * @return 如果相等，则返回true；否则，返回false
	 */
	public boolean isEquals(com.earthview.world.spatial.geometry.Igeometry geom, double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isEquals_NoVirtual(geom, tolerance, dimension);
	}
	/**
	 * 判断该几何体对象是否相离指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相离，则返回true；否则，返回false
	 */
	public boolean isDisjoin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isDisjoin_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否相交指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相交，则返回true；否则，返回false
	 */
	public boolean isIntersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isIntersects_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否被包含在指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果被包含，则返回true；否则，返回false
	 */
	public boolean isWithin(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isWithin_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否与指定几何体对象相接。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果相接，则返回true；否则，返回false
	 */
	public boolean isTouches(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isTouches_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否跨越指定几何体对象。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 如果跨越，则返回true；否则，返回false
	 */
	public boolean isCrosses(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isCrosses_NoVirtual(geom, dimension);
	}
	/**
	 * 判断该几何体对象是否与指定几何体对象有空间关系。空间关系，利用九交模型进行描述。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param relateMatrix 空间关系九交矩阵
	 * @param dimension 指定几何体维数
	 * @return 如果有关系，则返回true；否则，返回false
	 */
	public boolean isRelates(com.earthview.world.spatial.geometry.Igeometry geom, String relateMatrix, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.isRelates_NoVirtual(geom, relateMatrix, dimension);
	}
	/**
	 * 创建一个Buffer几何体。
	 * @param tolerance 指定容差范围
	 * @param dimension 指定几何体维数
	 * @return 新Buffer对象
	 */
	public com.earthview.world.spatial.geometry.Igeometry buffer(double tolerance, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.buffer_NoVirtual(tolerance, dimension);
	}
	/**
	 * 获取凸多边形。目前，只支持2维几何体对象的空间关系。
	 * @param dimension 指定几何体维数
	 * @return 如果几何体对象本身就是凸多边形，则返回自身；否则，重新获取新几何体对象。
	 */
	public com.earthview.world.spatial.geometry.Igeometry convexHull(com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.convexHull_NoVirtual(dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该不同部分只包含该几何体对象，不包含指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry difference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.difference_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间最小距离。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 几何体之间的最小距离
	 */
	public double distance(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.distance_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的相交部分。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry intersects(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.intersects_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的相叠加。目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry overlaps(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.overlaps_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象之间的不同部分，该部分包括该几何体对象也包括指定几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry symDifference(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.symDifference_NoVirtual(geom, dimension);
	}
	/**
	 * 获取几何体对象与指定几何体对象合并后的新几何体对象目前，只支持2维几何体对象的空间关系。
	 * @param geom 指定几何体对象
	 * @param dimension 指定几何体维数
	 * @return 返回不同部分的几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry unions(com.earthview.world.spatial.geometry.Igeometry geom, com.earthview.world.spatial.geometry.EVDimensionType dimension)
	{
		return super.unions_NoVirtual(geom, dimension);
	}
	/**
	 * 序列化成WKB格式流
	 * @param stream 数据流
	 */
	public void toWKB(com.earthview.world.core.DataStream stream)
	{
		super.toWKB_NoVirtual(stream);
	}
	/**
	 * 序列化成WKT格式字符串
	 * @param wkt 字符串
	 */
	public void toWKT(StringPointer wkt)
	{
		super.toWKT_NoVirtual(wkt);
	}
	/**
	 * 序列化成数据流
	 * @param stream 数据流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	/**
	 * 平移几何体，默认提供中心点平移
	 * @param x X轴方向平移值
	 * @param y Y轴方向平移值
	 * @param z Z轴方向平移值
	 */
	public void translate(double x, double y, double z)
	{
		super.translate_NoVirtual(x, y, z);
	}
	/**
	 * 旋转几何体，默认提供包围盒中心点旋转
	 * @param xRef 旋转参考点X值
	 * @param yRef 旋转参考点Y值
	 * @param zRef 旋转参考点Z值
	 * @param x X轴方向旋转角度
	 * @param y Y轴方向旋转角度
	 * @param z Z轴方向旋转角度
	 */
	public void rotate(double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle)
	{
		super.rotate_NoVirtual(xRef, yRef, zRef, xAngle, yAngle, zAngle);
	}
	/**
	 * 旋转几何体，默认提供包围盒中心点缩放
	 * @param x X轴方向缩放比例，[-1,1]
	 * @param y Y轴方向缩放比例，[-1,1]
	 * @param z Z轴方向缩放比例，[-1,1]
	 */
	public void scale(double xRef, double yRef, double zRef, double x, double y, double z)
	{
		super.scale_NoVirtual(xRef, yRef, zRef, x, y, z);
	}
	/**
	 * 投影坐标转换，默认采取布尔莎算法。七参数不足7个，按默认为0处理。
	 * @param sr 新坐标系统
	 * @param seven 七参数，顺序为：offsetX,offsetY,offsetZ,rotateX,rotateY,rotateZ,radio
	 * @param count 七参数数目
	 */
	public void projects(com.earthview.world.spatial.geometry.Ispatialreference sr, DoublePointer sevenParam, long count)
	{
		super.projects_NoVirtual(sr, sevenParam, count);
	}
	/**
	 * 获取内部中心点
	 * @param coor 内部中心点
	 * @return 获取成功返回true,否则返回false
	 */
	public boolean getInteriorPoint(com.earthview.world.spatial.geometry.Igeometry point)
	{
		return super.getInteriorPoint_NoVirtual(point);
	}
	
	native protected void register_getCenterPoint_void(long pNativeObject, String method);
	native protected void register_getCenterPoint2_void(long pNativeObject, String method);
	native protected void register_getArcFromPoint_void(long pNativeObject, String method);
	native protected void register_getArcFromPoint2_void(long pNativeObject, String method);
	native protected void register_getArcToPoint_void(long pNativeObject, String method);
	native protected void register_getArcToPoint2_void(long pNativeObject, String method);
	native protected void register_getRadius_void(long pNativeObject, String method);
	native protected void register_getFromAngle_void(long pNativeObject, String method);
	native protected void register_getToAngle_void(long pNativeObject, String method);
	native protected void register_getSweepAngle_void(long pNativeObject, String method);
	native protected void register_getArcLength_void(long pNativeObject, String method);
	native protected void register_getChordLength_void(long pNativeObject, String method);
	native protected void register_getChordHeight_void(long pNativeObject, String method);
	native protected void register_setCircleArcRingByThreePoint_CPoint_CPoint_CPoint(long pNativeObject, String method);
	native protected void register_setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64(long pNativeObject, String method);
	native protected void register_setCenterPoint_CPoint(long pNativeObject, String method);
	native protected void register_setRadius_ev_real64(long pNativeObject, String method);
	native protected void register_setFromAngle_ev_real64(long pNativeObject, String method);
	native protected void register_setSweepAngle_ev_real64(long pNativeObject, String method);
	native protected void register_getArcFromCoordinateRef_void(long pNativeObject, String method);
	native protected void register_getArcToCoordinateRef_void(long pNativeObject, String method);
	native protected void register_getCenterCoordinateRef_void(long pNativeObject, String method);
	native protected void register_getArea_void(long pNativeObject, String method);
	native protected void register_getCurveCount_void(long pNativeObject, String method);
	native protected void register_getCurve_ev_uint32(long pNativeObject, String method);
	native protected void register_getCurveRef_ev_uint32(long pNativeObject, String method);
	native protected void register_add_CCurve_ev_int32(long pNativeObject, String method);
	native protected void register_remove_ev_uint32_ev_int32(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_replace_CCurve_ev_uint32(long pNativeObject, String method);
	native protected void register_toLineString2_ev_uint32(long pNativeObject, String method);
	native protected void register_getStartPoint_void(long pNativeObject, String method);
	native protected void register_getStartPoint2_void(long pNativeObject, String method);
	native protected void register_getEndPoint_void(long pNativeObject, String method);
	native protected void register_getEndPoint2_void(long pNativeObject, String method);
	native protected void register_getLength_void(long pNativeObject, String method);
	native protected void register_isClosed_void(long pNativeObject, String method);
	native protected void register_isRing_void(long pNativeObject, String method);
	native protected void register_reverse_void(long pNativeObject, String method);
	native protected void register_toLineString_ev_uint32(long pNativeObject, String method);
	native protected void register_isDirty_void(long pNativeObject, String method);
	native protected void register_setDirty_ev_bool(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_resample_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_mirror_IGeometry(long pNativeObject, String method);
	native protected void register_split_IGeometry(long pNativeObject, String method);
	native protected void register_clip_IGeometry(long pNativeObject, String method);
	native protected void register_smooth_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(long pNativeObject, String method);
	native protected void register_snapToSegment_IGeometry_ev_real64(long pNativeObject, String method);
	native protected void register_movePointTo_IGeometry_IGeometry(long pNativeObject, String method);
	native protected void register_addPointTo_IGeometry(long pNativeObject, String method);
	native protected void register_deletePoint_IGeometry(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReferenceRef_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getWKBGeometryType_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isEmpty_void(long pNativeObject, String method);
	native protected void register_isSimple_void(long pNativeObject, String method);
	native protected void register_simplify_void(long pNativeObject, String method);
	native protected void register_getBoundary_void(long pNativeObject, String method);
	native protected void register_makeZ_ev_real64(long pNativeObject, String method);
	native protected void register_makeM_ev_real64(long pNativeObject, String method);
	native protected void register_setSpatialReferenceRef_ISpatialReference(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_isContains_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isEquals_IGeometry_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_isDisjoin_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isIntersects_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isWithin_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isTouches_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isCrosses_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_isRelates_IGeometry_EVString_EVDimensionType(long pNativeObject, String method);
	native protected void register_buffer_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_convexHull_EVDimensionType(long pNativeObject, String method);
	native protected void register_difference_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_distance_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_intersects_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_overlaps_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_symDifference_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_unions_IGeometry_EVDimensionType(long pNativeObject, String method);
	native protected void register_toWKB_CDataStream(long pNativeObject, String method);
	native protected void register_toWKT_EVString(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_translate_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_projects_ISpatialReference_ev_real64_ev_uint32(long pNativeObject, String method);
	native protected void register_getInteriorPoint_IGeometry(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCenterPoint_void(this.nativeObject.pointer, "getCenterPoint_void_callback");
			this.register_getCenterPoint2_void(this.nativeObject.pointer, "getCenterPoint2_void_callback");
			this.register_getArcFromPoint_void(this.nativeObject.pointer, "getArcFromPoint_void_callback");
			this.register_getArcFromPoint2_void(this.nativeObject.pointer, "getArcFromPoint2_void_callback");
			this.register_getArcToPoint_void(this.nativeObject.pointer, "getArcToPoint_void_callback");
			this.register_getArcToPoint2_void(this.nativeObject.pointer, "getArcToPoint2_void_callback");
			this.register_getRadius_void(this.nativeObject.pointer, "getRadius_void_callback");
			this.register_getFromAngle_void(this.nativeObject.pointer, "getFromAngle_void_callback");
			this.register_getToAngle_void(this.nativeObject.pointer, "getToAngle_void_callback");
			this.register_getSweepAngle_void(this.nativeObject.pointer, "getSweepAngle_void_callback");
			this.register_getArcLength_void(this.nativeObject.pointer, "getArcLength_void_callback");
			this.register_getChordLength_void(this.nativeObject.pointer, "getChordLength_void_callback");
			this.register_getChordHeight_void(this.nativeObject.pointer, "getChordHeight_void_callback");
			this.register_setCircleArcRingByThreePoint_CPoint_CPoint_CPoint(this.nativeObject.pointer, "setCircleArcRingByThreePoint_CPoint_CPoint_CPoint_callback");
			this.register_setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "setCircleArcRingByRadius_CPoint_ev_real64_ev_real64_ev_real64_callback");
			this.register_setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64(this.nativeObject.pointer, "setCircleArcRingByTwoPoint_CPoint_CPoint_ev_real64_callback");
			this.register_setCenterPoint_CPoint(this.nativeObject.pointer, "setCenterPoint_CPoint_callback");
			this.register_setRadius_ev_real64(this.nativeObject.pointer, "setRadius_ev_real64_callback");
			this.register_setFromAngle_ev_real64(this.nativeObject.pointer, "setFromAngle_ev_real64_callback");
			this.register_setSweepAngle_ev_real64(this.nativeObject.pointer, "setSweepAngle_ev_real64_callback");
			this.register_getArcFromCoordinateRef_void(this.nativeObject.pointer, "getArcFromCoordinateRef_void_callback");
			this.register_getArcToCoordinateRef_void(this.nativeObject.pointer, "getArcToCoordinateRef_void_callback");
			this.register_getCenterCoordinateRef_void(this.nativeObject.pointer, "getCenterCoordinateRef_void_callback");
			this.register_getArea_void(this.nativeObject.pointer, "getArea_void_callback");
			this.register_getCurveCount_void(this.nativeObject.pointer, "getCurveCount_void_callback");
			this.register_getCurve_ev_uint32(this.nativeObject.pointer, "getCurve_ev_uint32_callback");
			this.register_getCurveRef_ev_uint32(this.nativeObject.pointer, "getCurveRef_ev_uint32_callback");
			this.register_add_CCurve_ev_int32(this.nativeObject.pointer, "add_CCurve_ev_int32_callback");
			this.register_remove_ev_uint32_ev_int32(this.nativeObject.pointer, "remove_ev_uint32_ev_int32_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_replace_CCurve_ev_uint32(this.nativeObject.pointer, "replace_CCurve_ev_uint32_callback");
			this.register_toLineString2_ev_uint32(this.nativeObject.pointer, "toLineString2_ev_uint32_callback");
			this.register_getStartPoint_void(this.nativeObject.pointer, "getStartPoint_void_callback");
			this.register_getStartPoint2_void(this.nativeObject.pointer, "getStartPoint2_void_callback");
			this.register_getEndPoint_void(this.nativeObject.pointer, "getEndPoint_void_callback");
			this.register_getEndPoint2_void(this.nativeObject.pointer, "getEndPoint2_void_callback");
			this.register_getLength_void(this.nativeObject.pointer, "getLength_void_callback");
			this.register_isClosed_void(this.nativeObject.pointer, "isClosed_void_callback");
			this.register_isRing_void(this.nativeObject.pointer, "isRing_void_callback");
			this.register_reverse_void(this.nativeObject.pointer, "reverse_void_callback");
			this.register_toLineString_ev_uint32(this.nativeObject.pointer, "toLineString_ev_uint32_callback");
			this.register_isDirty_void(this.nativeObject.pointer, "isDirty_void_callback");
			this.register_setDirty_ev_bool(this.nativeObject.pointer, "setDirty_ev_bool_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_resample_ev_real64_EVDimensionType(this.nativeObject.pointer, "resample_ev_real64_EVDimensionType_callback");
			this.register_mirror_IGeometry(this.nativeObject.pointer, "mirror_IGeometry_callback");
			this.register_split_IGeometry(this.nativeObject.pointer, "split_IGeometry_callback");
			this.register_clip_IGeometry(this.nativeObject.pointer, "clip_IGeometry_callback");
			this.register_smooth_ev_real64_EVDimensionType(this.nativeObject.pointer, "smooth_ev_real64_EVDimensionType_callback");
			this.register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType(this.nativeObject.pointer, "snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback");
			this.register_snapToSegment_IGeometry_ev_real64(this.nativeObject.pointer, "snapToSegment_IGeometry_ev_real64_callback");
			this.register_movePointTo_IGeometry_IGeometry(this.nativeObject.pointer, "movePointTo_IGeometry_IGeometry_callback");
			this.register_addPointTo_IGeometry(this.nativeObject.pointer, "addPointTo_IGeometry_callback");
			this.register_deletePoint_IGeometry(this.nativeObject.pointer, "deletePoint_IGeometry_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReferenceRef_void(this.nativeObject.pointer, "getSpatialReferenceRef_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getWKBGeometryType_void(this.nativeObject.pointer, "getWKBGeometryType_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isEmpty_void(this.nativeObject.pointer, "isEmpty_void_callback");
			this.register_isSimple_void(this.nativeObject.pointer, "isSimple_void_callback");
			this.register_simplify_void(this.nativeObject.pointer, "simplify_void_callback");
			this.register_getBoundary_void(this.nativeObject.pointer, "getBoundary_void_callback");
			this.register_makeZ_ev_real64(this.nativeObject.pointer, "makeZ_ev_real64_callback");
			this.register_makeM_ev_real64(this.nativeObject.pointer, "makeM_ev_real64_callback");
			this.register_setSpatialReferenceRef_ISpatialReference(this.nativeObject.pointer, "setSpatialReferenceRef_ISpatialReference_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_isContains_IGeometry_EVDimensionType(this.nativeObject.pointer, "isContains_IGeometry_EVDimensionType_callback");
			this.register_isEquals_IGeometry_ev_real64_EVDimensionType(this.nativeObject.pointer, "isEquals_IGeometry_ev_real64_EVDimensionType_callback");
			this.register_isDisjoin_IGeometry_EVDimensionType(this.nativeObject.pointer, "isDisjoin_IGeometry_EVDimensionType_callback");
			this.register_isIntersects_IGeometry_EVDimensionType(this.nativeObject.pointer, "isIntersects_IGeometry_EVDimensionType_callback");
			this.register_isWithin_IGeometry_EVDimensionType(this.nativeObject.pointer, "isWithin_IGeometry_EVDimensionType_callback");
			this.register_isTouches_IGeometry_EVDimensionType(this.nativeObject.pointer, "isTouches_IGeometry_EVDimensionType_callback");
			this.register_isCrosses_IGeometry_EVDimensionType(this.nativeObject.pointer, "isCrosses_IGeometry_EVDimensionType_callback");
			this.register_isRelates_IGeometry_EVString_EVDimensionType(this.nativeObject.pointer, "isRelates_IGeometry_EVString_EVDimensionType_callback");
			this.register_buffer_ev_real64_EVDimensionType(this.nativeObject.pointer, "buffer_ev_real64_EVDimensionType_callback");
			this.register_convexHull_EVDimensionType(this.nativeObject.pointer, "convexHull_EVDimensionType_callback");
			this.register_difference_IGeometry_EVDimensionType(this.nativeObject.pointer, "difference_IGeometry_EVDimensionType_callback");
			this.register_distance_IGeometry_EVDimensionType(this.nativeObject.pointer, "distance_IGeometry_EVDimensionType_callback");
			this.register_intersects_IGeometry_EVDimensionType(this.nativeObject.pointer, "intersects_IGeometry_EVDimensionType_callback");
			this.register_overlaps_IGeometry_EVDimensionType(this.nativeObject.pointer, "overlaps_IGeometry_EVDimensionType_callback");
			this.register_symDifference_IGeometry_EVDimensionType(this.nativeObject.pointer, "symDifference_IGeometry_EVDimensionType_callback");
			this.register_unions_IGeometry_EVDimensionType(this.nativeObject.pointer, "unions_IGeometry_EVDimensionType_callback");
			this.register_toWKB_CDataStream(this.nativeObject.pointer, "toWKB_CDataStream_callback");
			this.register_toWKT_EVString(this.nativeObject.pointer, "toWKT_EVString_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_translate_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "translate_ev_real64_ev_real64_ev_real64_callback");
			this.register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_projects_ISpatialReference_ev_real64_ev_uint32(this.nativeObject.pointer, "projects_ISpatialReference_ev_real64_ev_uint32_callback");
			this.register_getInteriorPoint_IGeometry(this.nativeObject.pointer, "getInteriorPoint_IGeometry_callback");
		}
	}
	
	public static CircleArcRing fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CircleArcRing obj = null;
 		if(baseObj instanceof CircleArcRing)
		{
			obj = (CircleArcRing)baseObj;
		} else {
			obj = new CircleArcRing(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCircleArcRing");
			obj.increaseCast();
		}

		return obj;
	}
}
