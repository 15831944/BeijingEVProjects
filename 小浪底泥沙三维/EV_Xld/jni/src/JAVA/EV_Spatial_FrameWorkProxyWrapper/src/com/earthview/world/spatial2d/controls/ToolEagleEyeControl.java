package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///ƽ��
public class ToolEagleEyeControl extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CToolEagleEyeControl", new ToolEagleEyeControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCToolEagleEyeControlProxy", new ToolEagleEyeControlClassFactory());
	}

	public enum OperationFlag implements INativeEnum<OperationFlag> {
		OF_Click(OperationFlagHelper.ENUM_VALUES[0]),
		OF_Rect(OperationFlagHelper.ENUM_VALUES[1]),
		OF_Wheel(OperationFlagHelper.ENUM_VALUES[2]);
		private int value;
		OperationFlag(int i) {
			this.value = i;
		}
		public OperationFlag getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final OperationFlag toEnum(int retval) {
			if(retval == OF_Click.value){
				return OF_Click;
			}
			else if(retval == OF_Rect.value){
				return OF_Rect;
			}
			else if(retval == OF_Wheel.value){
				return OF_Wheel;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class OperationFlagHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * ���캯��
	 * @param  
	 */
	public ToolEagleEyeControl(com.earthview.world.spatial2d.controls.EagleEyeControl ref_ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		Create("JCToolEagleEyeControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.ToolEagleEyeControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void create_CEagleEyeControl(long pNativeObject, long pEagleEyeControl);
	/**
	 * ��������
	 * @param ctrl �ռ���ƶ���
	 */
	public void create(com.earthview.world.spatial2d.controls.EagleEyeControl pEagleEyeControl)
	{
		long pEagleEyeControlParamValue = (pEagleEyeControl == null ? 0L : pEagleEyeControl.nativeObject.pointer);
		create_CEagleEyeControl(this.nativeObject.pointer, pEagleEyeControlParamValue);
	}
	protected  boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseDown(buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ��갴���¼�����
	 * @param button ���ı�ʶ(1���������2�����Ҽ���4�����м�)
	 * @param shift shift���Ƿ�ͬʱ������
	 * @param x ���λ��x
	 * @param y ���λ��y
	 * @return ��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)
	 */
	public boolean onMouseDown(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseDown_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	protected  boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseMove(buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ����ƶ��¼�����
	 * @param button ���ı�ʶ(1���������2�����Ҽ���4�����м�)
	 * @param shift shift���Ƿ�ͬʱ������
	 * @param x ���λ��x
	 * @param y ���λ��y
	 * @return ��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)
	 */
	public boolean onMouseMove(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseMove_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	protected  boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseUp(buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ��굯���¼�����
	 * @param button ���ı�ʶ(1���������2�����Ҽ���4�����м�)
	 * @param shift shift���Ƿ�ͬʱ���ͷ�
	 * @param x ���λ��x
	 * @param y ���λ��y
	 * @return ��ʶ���¼��Ƿ��Ѿ���ITool�����,true:�����(�����򸸿ؼ����ݴ��¼�);false:δ����(���ؼ�������Լ�������)
	 */
	public boolean onMouseUp(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseUp_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int delta, int x, int y, int flag);
	/**
	 * �����ֹ����¼�����
	 * @param delta �����ķ���
	 * @param x ���λ��x
	 * @param y ���λ��y
	 * @param flag ��ʶλ
	 */
	public boolean onMouseWheel(int delta, int x, int y, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, flagParamValue);
		return returnValue;
	}
	native private boolean onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * ���̰����¼�����
	 * @param key ���µļ�
	 * @param shift shift���Ƿ�ͬʱ������
	 */
	public boolean onKeyDown(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onKeyUp_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * ���̵����¼�����
	 * @param key ����ļ�
	 * @param shift shift���Ƿ�ͬʱ���ͷ�
	 */
	public boolean onKeyUp(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ���˫��
	 * @param  
	 * @return ������˫��������true,���û��˫��������false
	 */
	public boolean onDoubleClick(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private void setOperationFlag_int(long pNativeObject, int flag);
	/**
	 * ���ò���ģʽ����������򡢹���OF_CLick|OF_Rect|OF_Wheel,Ĭ�϶�֧�������ֲ��������ֲ���������Ҫʱ����Ϊ0
	 * @param  
	 */
	public void setOperationFlag(int flag)
	{
		int flagParamValue = flag;
		setOperationFlag_int(this.nativeObject.pointer, flagParamValue);
	}
	native private int getOperationFlag_void(long pNativeObject);
	public int getOperationFlag()
	{
		int returnValue = getOperationFlag_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ToolEagleEyeControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ToolEagleEyeControl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback");
		}
	}
	
	public static ToolEagleEyeControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ToolEagleEyeControl obj = null;
 		if(baseObj instanceof ToolEagleEyeControl)
		{
			obj = (ToolEagleEyeControl)baseObj;
		} else {
			obj = new ToolEagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CToolEagleEyeControl");
			obj.increaseCast();
		}

		return obj;
	}
}
