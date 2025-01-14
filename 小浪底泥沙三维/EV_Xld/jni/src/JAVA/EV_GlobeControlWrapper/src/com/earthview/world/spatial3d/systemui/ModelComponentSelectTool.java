package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型部件选择工具类
 */
public class ModelComponentSelectTool extends com.earthview.world.spatial.systemui.Itool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool", new ModelComponentSelectToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JCModelComponentSelectToolProxy", new ModelComponentSelectToolClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_ctrl 抽象三维场景控件
	 */
	public ModelComponentSelectTool(com.earthview.world.spatial3d.controls.GlobeControl ref_ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		Create("JCModelComponentSelectToolProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.ModelComponentSelectTool".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void onClicked_void(long pNativeObject);
	/**
	 * 响应鼠标点击，执行命令
	 */
	public void onClicked()
	{
		onClicked_void(this.nativeObject.pointer);
	}
	native private void onClicked_void_NoVirtual(long pNativeObject);
	protected void onClicked_NoVirtual()
	{
		onClicked_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean getChecked_void(long pNativeObject);
	/**
	 * 查看抽象三维场景控件是否使用当前工具类
	 * @param  
	 * @return 是返回true,否返回false
	 */
	public boolean getChecked()
	{
		boolean returnValue = getChecked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getChecked_void_NoVirtual(long pNativeObject);
	protected boolean getChecked_NoVirtual()
	{
		boolean returnValue = getChecked_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 查看抽象三维场景控件是否已设置好场景
	 * @param  
	 * @return 有返回true,没有返回false
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getEnabled_NoVirtual()
	{
		boolean returnValue = getEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSortByDistance_ev_bool(long pNativeObject, boolean sort);
	/**
	 * 设置是否按照到相机的距离排序
	 * @param sort 是否排序
	 */
	public void setSortByDistance(boolean sort)
	{
		boolean sortParamValue = sort;
		setSortByDistance_ev_bool(this.nativeObject.pointer, sortParamValue);
	}
	native private void setSortByDistance_ev_bool_ev_uint16(long pNativeObject, boolean sort, int maxresults);
	/**
	 * 设置是否按照到相机的距离排序和结果集大小
	 * @param sort 是否排序
	 * @param maxresults 结果集大小
	 */
	public void setSortByDistance(boolean sort, int maxresults)
	{
		boolean sortParamValue = sort;
		int maxresultsParamValue = maxresults;
		setSortByDistance_ev_bool_ev_uint16(this.nativeObject.pointer, sortParamValue, maxresultsParamValue);
	}
	native private boolean getSortByDistance_void(long pNativeObject);
	/**
	 * 查看是否按照到相机的距离排序
	 * @param  
	 * @return 是返回true,否返回false
	 */
	public boolean getSortByDistance()
	{
		boolean returnValue = getSortByDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxResults_void(long pNativeObject);
	/**
	 * 获得结果集大小
	 * @param  
	 * @return 结果集大小
	 */
	public int getMaxResults()
	{
		int returnValue = getMaxResults_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSelectButton_void(long pNativeObject);
	/**
	 * 获取选择时使用左键、中键或者右键
	 */
	public com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask getSelectButton()
	{
		int returnValue = getSelectButton_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask.toEnum(returnValue);
	}
	native private void setSelectButton_GUIMouseButtonMask(long pNativeObject, int button);
	/**
	 * 设置选择时使用左键、中键或者右键
	 */
	public void setSelectButton(com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask button)
	{
		int buttonParamValue = button.getValue();
		setSelectButton_GUIMouseButtonMask(this.nativeObject.pointer, buttonParamValue);
	}
	native private void resetResults_void(long pNativeObject);
	/**
	 * 重置结果集
	 * @param  
	 */
	public void resetResults()
	{
		resetResults_void(this.nativeObject.pointer);
	}
	native private long getType_void(long pNativeObject);
	/**
	 * 返回当前类类型标识
	 * @param  
	 * @return 类型标识
	 */
	public long getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getType_void_NoVirtual(long pNativeObject);
	protected long getType_NoVirtual()
	{
		long returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标按下处理
	 * @param button 鼠标按钮标识
	 * @param shift shift标识
	 * @param x 鼠标按下的点在x轴上的位置
	 * @param y 鼠标按下的点在y轴上的位置
	 * @return 处理完毕返回false,射线不与包围盒相交返回true
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

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标释放处理
	 * @param button 鼠标按钮标识
	 * @param shift shift标识
	 * @param x 鼠标按下的点在x轴上的位置
	 * @param y 鼠标按下的点在y轴上的位置
	 * @return 返回false
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

	public ModelComponentSelectTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelComponentSelectTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	 * 涓嶄娇鐢═ool
	 * @param  
	 */
	public void deactivate()
	{
		super.deactivate_NoVirtual();
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
	/**
	 * 榧犳爣鍙屽嚮浜嬩欢瑙﹀彂
	 * @param  
	 * @return 鏍囪瘑姝や簨浠舵槸鍚﹀凡缁忚ITool澶勭悊杩�,true:澶勭悊杩�(涓嶅啀鍚戠埗鎺т欢浼犻�掓浜嬩欢);false:鏈鐞�(鐖舵帶浠跺璞″彲浠ョ户缁鐞�)
	 */
	public boolean onDoubleClick()
	{
		return super.onDoubleClick_NoVirtual();
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
	 * 璁剧疆鍛戒护椤规槸鍚︽寜涓�
	 * @param checked 濡傛灉涓簍rue,鍒欏懡浠ら」琚寜涓�,鍙嶄箣鍒欏惁
	 */
	public void setChecked(boolean checked)
	{
		super.setChecked_NoVirtual(checked);
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
	
	public static ModelComponentSelectTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelComponentSelectTool obj = null;
 		if(baseObj instanceof ModelComponentSelectTool)
		{
			obj = (ModelComponentSelectTool)baseObj;
		} else {
			obj = new ModelComponentSelectTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelComponentSelectTool");
			obj.increaseCast();
		}

		return obj;
	}
}
