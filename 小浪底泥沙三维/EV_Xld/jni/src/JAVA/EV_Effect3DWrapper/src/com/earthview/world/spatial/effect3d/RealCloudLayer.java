package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///��ͼ�����߳�
public class RealCloudLayer extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CRealCloudLayer", new RealCloudLayerClassFactory());
	}

	public RealCloudLayer(com.earthview.world.graphic.SceneManager sce, com.earthview.world.spatial.effect3d.EVCloudType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer scePtr = new BasePointer(sce);
		list.add("sce", scePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CRealCloudLayer", list);
	}

	native private void createRealCloud_CRegionAtmosphere(long pNativeObject, long region);
	public void createRealCloud(com.earthview.world.spatial.effect3d.RegionAtmosphere region)
	{
		long regionParamValue = (region == null ? 0L : region.nativeObject.pointer);
		createRealCloud_CRegionAtmosphere(this.nativeObject.pointer, regionParamValue);
	}
	native private void destroyRealCloud_CRegionAtmosphere(long pNativeObject, long region);
	public void destroyRealCloud(com.earthview.world.spatial.effect3d.RegionAtmosphere region)
	{
		long regionParamValue = (region == null ? 0L : region.nativeObject.pointer);
		destroyRealCloud_CRegionAtmosphere(this.nativeObject.pointer, regionParamValue);
	}
	native private void create_void(long pNativeObject);
	public void create()
	{
		create_void(this.nativeObject.pointer);
	}
	native private void destroy_void(long pNativeObject);
	public void destroy()
	{
		destroy_void(this.nativeObject.pointer);
	}
	native private long copy_void(long pNativeObject);
	public com.earthview.world.spatial.effect3d.RealCloudLayer copy()
	{
		long returnValue = copy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.RealCloudLayer __returnValue = new com.earthview.world.spatial.effect3d.RealCloudLayer(CreatedWhenConstruct.CWC_NotToCreate, "CRealCloudLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.RealCloudLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRealCloudLayer");
		}
		return __returnValue;
	}
	native private void setRealCloudMap_CImage(long pNativeObject, long img);
	public void setRealCloudMap(com.earthview.world.graphic.Image img)
	{
		long imgParamValue = img.nativeObject.pointer;
		setRealCloudMap_CImage(this.nativeObject.pointer, imgParamValue);
	}
	native private void setEnable_bool(long pNativeObject, boolean enable);
	public void setEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnable_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setVisible_bool(long pNativeObject, boolean visible);
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setCloudFlow_bool(long pNativeObject, boolean flowable);
	public void setCloudFlow(boolean flowable)
	{
		boolean flowableParamValue = flowable;
		setCloudFlow_bool(this.nativeObject.pointer, flowableParamValue);
	}
	native private void setRealCloudHeight_float(long pNativeObject, float height);
	public void setRealCloudHeight(float height)
	{
		float heightParamValue = height;
		setRealCloudHeight_float(this.nativeObject.pointer, heightParamValue);
	}
	native private void setRealCloudAlpha_float(long pNativeObject, float alpha);
	public void setRealCloudAlpha(float alpha)
	{
		float alphaParamValue = alpha;
		setRealCloudAlpha_float(this.nativeObject.pointer, alphaParamValue);
	}
	native private void setRegionCloudMapAlpha_EVString_ev_real32(long pNativeObject, String name, float alpha);
	public void setRegionCloudMapAlpha(String name, float alpha)
	{
		String nameParamValue = name;
		float alphaParamValue = alpha;
		setRegionCloudMapAlpha_EVString_ev_real32(this.nativeObject.pointer, nameParamValue, alphaParamValue);
	}
	native private int getCloudType_void(long pNativeObject);
	public com.earthview.world.spatial.effect3d.EVCloudType getCloudType()
	{
		int returnValue = getCloudType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.effect3d.EVCloudType.toEnum(returnValue);
	}
	native private void addRegionCloudMap_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String name, long img, double north, double west, double south, double east, double height);
	/**
	 * ��Ӿֲ���ͼ
	 * @param name �ֲ��Ƶ�����
	 * @param img ͼƬ
	 * @param north �ֲ�����ı��߽硣(��Ϊ��λ)
	 * @param west �ֲ���������߽硣(��Ϊ��λ)
	 * @param south �ֲ�������ϱ߽硣(��Ϊ��λ)
	 * @param east �ֲ�����Ķ��߽硣(��Ϊ��λ)
	 * @param height �ֲ�����Ķ��߽硣(��Ϊ��)
	 */
	public void addRegionCloudMap(String name, com.earthview.world.graphic.Image img, double north, double west, double south, double east, double height)
	{
		String nameParamValue = name;
		long imgParamValue = img.nativeObject.pointer;
		double northParamValue = north;
		double westParamValue = west;
		double southParamValue = south;
		double eastParamValue = east;
		double heightParamValue = height;
		addRegionCloudMap_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, nameParamValue, imgParamValue, northParamValue, westParamValue, southParamValue, eastParamValue, heightParamValue);
	}
	native private void removeRegionCloudMap_EVString(long pNativeObject, String name);
	/**
	 * �Ƴ��ֲ���ͼ
	 * @param name �ֲ��Ƶ�����
	 */
	public void removeRegionCloudMap(String name)
	{
		String nameParamValue = name;
		removeRegionCloudMap_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setRegionCloudMapVisible_EVString_bool(long pNativeObject, String name, boolean visible);
	/**
	 * ���þֲ���ͼ�Ŀɼ���
	 * @param name �ֲ��Ƶ�����
	 * @param visible �ɼ���
	 */
	public void setRegionCloudMapVisible(String name, boolean visible)
	{
		String nameParamValue = name;
		boolean visibleParamValue = visible;
		setRegionCloudMapVisible_EVString_bool(this.nativeObject.pointer, nameParamValue, visibleParamValue);
	}
	native private void setRegionCloudRotationInfomation_EVString_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String name, double centerLat, double centerLon, double rotationAngleVelocity, double rotationRegionRadius);
	/**
	 * ���þֲ���ͼ����ת��Ϣ
	 * @param name �ֲ��Ƶ�����
	 * @param centerLat ���ĵ����γ��
	 * @param centerLon ���ĵ���ľ���
	 * @param rotationAngleVelocity ��ת�Ľ��ٶȣ��Զ�Ϊ��λ
	 * @param rotationRegionRadius ��ת��Χ�İ뾶������Ϊ��λ
	 */
	public void setRegionCloudRotationInfomation(String name, double centerLat, double centerLon, double rotationAngleVelocity, double rotationRegionRadius)
	{
		String nameParamValue = name;
		double centerLatParamValue = centerLat;
		double centerLonParamValue = centerLon;
		double rotationAngleVelocityParamValue = rotationAngleVelocity;
		double rotationRegionRadiusParamValue = rotationRegionRadius;
		setRegionCloudRotationInfomation_EVString_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, nameParamValue, centerLatParamValue, centerLonParamValue, rotationAngleVelocityParamValue, rotationRegionRadiusParamValue);
	}
	native private void enableRotateRegionCloud_EVString(long pNativeObject, String name);
	/**
	 * ������ת�ֲ���
	 * @param name �ֲ��Ƶ�����
	 */
	public void enableRotateRegionCloud(String name)
	{
		String nameParamValue = name;
		enableRotateRegionCloud_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void disableRotateRegionCloud_EVString(long pNativeObject, String name);
	/**
	 * ��ֹת���ֲ���
	 * @param name �ֲ��Ƶ�����
	 */
	public void disableRotateRegionCloud(String name)
	{
		String nameParamValue = name;
		disableRotateRegionCloud_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private boolean getRegionCloudMapVisible_EVString(long pNativeObject, String name);
	/**
	 * ��ȡ�ֲ���ͼ�Ŀɼ���
	 * @param name �ֲ��Ƶ�����
	 */
	public boolean getRegionCloudMapVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getRegionCloudMapVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setWindSpeed_CVector3(long pNativeObject, long speed);
	/**
	 * ���÷���
	 * @param speed ����
	 */
	public void setWindSpeed(com.earthview.world.spatial.math.Vector3 speed)
	{
		long speedParamValue = speed.nativeObject.pointer;
		setWindSpeed_CVector3(this.nativeObject.pointer, speedParamValue);
	}
	native private void enableGetCloudColorFromImage_ev_bool(long pNativeObject, boolean enable);
	/**
	 * ��������Ƶ���ɫ��ͼƬһ��
	 * @param ev_bool �Ƿ�һ��
	 */
	public void enableGetCloudColorFromImage(boolean enable)
	{
		boolean enableParamValue = enable;
		enableGetCloudColorFromImage_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void update_CCamera_double(long pNativeObject, long cam, double time);
	public void update(com.earthview.world.graphic.Camera cam, double time)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double timeParamValue = time;
		update_CCamera_double(this.nativeObject.pointer, camParamValue, timeParamValue);
	}
	public RealCloudLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RealCloudLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RealCloudLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RealCloudLayer obj = null;
 		if(baseObj instanceof RealCloudLayer)
		{
			obj = (RealCloudLayer)baseObj;
		} else {
			obj = new RealCloudLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRealCloudLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
