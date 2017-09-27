package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ��Ļ����
 */
public class ScreenLine extends com.earthview.world.geometry3d.ScreenGeometry {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CScreenLine", new ScreenLineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCScreenLineProxy", new ScreenLineClassFactory());
	}

	/**
	 * ���캯��
	 * @param estimatedVertexCount Ԥ���ĵ���(��Ҫ��ǳ���׼)
	 * @param isWideline �Ƿ��ǿ��ߣ���Ϊ����
	 */
	public ScreenLine(com.earthview.world.graphic.SceneManager ref_scenemanager, long estimatedCount, boolean isWideline) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer estimatedCountPtr = new BasePointer(estimatedCount);
		list.add("estimatedCount", estimatedCountPtr.get());
		BasePointer isWidelinePtr = new BasePointer(isWideline);
		list.add("isWideline", isWidelinePtr.get());
		Create("JCScreenLineProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ScreenLine".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * ���캯��,����������
	 * @param estimatedVertexCount Ԥ���ĵ���(��Ҫ��ǳ���׼)
	 * @param texture ����
	 */
	public ScreenLine(com.earthview.world.graphic.SceneManager ref_scenemanager, long estimatedCount, com.earthview.world.core.DataStreamPtr texture) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer estimatedCountPtr = new BasePointer(estimatedCount);
		list.add("estimatedCount", estimatedCountPtr.get());
		BasePointer texturePtr = new BasePointer(texture);
		list.add("texture", texturePtr.get());
		Create("JCScreenLineProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ScreenLine".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean begin_CColourValue_Real(long pNativeObject, long colour, double width);
	/**
	 * ��ʼһ���ֶ�������ȾʱҲ���Ե��ô˺���
	 * @param colour �ߵ���ɫ
	 * @param width ���ߵĿ��,��λ��Ҫ���õ���������һ��,Ϊ����ʱ��Ч
	 */
	public boolean begin(com.earthview.world.graphic.ColourValue colour, double width)
	{
		long colourParamValue = colour.nativeObject.pointer;
		double widthParamValue = width;
		boolean returnValue = begin_CColourValue_Real(this.nativeObject.pointer, colourParamValue, widthParamValue);
		return returnValue;
	}
	native private boolean begin_CColourValue(long pNativeObject, long colour);
	public boolean begin(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		boolean returnValue = begin_CColourValue(this.nativeObject.pointer, colourParamValue);
		return returnValue;
	}
	native private boolean begin_void(long pNativeObject);
	public boolean begin()
	{
		boolean returnValue = begin_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void appendPoint_CVector2_CColourValue(long pNativeObject, long position, long colour);
	/**
	 * ����ǰ�ֶ�����׷�ӵ�����ȾʱҲ���Ե��ô˺���(��������Ⱦʱ׷�ӵ�)
	 * @param position ������
	 * @param colour �ߵ���ɫ(�˵���ǰһ��֮����߶ε���ɫ)
	 */
	public void appendPoint(com.earthview.world.spatial.math.Vector2 position, com.earthview.world.graphic.ColourValue colour)
	{
		long positionParamValue = position.nativeObject.pointer;
		long colourParamValue = colour.nativeObject.pointer;
		appendPoint_CVector2_CColourValue(this.nativeObject.pointer, positionParamValue, colourParamValue);
	}
	native private void appendPoint_CVector2(long pNativeObject, long position);
	public void appendPoint(com.earthview.world.spatial.math.Vector2 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		appendPoint_CVector2(this.nativeObject.pointer, positionParamValue);
	}
	native private boolean end_void(long pNativeObject);
	/**
	 * ����һ���ֶ���(�´ε���beginSegment�������һ����)����ȾʱҲ���Ե��ô˺���
	 * @param  
	 */
	public boolean end()
	{
		boolean returnValue = end_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ScreenLine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenLine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * �ҽ�
	 * @param  
	 */
	public void render()
	{
		super.render_NoVirtual();
	}
	/**
	 * ���ҽ�
	 * @param  
	 */
	public void derender()
	{
		super.derender_NoVirtual();
	}
	/**
	 * �����Ƿ�ɼ�
	 * @param visible �Ƿ�ɼ�
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * �Ƿ�ɼ�
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * ������Ⱦ��������Ϣ
	 * @param queueID ����ID��
	 */
	public void setRenderQueueGroup(short queueID)
	{
		super.setRenderQueueGroup_NoVirtual(queueID);
	}
	/**
	 * ������Ⱦ��������Ϣ�Ͷ������ȼ�
	 * @param queueID ����ID��
	 * @param priority ���ȼ�
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
	}
	/**
	 * ��ȡ��ʵ�����Ⱦ������
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * ��ȡ����				
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		return super.getMaterial_NoVirtual();
	}
	/**
	 * ��˸
	 */
	public void flash(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms, long flashCount)
	{
		super.flash_NoVirtual(color, hightLight_ms, normally_ms, flashCount);
	}
	/**
	 * ������˸
	 */
	public void endFlash()
	{
		super.endFlash_NoVirtual();
	}
	
	native protected void register_render_void(long pNativeObject, String method);
	native protected void register_derender_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_endFlash_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_render_void(this.nativeObject.pointer, "render_void_callback");
			this.register_derender_void(this.nativeObject.pointer, "derender_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_endFlash_void(this.nativeObject.pointer, "endFlash_void_callback");
		}
	}
	
	public static ScreenLine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenLine obj = null;
 		if(baseObj instanceof ScreenLine)
		{
			obj = (ScreenLine)baseObj;
		} else {
			obj = new ScreenLine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenLine");
			obj.increaseCast();
		}

		return obj;
	}
}
