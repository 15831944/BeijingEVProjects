package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 天际线分析类定义了天际线分析的所有操作
 */
public class Analysis3DSkyLine extends com.earthview.world.spatial3d.analysis.Ianalysis3dtool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine", new Analysis3DSkyLineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAnalysis3DSkyLineProxy", new Analysis3DSkyLineClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pGlobeControl 地球控件
	 */
	public Analysis3DSkyLine(com.earthview.world.spatial3d.controls.GlobeControl ref_pGlobeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGlobeControlPtr = new BasePointer(ref_pGlobeControl);
		list.add("ref_pGlobeControl", ref_pGlobeControlPtr.get());
		Create("JCAnalysis3DSkyLineProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DSkyLine".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pSceneMgr 场景管理器
	 */
	public Analysis3DSkyLine(com.earthview.world.graphic.SceneManager ref_pSceneMgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pSceneMgrPtr = new BasePointer(ref_pSceneMgr);
		list.add("ref_pSceneMgr", ref_pSceneMgrPtr.get());
		Create("JCAnalysis3DSkyLineProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DSkyLine".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pTerrainLayer 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer
	 */
	public Analysis3DSkyLine(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pTerrainLayer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pTerrainLayerPtr = new BasePointer(ref_pTerrainLayer);
		list.add("ref_pTerrainLayer", ref_pTerrainLayerPtr.get());
		Create("JCAnalysis3DSkyLineProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DSkyLine".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void deactivate_void(long pNativeObject);
	/**
	 * 不使用Tool
	 * @param  
	 */
	public void deactivate()
	{
		deactivate_void(this.nativeObject.pointer);
	}
	native private void deactivate_void_NoVirtual(long pNativeObject);
	protected void deactivate_NoVirtual()
	{
		deactivate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void reset_impl_void_callback()
	{
		reset_impl();
	}

	native private void reset_impl_void(long pNativeObject);
	/**
	 * 销毁所有渲染对象及结果
	 * @param  
	 */
	public void reset_impl()
	{
		reset_impl_void(this.nativeObject.pointer);
	}
	native private void reset_impl_void_NoVirtual(long pNativeObject);
	protected void reset_impl_NoVirtual()
	{
		reset_impl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void initialize_impl_void_callback()
	{
		initialize_impl();
	}

	native private void initialize_impl_void(long pNativeObject);
	/**
	 * 初始化
	 * @param  
	 */
	public void initialize_impl()
	{
		initialize_impl_void(this.nativeObject.pointer);
	}
	native private void initialize_impl_void_NoVirtual(long pNativeObject);
	protected void initialize_impl_NoVirtual()
	{
		initialize_impl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void renderAnalysis3D_void(long pNativeObject);
	/**
	 * 分析与测量的调用接口
	 */
	public void renderAnalysis3D()
	{
		renderAnalysis3D_void(this.nativeObject.pointer);
	}
	native private void renderAnalysis3D_void_NoVirtual(long pNativeObject);
	protected void renderAnalysis3D_NoVirtual()
	{
		renderAnalysis3D_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标弹起事件触发
	 * @param  
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被释放
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 是否继续向父控件发送该事件
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

	native private boolean onDoubleClick_void(long pNativeObject);
	/**
	 * 鼠标双击事件触发
	 * @return 是否继续向父控件发送该事件
	 */
	public boolean onDoubleClick()
	{
		boolean returnValue = onDoubleClick_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean onDoubleClick_void_NoVirtual(long pNativeObject);
	protected boolean onDoubleClick_NoVirtual()
	{
		boolean returnValue = onDoubleClick_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getViewPoint_void(long pNativeObject);
	/**
	 * 获取观察点位置(经纬度和高程)
	 * @return 位置坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getViewPoint()
	{
		long returnValue = getViewPoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private double getViewPointHei_void(long pNativeObject);
	/**
	 * 获取观察点离地面高度
	 * @return 高度值
	 */
	public double getViewPointHei()
	{
		double returnValue = getViewPointHei_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCameraRotation_void(long pNativeObject);
	/**
	 * 获取相机水平方向旋转角
	 * @return 角度值
	 */
	public double getCameraRotation()
	{
		double returnValue = getCameraRotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCameraPitch_void(long pNativeObject);
	/**
	 * 获取相机俯仰角
	 * @return 角度值
	 */
	public double getCameraPitch()
	{
		double returnValue = getCameraPitch_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCameraType_void(long pNativeObject);
	/**
	 * 获取相机类型(主相机还是自定义相机)
	 * @return 类型
	 */
	public com.earthview.world.spatial3d.analysis.Analysis3dCameraType getCameraType()
	{
		int returnValue = getCameraType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.analysis.Analysis3dCameraType.toEnum(returnValue);
	}
	native private int getLineQuality_void(long pNativeObject);
	/**
	 * 获取天际线质量
	 * @return 类型
	 */
	public com.earthview.world.spatial3d.analysis.Analysis3DLineQuality getLineQuality()
	{
		int returnValue = getLineQuality_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.analysis.Analysis3DLineQuality.toEnum(returnValue);
	}
	native private long getLineColor_void(long pNativeObject);
	/**
	 * 获取天际线颜色
	 * @return 颜色值
	 */
	public com.earthview.world.graphic.ColourValue getLineColor()
	{
		long returnValue = getLineColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setViewPoint_CVector3(long pNativeObject, long point);
	/**
	 * 设置观察点位置
	 * @param point 经度、维度、高程
	 */
	public void setViewPoint(com.earthview.world.spatial.math.Vector3 point)
	{
		long pointParamValue = point.nativeObject.pointer;
		setViewPoint_CVector3(this.nativeObject.pointer, pointParamValue);
	}
	native private void setViewPointHei_ev_real64(long pNativeObject, double height);
	/**
	 * 设置观察点离地高度
	 * @param height 离地高度
	 */
	public void setViewPointHei(double height)
	{
		double heightParamValue = height;
		setViewPointHei_ev_real64(this.nativeObject.pointer, heightParamValue);
	}
	native private void setCameraRotation_ev_real64(long pNativeObject, double cameraRotation);
	/**
	 * 设置相机水平方向旋转角
	 * @param cameraRotaion 角度值
	 */
	public void setCameraRotation(double cameraRotation)
	{
		double cameraRotationParamValue = cameraRotation;
		setCameraRotation_ev_real64(this.nativeObject.pointer, cameraRotationParamValue);
	}
	native private void setCameraPitch_ev_real64(long pNativeObject, double cameraPitch);
	/**
	 * 设置相机俯仰角
	 * @param cameraPitch 角度值
	 */
	public void setCameraPitch(double cameraPitch)
	{
		double cameraPitchParamValue = cameraPitch;
		setCameraPitch_ev_real64(this.nativeObject.pointer, cameraPitchParamValue);
	}
	native private void setLineQuality_Analysis3DLineQuality(long pNativeObject, int lienQuality);
	/**
	 * 设置天机线质量级别(高、中、低)
	 * @param cameraRotaion 角度值
	 */
	public void setLineQuality(com.earthview.world.spatial3d.analysis.Analysis3DLineQuality lienQuality)
	{
		int lienQualityParamValue = lienQuality.getValue();
		setLineQuality_Analysis3DLineQuality(this.nativeObject.pointer, lienQualityParamValue);
	}
	native private void setCameraType_Analysis3dCameraType(long pNativeObject, int camType);
	/**
	 * 设置相机相机类型(主相机或自定义相机)
	 * @param cameraRotaion 角度值
	 */
	public void setCameraType(com.earthview.world.spatial3d.analysis.Analysis3dCameraType camType)
	{
		int camTypeParamValue = camType.getValue();
		setCameraType_Analysis3dCameraType(this.nativeObject.pointer, camTypeParamValue);
	}
	native private void setLineColor_CColourValue(long pNativeObject, long lineColor);
	/**
	 * 设置天际线颜色
	 * @param cameraRotaion 颜色值
	 */
	public void setLineColor(com.earthview.world.graphic.ColourValue lineColor)
	{
		long lineColorParamValue = lineColor.nativeObject.pointer;
		setLineColor_CColourValue(this.nativeObject.pointer, lineColorParamValue);
	}
	public Analysis3DSkyLine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Analysis3DSkyLine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 閲嶇疆
	 */
	public void reset()
	{
		super.reset_NoVirtual();
	}
	/**
	 * 鍒濆鍖�
	 * @param  
	 */
	public void initialize()
	{
		super.initialize_NoVirtual();
	}
	/**
	 * 鑾峰彇涓夌淮璁＄畻瀵硅薄
	 * @return 涓夌淮璁＄畻瀵硅薄
	 */
	public com.earthview.world.spatial3d.analysis.Math3DBaseObject getMath3D()
	{
		return super.getMath3D_NoVirtual();
	}
	/**
	 * 璁剧疆鏄惁鍙
	 * @param visible 鏄惁鍙
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 鑾峰彇榧犳爣鐘舵��
	 * @return 榧犳爣鐘舵��
	 */
	public com.earthview.world.spatial3d.analysis.MousePickState getMousePickState()
	{
		return super.getMousePickState_NoVirtual();
	}
	/**
	 * 璁剧疆榧犳爣鐘舵��
	 * @param EarthView::World::Spatial3D::Analysis::MousePickState 榧犳爣鐘舵��
	 */
	public void setMousePickState(com.earthview.world.spatial3d.analysis.MousePickState state)
	{
		super.setMousePickState_NoVirtual(state);
	}
	/**
	 * 鑾峰彇鏄惁鍦ㄦ湇鍔″櫒绔垎鏋�
	 * @param  
	 */
	public boolean getIsAnalysisInServer()
	{
		return super.getIsAnalysisInServer_NoVirtual();
	}
	/**
	 * 璁剧疆鏄惁鍦ㄦ湇鍔″櫒绔垎鏋�
	 * @param bInServer 鏄惁鍦ㄦ湇鍔″櫒绔垎鏋�
	 */
	public void setIsAnalysisInServer(boolean bInServer)
	{
		super.setIsAnalysisInServer_NoVirtual(bInServer);
	}
	/**
	 * 鑾峰彇楂樼▼鎺т欢鎸囬拡
	 * @param  
	 * @return 楂樼▼鎺т欢
	 */
	public com.earthview.world.spatial3d.analysis.AltitudeListener getAltitude3DListener()
	{
		return super.getAltitude3DListener_NoVirtual();
	}
	/**
	 * 璁剧疆楂樼▼鎺т欢鎸囬拡
	 * @param listener 璁剧疆鐨勬寚閽�
	 */
	public void setAltitude3DListener(com.earthview.world.spatial3d.analysis.AltitudeListener ref_listener)
	{
		super.setAltitude3DListener_NoVirtual(ref_listener);
	}
	/**
	 * 鑾峰彇鐢ㄦ埛娉ㄥ唽鐨勭洃鍚�
	 * @param  
	 * @return 鐢ㄦ埛娉ㄥ唽鐨勭洃鍚�
	 */
	public com.earthview.world.spatial3d.analysis.Analysis3DListener getAnalysis3DListener()
	{
		return super.getAnalysis3DListener_NoVirtual();
	}
	/**
	 * 璁剧疆娉ㄥ唽鐨勭洃鍚紝鐢ㄤ簬澶勭悊鐣岄潰鐨勪氦浜�
	 * @param listener 娉ㄥ唽鐨勭洃鍚�
	 */
	public void setAnalysis3DListener(com.earthview.world.spatial3d.analysis.Analysis3DListener ref_listener)
	{
		super.setAnalysis3DListener_NoVirtual(ref_listener);
	}
	/**
	 * 鍚敤Tool
	 * @param  
	 */
	public void activate()
	{
		super.activate_NoVirtual();
	}
	/**
	 * 鑾峰彇鍏夋爣鏍峰紡
	 * @param  
	 * @return 鍏夋爣鏍峰紡鏋氫妇
	 */
	public int getCursor()
	{
		return super.getCursor_NoVirtual();
	}
	/**
	 * 鍙抽敭鑿滃崟浜嬩欢瑙﹀彂
	 * @param x 鍏夋爣浣嶇疆x
	 * @param y 鍏夋爣浣嶇疆y
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onContextMenu(int x, int y)
	{
		return super.onContextMenu_NoVirtual(x, y);
	}
	public boolean onDoubleClick(int button, int shift, int x, int y)
	{
		return super.onDoubleClick_NoVirtual(button, shift, x, y);
	}
	/**
	 * 閿洏鎸変笅浜嬩欢瑙﹀彂
	 * @param key 鎸変笅鐨勯敭
	 * @param shift shift閿槸鍚﹀悓鏃惰鎸変笅
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onKeyDown(int keyCode, int shift)
	{
		return super.onKeyDown_NoVirtual(keyCode, shift);
	}
	/**
	 * 閿洏寮硅捣浜嬩欢瑙﹀彂
	 * @param key 寮硅捣鐨勯敭
	 * @param shift shift閿槸鍚﹀悓鏃惰閲婃斁
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onKeyUp(int keyCode, int shift)
	{
		return super.onKeyUp_NoVirtual(keyCode, shift);
	}
	/**
	 * 榧犳爣鎸変笅浜嬩欢瑙﹀彂
	 * @param button 閿殑鏍囪瘑(1浠ｈ〃宸﹂敭锛�2浠ｈ〃鍙抽敭锛�4浠ｈ〃涓敭)
	 * @param shift shift閿槸鍚﹀悓鏃惰鎸変笅
	 * @param x 鍏夋爣浣嶇疆x
	 * @param y 鍏夋爣浣嶇疆y
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onMouseDown(int button, int shift, int x, int y)
	{
		return super.onMouseDown_NoVirtual(button, shift, x, y);
	}
	/**
	 * 榧犳爣绉诲姩浜嬩欢瑙﹀彂
	 * @param button 閿殑鏍囪瘑(1浠ｈ〃宸﹂敭锛�2浠ｈ〃鍙抽敭锛�4浠ｈ〃涓敭)
	 * @param shift shift閿槸鍚﹀悓鏃惰鎸変笅
	 * @param x 鍏夋爣浣嶇疆x
	 * @param y 鍏夋爣浣嶇疆y
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onMouseMove(int button, int shift, int x, int y)
	{
		return super.onMouseMove_NoVirtual(button, shift, x, y);
	}
	/**
	 * 榧犳爣婊氳疆婊氬姩浜嬩欢瑙﹀彂
	 * @param delta 婊氬姩鐨勫箙搴�
	 * @param x 鍏夋爣浣嶇疆x
	 * @param y 鍏夋爣浣嶇疆y
	 * @param flag 鏍囪瘑浣�
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onMouseWheel(int delta, int x, int y, int flag)
	{
		return super.onMouseWheel_NoVirtual(delta, x, y, flag);
	}
	/**
	 * 瑙﹀睆鎺ヨЕ浜嬩欢瑙﹀彂
	 * @param touchEvent 浜嬩欢鍙傛暟
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onTouchDown(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchDown_NoVirtual(touchEvent);
	}
	/**
	 * 瑙﹀睆鎺ヨЕ浜嬩欢瑙﹀彂
	 * @param touchEvent 浜嬩欢鍙傛暟
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onTouchUp(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchUp_NoVirtual(touchEvent);
	}
	/**
	 * 瑙﹀睆鎺ヨЕ浜嬩欢瑙﹀彂
	 * @param touchEvent 浜嬩欢鍙傛暟
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onTouchMove(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchMove_NoVirtual(touchEvent);
	}
	/**
	 * 鑾峰彇鍛戒护椤规墍灞炵殑宸ュ叿鏍忕被鍨�
	 * @param  
	 * @return 宸ュ叿鏍忕被鍨�
	 */
	public long getToolBarType()
	{
		return super.getToolBarType_NoVirtual();
	}
	/**
	 * 鑾峰彇鍛戒护椤圭殑绫诲瀷
	 * @param  
	 * @return 绫诲瀷
	 */
	public long getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 鑾峰彇鍛戒护椤圭殑鍚嶇О
	 * @param  
	 * @return 鍚嶇О
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 鑾峰彇鍛戒护椤规墍灞炵被鍒�
	 * @param  
	 * @return 绫诲埆
	 */
	public String getCategory()
	{
		return super.getCategory_NoVirtual();
	}
	/**
	 * 宸ュ叿鎻愮ず
	 * @param  
	 * @return 鎻愮ず淇℃伅
	 */
	public String getToolTip()
	{
		return super.getToolTip_NoVirtual();
	}
	/**
	 * 鍛戒护椤圭殑鏄剧ず鍥炬爣
	 * @param  
	 * @return 鍥炬爣
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		return super.getIcon_NoVirtual();
	}
	/**
	 * 鍒ゆ柇鍛戒护椤规槸鍚︽敮鎸�"鎸変笅"鐘舵��
	 * @param  
	 * @return 濡傛灉鏀寔"鎸変笅"鍒欒繑鍥瀟rue,鍙嶄箣鍒欏惁
	 */
	public boolean isCheckable()
	{
		return super.isCheckable_NoVirtual();
	}
	/**
	 * 褰撳懡浠ら」鎸夐挳琚偣鍑荤殑鏃跺��,璋冪敤璇ユ柟娉�
	 * @param  
	 */
	public void onClicked()
	{
		super.onClicked_NoVirtual();
	}
	/**
	 * 鑾峰彇鍛戒护椤规槸鍚﹁鎸変笅
	 * @param  
	 * @return 濡傛灉鍛戒护椤硅鎸変笅浜嗗垯杩斿洖true,鍙嶄箣鍒欏惁
	 */
	public boolean getChecked()
	{
		return super.getChecked_NoVirtual();
	}
	/**
	 * 璁剧疆鍛戒护椤规槸鍚︽寜涓�
	 * @param checked 濡傛灉涓簍rue,鍒欏懡浠ら」琚寜涓�,鍙嶄箣鍒欏惁
	 */
	public void setChecked(boolean checked)
	{
		super.setChecked_NoVirtual(checked);
	}
	/**
	 * 鑾峰彇鍛戒护椤规槸鍚﹀彲鐢�
	 * @param  
	 * @return 濡傛灉鍛戒护椤瑰彲鐢ㄥ垯杩斿洖true,鍙嶄箣鍒欏惁
	 */
	public boolean getEnabled()
	{
		return super.getEnabled_NoVirtual();
	}
	/**
	 * 璁剧疆鍛戒护椤规槸鍚﹀彲鐢�
	 * @param enabled 濡傛灉涓簍rue,鍒欒缃鍛戒护椤瑰彲鐢�,鍙嶄箣鍒欏惁
	 */
	public void setEnabled(boolean enabled)
	{
		super.setEnabled_NoVirtual(enabled);
	}
	/**
	 * 浣垮懡浠ら」涓庢寚瀹氱殑鎺т欢鐩稿叧鑱�
	 * @param ctrl 寰呭叧鑱旂殑鎺т欢
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		super.create_NoVirtual(ref_ctrl);
	}
	/**
	 * 褰撴湁浜嬩欢琚Е鍙戞椂,浼氳皟鐢ㄨ鏂规硶
	 * @param e 浜嬩欢
	 * @return 濡傛灉鐘舵�佸彂鐢熷彉鍖栧垯杩斿洖true,鍙嶄箣鍒欏惁
	 */
	public boolean update(com.earthview.world.core.Event e)
	{
		return super.update_NoVirtual(e);
	}
	
	native protected void register_reset_impl_void(long pNativeObject, String method);
	native protected void register_initialize_impl_void(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_initialize_void(long pNativeObject, String method);
	native protected void register_renderAnalysis3D_void(long pNativeObject, String method);
	native protected void register_getMath3D_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getMousePickState_void(long pNativeObject, String method);
	native protected void register_setMousePickState_MousePickState(long pNativeObject, String method);
	native protected void register_getIsAnalysisInServer_void(long pNativeObject, String method);
	native protected void register_setIsAnalysisInServer_ev_bool(long pNativeObject, String method);
	native protected void register_getAltitude3DListener_void(long pNativeObject, String method);
	native protected void register_setAltitude3DListener_CAltitudeListener(long pNativeObject, String method);
	native protected void register_getAnalysis3DListener_void(long pNativeObject, String method);
	native protected void register_setAnalysis3DListener_CAnalysis3DListener(long pNativeObject, String method);
	native protected void register_activate_void(long pNativeObject, String method);
	native protected void register_deactivate_void(long pNativeObject, String method);
	native protected void register_getCursor_void(long pNativeObject, String method);
	native protected void register_onContextMenu_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onDoubleClick_void(long pNativeObject, String method);
	native protected void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyDown_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyUp_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onTouchDown_MotionEvent(long pNativeObject, String method);
	native protected void register_onTouchUp_MotionEvent(long pNativeObject, String method);
	native protected void register_onTouchMove_MotionEvent(long pNativeObject, String method);
	native protected void register_getToolBarType_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getCategory_void(long pNativeObject, String method);
	native protected void register_getToolTip_void(long pNativeObject, String method);
	native protected void register_getIcon_void(long pNativeObject, String method);
	native protected void register_isCheckable_void(long pNativeObject, String method);
	native protected void register_onClicked_void(long pNativeObject, String method);
	native protected void register_getChecked_void(long pNativeObject, String method);
	native protected void register_setChecked_ev_bool(long pNativeObject, String method);
	native protected void register_getEnabled_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_create_ISpatialControl(long pNativeObject, String method);
	native protected void register_update_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_reset_impl_void(this.nativeObject.pointer, "reset_impl_void_callback");
			this.register_initialize_impl_void(this.nativeObject.pointer, "initialize_impl_void_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_initialize_void(this.nativeObject.pointer, "initialize_void_callback");
			this.register_renderAnalysis3D_void(this.nativeObject.pointer, "renderAnalysis3D_void_callback");
			this.register_getMath3D_void(this.nativeObject.pointer, "getMath3D_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getMousePickState_void(this.nativeObject.pointer, "getMousePickState_void_callback");
			this.register_setMousePickState_MousePickState(this.nativeObject.pointer, "setMousePickState_MousePickState_callback");
			this.register_getIsAnalysisInServer_void(this.nativeObject.pointer, "getIsAnalysisInServer_void_callback");
			this.register_setIsAnalysisInServer_ev_bool(this.nativeObject.pointer, "setIsAnalysisInServer_ev_bool_callback");
			this.register_getAltitude3DListener_void(this.nativeObject.pointer, "getAltitude3DListener_void_callback");
			this.register_setAltitude3DListener_CAltitudeListener(this.nativeObject.pointer, "setAltitude3DListener_CAltitudeListener_callback");
			this.register_getAnalysis3DListener_void(this.nativeObject.pointer, "getAnalysis3DListener_void_callback");
			this.register_setAnalysis3DListener_CAnalysis3DListener(this.nativeObject.pointer, "setAnalysis3DListener_CAnalysis3DListener_callback");
			this.register_activate_void(this.nativeObject.pointer, "activate_void_callback");
			this.register_deactivate_void(this.nativeObject.pointer, "deactivate_void_callback");
			this.register_getCursor_void(this.nativeObject.pointer, "getCursor_void_callback");
			this.register_onContextMenu_ev_int32_ev_int32(this.nativeObject.pointer, "onContextMenu_ev_int32_ev_int32_callback");
			this.register_onDoubleClick_void(this.nativeObject.pointer, "onDoubleClick_void_callback");
			this.register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyDown_ev_int32_ev_int32_callback");
			this.register_onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyUp_ev_int32_ev_int32_callback");
			this.register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onTouchDown_MotionEvent(this.nativeObject.pointer, "onTouchDown_MotionEvent_callback");
			this.register_onTouchUp_MotionEvent(this.nativeObject.pointer, "onTouchUp_MotionEvent_callback");
			this.register_onTouchMove_MotionEvent(this.nativeObject.pointer, "onTouchMove_MotionEvent_callback");
			this.register_getToolBarType_void(this.nativeObject.pointer, "getToolBarType_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getCategory_void(this.nativeObject.pointer, "getCategory_void_callback");
			this.register_getToolTip_void(this.nativeObject.pointer, "getToolTip_void_callback");
			this.register_getIcon_void(this.nativeObject.pointer, "getIcon_void_callback");
			this.register_isCheckable_void(this.nativeObject.pointer, "isCheckable_void_callback");
			this.register_onClicked_void(this.nativeObject.pointer, "onClicked_void_callback");
			this.register_getChecked_void(this.nativeObject.pointer, "getChecked_void_callback");
			this.register_setChecked_ev_bool(this.nativeObject.pointer, "setChecked_ev_bool_callback");
			this.register_getEnabled_void(this.nativeObject.pointer, "getEnabled_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_create_ISpatialControl(this.nativeObject.pointer, "create_ISpatialControl_callback");
			this.register_update_CEvent(this.nativeObject.pointer, "update_CEvent_callback");
		}
	}
	
	public static Analysis3DSkyLine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Analysis3DSkyLine obj = null;
 		if(baseObj instanceof Analysis3DSkyLine)
		{
			obj = (Analysis3DSkyLine)baseObj;
		} else {
			obj = new Analysis3DSkyLine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysis3DSkyLine");
			obj.increaseCast();
		}

		return obj;
	}
}
