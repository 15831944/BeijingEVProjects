package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EagleEyeControl extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEagleEyeControl", new EagleEyeControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEagleEyeControlProxy", new EagleEyeControlClassFactory());
	}

	/**
	 * ���캯��
	 * @param  
	 */
	public EagleEyeControl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEagleEyeControlProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.EagleEyeControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getEagleEyeCanvas_void(long pNativeObject);
	/**
	 * ��ȡӥ�ۻ���
	 * @param  
	 */
	public com.earthview.world.display.Ipaintdevice getEagleEyeCanvas()
	{
		long returnValue = getEagleEyeCanvas_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}
	native private void addMapControl_CMapControl(long pNativeObject, long pControl);
	/**
	 * ��ӹ����ĵ�ͼ�ؼ�
	 * @param pControl ��ͼ�ؼ�����
	 */
	public void addMapControl(com.earthview.world.spatial2d.controls.MapControl pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		addMapControl_CMapControl(this.nativeObject.pointer, pControlParamValue);
	}
	native private void removeMapControl_CMapControl(long pNativeObject, long pControl);
	/**
	 * �Ƴ������ĵ�ͼ�ؼ�
	 * @param pControl ��ͼ�ؼ�����
	 */
	public void removeMapControl(com.earthview.world.spatial2d.controls.MapControl pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		removeMapControl_CMapControl(this.nativeObject.pointer, pControlParamValue);
	}
	native private long getMapControl_ev_int32(long pNativeObject, int nIndex);
	/**
	 * ��ȡ�����ĵ�ͼ�ؼ�
	 * @param nIndex ��ͼ�ؼ���Ӧ������
	 * @return nIndex������Ӧ�ĵ�ͼ�ؼ�
	 */
	public com.earthview.world.spatial2d.controls.MapControl getMapControl(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getMapControl_ev_int32(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.MapControl __returnValue = new com.earthview.world.spatial2d.controls.MapControl(CreatedWhenConstruct.CWC_NotToCreate, "CMapControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.MapControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapControl");
		}
		return __returnValue;
	}
	native private boolean isExist_CMapControl(long pNativeObject, long pControl);
	/**
	 * �ж�ĳ����ͼ�ؼ��Ƿ��Ѿ�����
	 * @param pControl �����жϵĿؼ�
	 * @return �����ڷ���true,���򷵻�false
	 */
	public boolean isExist(com.earthview.world.spatial2d.controls.MapControl pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		boolean returnValue = isExist_CMapControl(this.nativeObject.pointer, pControlParamValue);
		return returnValue;
	}
	native private boolean setActiveControl_CMapControl(long pNativeObject, long pControl);
	/**
	 * ���ü���ĵ�ͼ�ؼ�
	 * @param pControl ���ڼ���ĵ�ͼ�ؼ�
	 */
	public boolean setActiveControl(com.earthview.world.spatial2d.controls.MapControl pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		boolean returnValue = setActiveControl_CMapControl(this.nativeObject.pointer, pControlParamValue);
		return returnValue;
	}
	native private void setAllControlUnActive_void(long pNativeObject);
	/**
	 * �������е�ͼ�ؼ�Ϊ������״̬���ڳ������������£�
	 * @param pControl 
	 */
	public void setAllControlUnActive()
	{
		setAllControlUnActive_void(this.nativeObject.pointer);
	}
	native private int getMapControlCount_void(long pNativeObject);
	/**
	 * ��ȡ�����ĵ�ͼ�ؼ�����
	 * @param  
	 */
	public int getMapControlCount()
	{
		int returnValue = getMapControlCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addMap_IMap(long pNativeObject, long pMap);
	/**
	 * ��ӹ����ĵ�ͼ
	 * @param pControl ��ͼ����
	 */
	public void addMap(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		addMap_IMap(this.nativeObject.pointer, pMapParamValue);
	}
	native private void removeMap_IMap(long pNativeObject, long pMap);
	/**
	 * �Ƴ������ĵ�ͼ
	 * @param pControl ��ͼ����
	 */
	public void removeMap(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		removeMap_IMap(this.nativeObject.pointer, pMapParamValue);
	}
	native private void setMapCacheDirty_void(long pNativeObject);
	/**
	 * ��ӹ����ĵ�ͼ
	 * @param pControl ��ͼ����
	 */
	public void setMapCacheDirty()
	{
		setMapCacheDirty_void(this.nativeObject.pointer);
	}
	native private int getMapCount_void(long pNativeObject);
	/**
	 * ��ȡ�����ĵ�ͼ����
	 * @param  
	 */
	public int getMapCount()
	{
		int returnValue = getMapCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMap_ev_int32(long pNativeObject, int nIndex);
	/**
	 * ��ȡ�����ĵ�ͼ
	 * @param nIndex ��ͼ��Ӧ������
	 * @return nIndex������Ӧ�ĵ�ͼ
	 */
	public com.earthview.world.spatial.atlas.Imap getMap(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getMap_ev_int32(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private boolean isExist_IMap(long pNativeObject, long pMap);
	/**
	 * �ж�ĳ����ͼ�Ƿ��Ѿ�����
	 * @param pControl �����жϵĿؼ�
	 * @return �����ڷ���true,���򷵻�false
	 */
	public boolean isExist(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		boolean returnValue = isExist_IMap(this.nativeObject.pointer, pMapParamValue);
		return returnValue;
	}
	native private void addGeometry_IGeometry_ISymbol(long pNativeObject, long pGeometry, long pSymbol);
	/**
	 * ����Զ�����Ⱦͼ��
	 * @param pGeometry ���ζ���
	 * @param pSymbol ���
	 */
	public void addGeometry(com.earthview.world.spatial.geometry.Igeometry pGeometry, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		addGeometry_IGeometry_ISymbol(this.nativeObject.pointer, pGeometryParamValue, pSymbolParamValue);
	}
	native private void clearGeometry_void(long pNativeObject);
	/**
	 * ����Զ�����Ⱦͼ��
	 */
	public void clearGeometry()
	{
		clearGeometry_void(this.nativeObject.pointer);
	}
	protected  void onRepaint_void_callback()
	{
		onRepaint();
	}

	native private void onRepaint_void(long pNativeObject);
	/**
	 * �ػ�
	 * @param  
	 */
	public void onRepaint()
	{
		onRepaint_void(this.nativeObject.pointer);
	}
	native private void onRepaint_void_NoVirtual(long pNativeObject);
	protected void onRepaint_NoVirtual()
	{
		onRepaint_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void refresh_void(long pNativeObject);
	/**
	 * ˢ��
	 * @param symbol ���
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private void setUnActiveRectSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * ���÷ǵ�ǰ�����ͼ��Ӧ�ľ��ο���
	 * @param  
	 */
	public void setUnActiveRectSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setUnActiveRectSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private long getUnActiveRectSymbol_void(long pNativeObject);
	/**
	 * ��ȡ�ǵ�ǰ�����ͼ��Ӧ�ľ��ο���
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbol getUnActiveRectSymbol()
	{
		long returnValue = getUnActiveRectSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setActiveRectSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * ���õ�ǰ�����ͼ��Ӧ�ľ��ο���
	 * @param  
	 */
	public void setActiveRectSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setActiveRectSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private long getActiveRectSymbol_void(long pNativeObject);
	/**
	 * ��ȡ��ǰ�����ͼ��Ӧ�ľ��ο���
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbol getActiveRectSymbol()
	{
		long returnValue = getActiveRectSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * ��վ���
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean isDrawing_void(long pNativeObject);
	/**
	 * �ж��Ƿ����ڻ�ͼ
	 * @param  
	 * @return ������ڻ�ͼ����true,���򷵻�false
	 */
	public boolean isDrawing()
	{
		boolean returnValue = isDrawing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void onResize_ev_int32_ev_int32(long pNativeObject, int nWidth, int nHeight);
	/**
	 * �������ô�С
	 * @param nWidth ����
	 * @param nWidth �߶�
	 */
	public void onResize(int nWidth, int nHeight)
	{
		int nWidthParamValue = nWidth;
		int nHeightParamValue = nHeight;
		onResize_ev_int32_ev_int32(this.nativeObject.pointer, nWidthParamValue, nHeightParamValue);
	}
	native private void onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ���˫���¼�����
	 * @param button ���ı�ʶ(1���������2�����Ҽ���4�����м�)
	 * @param shift shift���Ƿ�ͬʱ������
	 * @param x ���λ��x
	 * @param y ���λ��y
	 */
	public void onDoubleClick(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * ���̰����¼�����
	 * @param key ���µļ�
	 * @param shift shift���Ƿ�ͬʱ������
	 */
	public void onKeyDown(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
	}
	native private void onKeyUp_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * ���̵����¼�����
	 * @param key ����ļ�
	 * @param shift shift���Ƿ�ͬʱ���ͷ�
	 */
	public void onKeyUp(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
	}
	native private void onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ��갴���¼�����
	 * @param button ���ı�ʶ(1���������2�����Ҽ���4�����м�)
	 * @param shift shift���Ƿ�ͬʱ������
	 * @param x ���λ��x
	 * @param y ���λ��y
	 */
	public void onMouseDown(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ����ƶ��¼�����
	 * @param button ���ı�ʶ(1���������2�����Ҽ���4�����м�)
	 * @param shift shift���Ƿ�ͬʱ������
	 * @param x ���λ��x
	 * @param y ���λ��y
	 */
	public void onMouseMove(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * ��굯���¼�����
	 * @param button ���ı�ʶ(1���������2�����Ҽ���4�����м�)
	 * @param shift shift���Ƿ�ͬʱ���ͷ�
	 * @param x ���λ��x
	 * @param y ���λ��y
	 */
	public void onMouseUp(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int delta, int x, int y, int flag);
	/**
	 * �����ֹ����¼�����
	 * @param delta �����ķ���
	 * @param x ���λ��x
	 * @param y ���λ��y
	 * @param flag ��ʶλ
	 */
	public void onMouseWheel(int delta, int x, int y, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		int flagParamValue = flag;
		onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, flagParamValue);
	}
	native private void addEagleEyeControlListener_IEagleEyeControlListener(long pNativeObject, long ref_listener);
	public void addEagleEyeControlListener(com.earthview.world.spatial2d.controls.Ieagleeyecontrollistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addEagleEyeControlListener_IEagleEyeControlListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeEagleEyeControlListener_IEagleEyeControlListener(long pNativeObject, long ref_listener);
	public void removeEagleEyeControlListener(com.earthview.world.spatial2d.controls.Ieagleeyecontrollistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		removeEagleEyeControlListener_IEagleEyeControlListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getDisplay_void(long pNativeObject);
	/**
	 * ��ȡ�ռ���ʾ����
	 * @param  
	 * @return �ռ���ʾָ��(�ڲ�ָ��)
	 */
	public com.earthview.world.spatial.display.Ispatialdisplay getDisplay()
	{
		long returnValue = getDisplay_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialdisplay __returnValue = new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialDisplay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialdisplay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialDisplay");
		}
		return __returnValue;
	}
	native private void setProxy_CEagleEyeControlAgent(long pNativeObject, long ref_pxy);
	/**
	 * ���ÿؼ�����
	 * @param pxy �ؼ�����
	 */
	public void setProxy(com.earthview.world.spatial2d.controls.EagleEyeControlAgent ref_pxy)
	{
		long ref_pxyParamValue = (ref_pxy == null ? 0L : ref_pxy.nativeObject.pointer);
		setProxy_CEagleEyeControlAgent(this.nativeObject.pointer, ref_pxyParamValue);
	}
	public EagleEyeControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EagleEyeControl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onRepaint_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onRepaint_void(this.nativeObject.pointer, "onRepaint_void_callback");
		}
	}
	
	public static EagleEyeControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EagleEyeControl obj = null;
 		if(baseObj instanceof EagleEyeControl)
		{
			obj = (EagleEyeControl)baseObj;
		} else {
			obj = new EagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEagleEyeControl");
			obj.increaseCast();
		}

		return obj;
	}
}
