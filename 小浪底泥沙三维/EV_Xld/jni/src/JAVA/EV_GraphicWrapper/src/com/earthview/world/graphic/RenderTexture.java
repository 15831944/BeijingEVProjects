package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 这个类代表了渲染到纹理的渲染目标
 */
public class RenderTexture extends com.earthview.world.graphic.RenderTarget {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderTexture", new RenderTextureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderTextureProxy", new RenderTextureClassFactory());
	}

	/**
	 * 构造函数
	 * @param buffer 
	 * @param zoffset 
	 */
	public RenderTexture(com.earthview.world.graphic.HardwarePixelBuffer ref_buffer, long zoffset) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_bufferPtr = new BasePointer(ref_buffer);
		list.add("ref_buffer", ref_bufferPtr.get());
		BasePointer zoffsetPtr = new BasePointer(zoffset);
		list.add("zoffset", zoffsetPtr.get());
		Create("JCRenderTextureProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderTexture".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void copyContentsToMemory_CPixelBox_FrameBuffer(long pNativeObject, long dst, int buffer);
	public void copyContentsToMemory(com.earthview.world.graphic.PixelBox dst, com.earthview.world.graphic.RenderTarget.FrameBuffer buffer)
	{
		long dstParamValue = dst.nativeObject.pointer;
		int bufferParamValue = buffer.getValue();
		copyContentsToMemory_CPixelBox_FrameBuffer(this.nativeObject.pointer, dstParamValue, bufferParamValue);
	}
	native private void copyContentsToMemory_CPixelBox_FrameBuffer_NoVirtual(long pNativeObject, long dst, int buffer);
	protected void copyContentsToMemory_NoVirtual(com.earthview.world.graphic.PixelBox dst, com.earthview.world.graphic.RenderTarget.FrameBuffer buffer)
	{
		long dstParamValue = dst.nativeObject.pointer;
		int bufferParamValue = buffer.getValue();
		copyContentsToMemory_CPixelBox_FrameBuffer_NoVirtual(this.nativeObject.pointer, dstParamValue, bufferParamValue);
	}

	native private int suggestPixelFormat_void(long pNativeObject);
	public com.earthview.world.graphic.PixelFormat suggestPixelFormat()
	{
		int returnValue = suggestPixelFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private int suggestPixelFormat_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.PixelFormat suggestPixelFormat_NoVirtual()
	{
		int returnValue = suggestPixelFormat_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}

	public RenderTexture(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderTexture(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获得渲染目标的名字
	 * @param  
	 */
	public StringPointer getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 找回渲染目标的信息
	 * @param width 渲染目标的宽
	 * @param height 渲染目标的高
	 * @param colourDepth 渲染目标的颜色深度
	 */
	public void getMetrics(UIntegerPointer width, UIntegerPointer height, UIntegerPointer colourDepth)
	{
		super.getMetrics_NoVirtual(width, height, colourDepth);
	}
	/**
	 * 获得渲染目标的宽
	 * @param  
	 */
	public long getWidth()
	{
		return super.getWidth_NoVirtual();
	}
	/**
	 * 获得渲染目标的高
	 * @param  
	 */
	public long getHeight()
	{
		return super.getHeight_NoVirtual();
	}
	/**
	 * 获得渲染目标的颜色深度
	 * @param  
	 */
	public long getColourDepth()
	{
		return super.getColourDepth_NoVirtual();
	}
	///Returns false if couldn't attach
	public boolean attachDepthBuffer(com.earthview.world.graphic.DepthBuffer ref_depthBuffer)
	{
		return super.attachDepthBuffer_NoVirtual(ref_depthBuffer);
	}
	public void detachDepthBuffer()
	{
		super.detachDepthBuffer_NoVirtual();
	}
	public void _detachDepthBuffer()
	{
		super._detachDepthBuffer_NoVirtual();
	}
	/**
	 * 渲染目标更新内容
	 * @param swapBuffers 如果为true更新后立刻交换它的缓冲，否则不交换
	 */
	public void update(boolean swapBuffers)
	{
		super.update_NoVirtual(swapBuffers);
	}
	/**
	 * 渲染目标更新内容
	 * @param  
	 */
	public void update()
	{
		super.update_NoVirtual();
	}
	/**
	 * 交换帧缓冲来显示下一个帧
	 * @param waitForVSync 
	 */
	public void swapBuffers(boolean waitForVSync)
	{
		super.swapBuffers_NoVirtual(waitForVSync);
	}
	/**
	 * 交换帧缓冲来显示下一个帧
	 * @param  
	 */
	public void swapBuffers()
	{
		super.swapBuffers_NoVirtual();
	}
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 * @param top 在渲染目标上视口上面的相对位置，值的范围0-1之间
	 * @param width 在渲染目标上视口宽度的相对位置，值的范围0-1之间
	 * @param height 在渲染目标上视口高度的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top, float width, float height)
	{
		return super.addViewport_NoVirtual(ref_cam, ZOrder, left, top, width, height);
	}
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 * @param top 在渲染目标上视口上面的相对位置，值的范围0-1之间
	 * @param width 在渲染目标上视口宽度的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top, float width)
	{
		return super.addViewport_NoVirtual(ref_cam, ZOrder, left, top, width);
	}
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 * @param top 在渲染目标上视口上面的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top)
	{
		return super.addViewport_NoVirtual(ref_cam, ZOrder, left, top);
	}
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left)
	{
		return super.addViewport_NoVirtual(ref_cam, ZOrder, left);
	}
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder)
	{
		return super.addViewport_NoVirtual(ref_cam, ZOrder);
	}
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam)
	{
		return super.addViewport_NoVirtual(ref_cam);
	}
	/**
	 * 返回连接到渲染目标上视口的数量
	 * @param  
	 */
	public int getNumViewports()
	{
		return super.getNumViewports_NoVirtual();
	}
	/**
	 * 返回一个指针指向已给索引的视口
	 * @param index 
	 */
	public com.earthview.world.graphic.Viewport getViewport(int index)
	{
		return super.getViewport_NoVirtual(index);
	}
	///zxt updatefor v1.8
	public com.earthview.world.graphic.Viewport getViewportByZOrder(int ZOrder)
	{
		return super.getViewportByZOrder_NoVirtual(ZOrder);
	}
	public boolean hasViewportWithZOrder(int ZOrder)
	{
		return super.hasViewportWithZOrder_NoVirtual(ZOrder);
	}
	/**
	 * 去除掉已给顺序的视口
	 * @param ZOrder 
	 */
	public void removeViewport(int ZOrder)
	{
		super.removeViewport_NoVirtual(ZOrder);
	}
	/**
	 * 去除掉渲染目标上所有的视口
	 * @param  
	 */
	public void removeAllViewports()
	{
		super.removeAllViewports_NoVirtual();
	}
	/**
	 * 获得当前渲染操作的细节
	 * @param lastFPS 指向ev_real32类型，获得每秒帧的数量基于最后一次帧渲染
	 * @param avgFPS 指向ev_real32类型，获得每秒帧的数量基于从渲染开始所有渲染帧的平均速率
	 * @param bestFPS 指向ev_real32类型，获得每秒帧的数量基于从渲染开始已经实现的最好的速率
	 * @param worstFPS 指向ev_real32类型，获得每秒帧的数量基于到目前为止最差的速率
	 */
	public void getStatistics(FloatPointer lastFPS, FloatPointer avgFPS, FloatPointer bestFPS, FloatPointer worstFPS)
	{
		super.getStatistics_NoVirtual(lastFPS, avgFPS, bestFPS, worstFPS);
	}
	/**
	 * 获得当前渲染操作的细节
	 * @param  
	 */
	public com.earthview.world.graphic.RenderTarget.FrameStats getStatistics()
	{
		return super.getStatistics_NoVirtual();
	}
	/**
	 * 基于最后的帧渲染，获得每秒帧的数量
	 * @param  
	 */
	public float getLastFPS()
	{
		return super.getLastFPS_NoVirtual();
	}
	/**
	 * 调用CRoot::startRendering之后，获得每秒平均帧的数量
	 * @param  
	 */
	public float getAverageFPS()
	{
		return super.getAverageFPS_NoVirtual();
	}
	/**
	 * 调用CRoot::startRendering之后，获得每秒最好的帧的数量
	 * @param  
	 */
	public float getBestFPS()
	{
		return super.getBestFPS_NoVirtual();
	}
	/**
	 * 调用CRoot::startRendering之后，获得每秒最差的帧的数量
	 * @param  
	 */
	public float getWorstFPS()
	{
		return super.getWorstFPS_NoVirtual();
	}
	/**
	 * 获得最好的帧的时间
	 * @param  
	 */
	public float getBestFrameTime()
	{
		return super.getBestFrameTime_NoVirtual();
	}
	/**
	 * 获得最差的帧的时间
	 * @param  
	 */
	public float getWorstFrameTime()
	{
		return super.getWorstFrameTime_NoVirtual();
	}
	/**
	 * 重新设置帧速率的统计
	 * @param  
	 */
	public void resetStatistics()
	{
		super.resetStatistics_NoVirtual();
	}
	/**
	 * 获得自定义的属性
	 * @param name 属性的名称
	 * @param pData 指向结构的正确种类的内存来获得信息
	 */
	public void getCustomAttribute(String name, VoidPointer pData)
	{
		super.getCustomAttribute_NoVirtual(name, pData);
	}
	/**
	 * 向CRenderTarget中添加一个帧监听器
	 * @param  
	 */
	public void addListener(com.earthview.world.graphic.RenderTargetListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 去除掉注册之前的帧监听器
	 * @param  
	 */
	public void removeListener(com.earthview.world.graphic.RenderTargetListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 去除掉实例中所有的帧监听器
	 * @param  
	 */
	public void removeAllListeners()
	{
		super.removeAllListeners_NoVirtual();
	}
	/**
	 * 设置渲染目标的优先权
	 * @param priority 
	 */
	public void setPriority(short priority)
	{
		super.setPriority_NoVirtual(priority);
	}
	/**
	 * 获得渲染目标的优先权
	 * @param  
	 */
	public short getPriority()
	{
		return super.getPriority_NoVirtual();
	}
	/**
	 * 获得或设置渲染目标的活跃状态
	 * @param  
	 */
	public boolean isActive()
	{
		return super.isActive_NoVirtual();
	}
	/**
	 * 设置渲染目标的活跃状态
	 * @param state 
	 */
	public void setActive(boolean state)
	{
		super.setActive_NoVirtual(state);
	}
	/**
	 * 设置渲染目标是否自动更新，如果渲染循环或者是CRoot::_updateAllRenderTargets已经被使用
	 * @param autoupdate 如果为true渲染目标自动更新，否则只有当更新方法被调用时才更新
	 */
	public void setAutoUpdated(boolean autoupdate)
	{
		super.setAutoUpdated_NoVirtual(autoupdate);
	}
	/**
	 * 获得渲染目标是否自动更新，如果渲染循环或者是CRoot::_updateAllRenderTargets已经被使用
	 * @param  
	 */
	public boolean isAutoUpdated()
	{
		return super.isAutoUpdated_NoVirtual();
	}
	/**
	 * 复制当前渲染目标的内容到一个像素盒
	 * @param dst 
	 * @param buffer 
	 */
	public void copyContentsToMemory(com.earthview.world.graphic.PixelBox dst)
	{
		super.copyContentsToMemory_NoVirtual(dst);
	}
	/**
	 * 将当前渲染目标的内容写到(PREFIX)(time-stamp)(SUFFIX)文件中
	 * @param filenamePrefix 
	 * @param filenameSuffix 
	 * @return 返回文件的名字
	 */
	public String writeContentsToTimestampedFile(String filenamePrefix, String filenameSuffix)
	{
		return super.writeContentsToTimestampedFile_NoVirtual(filenamePrefix, filenameSuffix);
	}
	public boolean requiresTextureFlipping()
	{
		return super.requiresTextureFlipping_NoVirtual();
	}
	/**
	 * 在最后的更新中获得渲染三角形的数量
	 * @param  
	 */
	public long getTriangleCount()
	{
		return super.getTriangleCount_NoVirtual();
	}
	/**
	 * 在最后的更新中获得渲染批次的数量
	 * @param  
	 */
	public long getBatchCount()
	{
		return super.getBatchCount_NoVirtual();
	}
	/**
	 * 在最后的更新中获得渲染顶点的数量
	 * @param  
	 */
	public long getVertexCount()
	{
		return super.getVertexCount_NoVirtual();
	}
	/**
	 * 通知渲染目标摄像机已经移除
	 * @param cam 
	 */
	public void _notifyCameraRemoved(com.earthview.world.graphic.Camera cam)
	{
		super._notifyCameraRemoved_NoVirtual(cam);
	}
	/**
	 * 指出渲染目标是否是主要的窗体
	 * @param  
	 */
	public boolean isPrimary()
	{
		return super.isPrimary_NoVirtual();
	}
	/**
	 * 表明渲染中是否从线性颜色空间转换到RGB颜色空间
	 * @param  
	 */
	public boolean isHardwareGammaEnabled()
	{
		return super.isHardwareGammaEnabled_NoVirtual();
	}
	/**
	 * 表明是否多个实例在渲染系统中，并且处于什么级别
	 * @param  
	 */
	public long getFSAA()
	{
		return super.getFSAA_NoVirtual();
	}
	/**
	 * 获得FSAA提示
	 * @param  
	 */
	public String getFSAAHint()
	{
		return super.getFSAAHint_NoVirtual();
	}
	/**
	 * 获得渲染目标的特殊接口
	 * @param  
	 */
	public com.earthview.world.graphic.RenderTarget.Impl _getImpl()
	{
		return super._getImpl_NoVirtual();
	}
	/**
	 * 手动的管理渲染，如'preRenderTargetUpdate'和初始化统计表
	 * @param  
	 */
	public void _beginUpdate()
	{
		super._beginUpdate_NoVirtual();
	}
	/**
	 * 手动的管理已给的视口的渲染
	 * @param zorder 更新时的顺序
	 * @param updateStatistics 是否更新统计表
	 */
	public void _updateViewport(int zorder, boolean updateStatistics)
	{
		super._updateViewport_NoVirtual(zorder, updateStatistics);
	}
	/**
	 * 手动的管理已给的视口的渲染
	 * @param zorder 更新时候的顺序
	 */
	public void _updateViewport(int zorder)
	{
		super._updateViewport_NoVirtual(zorder);
	}
	/**
	 * 手动的管理已给的视口的渲染，即使不能自动更新
	 * @param viewport 必须和渲染目标绑定的想要更新的视口
	 * @param updateStatistics 是否想要更新统计表
	 */
	public void _updateViewport(com.earthview.world.graphic.Viewport viewport, boolean updateStatistics)
	{
		super._updateViewport_NoVirtual(viewport, updateStatistics);
	}
	/**
	 * 手动的管理已给的视口的渲染，即使不能自动更新
	 * @param viewport 必须和渲染目标绑定的想要更新的视口
	 */
	public void _updateViewport(com.earthview.world.graphic.Viewport viewport)
	{
		super._updateViewport_NoVirtual(viewport);
	}
	/**
	 * 手动的管理已给的视口的渲染，视口自动更新
	 * @param updateStatistics 是否想要更新统计表
	 */
	public void _updateAutoUpdatedViewports(boolean updateStatistics)
	{
		super._updateAutoUpdatedViewports_NoVirtual(updateStatistics);
	}
	/**
	 * 手动的管理已给的视口的渲染，视口自动更新
	 * @param  
	 */
	public void _updateAutoUpdatedViewports()
	{
		super._updateAutoUpdatedViewports_NoVirtual();
	}
	/**
	 * 手动的管理渲染，完成统计表的计算
	 * @param  
	 */
	public void _endUpdate()
	{
		super._endUpdate_NoVirtual();
	}
	//// internal method for firing events
	public void firePreUpdate()
	{
		super.firePreUpdate_NoVirtual();
	}
	//// internal method for firing events
	public void firePostUpdate()
	{
		super.firePostUpdate_NoVirtual();
	}
	//// internal method for firing events
	public void fireViewportPreUpdate(com.earthview.world.graphic.Viewport vp)
	{
		super.fireViewportPreUpdate_NoVirtual(vp);
	}
	//// internal method for firing events
	public void fireViewportPostUpdate(com.earthview.world.graphic.Viewport vp)
	{
		super.fireViewportPostUpdate_NoVirtual(vp);
	}
	//// internal method for firing events
	public void fireViewportAdded(com.earthview.world.graphic.Viewport vp)
	{
		super.fireViewportAdded_NoVirtual(vp);
	}
	//// internal method for firing events
	public void fireViewportRemoved(com.earthview.world.graphic.Viewport vp)
	{
		super.fireViewportRemoved_NoVirtual(vp);
	}
	/**
	 * 内部update()的执行
	 * @param  
	 */
	public void updateImpl()
	{
		super.updateImpl_NoVirtual();
	}
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMetrics_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_getColourDepth_void(long pNativeObject, String method);
	native protected void register_attachDepthBuffer_CDepthBuffer(long pNativeObject, String method);
	native protected void register_detachDepthBuffer_void(long pNativeObject, String method);
	native protected void register__detachDepthBuffer_void(long pNativeObject, String method);
	native protected void register_update_ev_bool(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_swapBuffers_ev_bool(long pNativeObject, String method);
	native protected void register_swapBuffers_void(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera(long pNativeObject, String method);
	native protected void register_getNumViewports_void(long pNativeObject, String method);
	native protected void register_getViewport_ev_uint16(long pNativeObject, String method);
	native protected void register_getViewportByZOrder_ev_int32(long pNativeObject, String method);
	native protected void register_hasViewportWithZOrder_ev_int32(long pNativeObject, String method);
	native protected void register_removeViewport_ev_int32(long pNativeObject, String method);
	native protected void register_removeAllViewports_void(long pNativeObject, String method);
	native protected void register_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_getStatistics_void(long pNativeObject, String method);
	native protected void register_getLastFPS_void(long pNativeObject, String method);
	native protected void register_getAverageFPS_void(long pNativeObject, String method);
	native protected void register_getBestFPS_void(long pNativeObject, String method);
	native protected void register_getWorstFPS_void(long pNativeObject, String method);
	native protected void register_getBestFrameTime_void(long pNativeObject, String method);
	native protected void register_getWorstFrameTime_void(long pNativeObject, String method);
	native protected void register_resetStatistics_void(long pNativeObject, String method);
	native protected void register_getCustomAttribute_EVString_void(long pNativeObject, String method);
	native protected void register_addListener_CRenderTargetListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderTargetListener(long pNativeObject, String method);
	native protected void register_removeAllListeners_void(long pNativeObject, String method);
	native protected void register_setPriority_ev_uchar(long pNativeObject, String method);
	native protected void register_getPriority_void(long pNativeObject, String method);
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_setAutoUpdated_ev_bool(long pNativeObject, String method);
	native protected void register_isAutoUpdated_void(long pNativeObject, String method);
	native protected void register_copyContentsToMemory_CPixelBox_FrameBuffer(long pNativeObject, String method);
	native protected void register_copyContentsToMemory_CPixelBox(long pNativeObject, String method);
	native protected void register_suggestPixelFormat_void(long pNativeObject, String method);
	native protected void register_writeContentsToTimestampedFile_EVString_EVString(long pNativeObject, String method);
	native protected void register_requiresTextureFlipping_void(long pNativeObject, String method);
	native protected void register_getTriangleCount_void(long pNativeObject, String method);
	native protected void register_getBatchCount_void(long pNativeObject, String method);
	native protected void register_getVertexCount_void(long pNativeObject, String method);
	native protected void register__notifyCameraRemoved_CCamera(long pNativeObject, String method);
	native protected void register_isPrimary_void(long pNativeObject, String method);
	native protected void register_isHardwareGammaEnabled_void(long pNativeObject, String method);
	native protected void register_getFSAA_void(long pNativeObject, String method);
	native protected void register_getFSAAHint_void(long pNativeObject, String method);
	native protected void register__getImpl_void(long pNativeObject, String method);
	native protected void register__beginUpdate_void(long pNativeObject, String method);
	native protected void register__updateViewport_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register__updateViewport_ev_int32(long pNativeObject, String method);
	native protected void register__updateViewport_CViewport_ev_bool(long pNativeObject, String method);
	native protected void register__updateViewport_CViewport(long pNativeObject, String method);
	native protected void register__updateAutoUpdatedViewports_ev_bool(long pNativeObject, String method);
	native protected void register__updateAutoUpdatedViewports_void(long pNativeObject, String method);
	native protected void register__endUpdate_void(long pNativeObject, String method);
	native protected void register_firePreUpdate_void(long pNativeObject, String method);
	native protected void register_firePostUpdate_void(long pNativeObject, String method);
	native protected void register_fireViewportPreUpdate_CViewport(long pNativeObject, String method);
	native protected void register_fireViewportPostUpdate_CViewport(long pNativeObject, String method);
	native protected void register_fireViewportAdded_CViewport(long pNativeObject, String method);
	native protected void register_fireViewportRemoved_CViewport(long pNativeObject, String method);
	native protected void register_updateImpl_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMetrics_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "getMetrics_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_getColourDepth_void(this.nativeObject.pointer, "getColourDepth_void_callback");
			this.register_attachDepthBuffer_CDepthBuffer(this.nativeObject.pointer, "attachDepthBuffer_CDepthBuffer_callback");
			this.register_detachDepthBuffer_void(this.nativeObject.pointer, "detachDepthBuffer_void_callback");
			this.register__detachDepthBuffer_void(this.nativeObject.pointer, "_detachDepthBuffer_void_callback");
			this.register_update_ev_bool(this.nativeObject.pointer, "update_ev_bool_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_swapBuffers_ev_bool(this.nativeObject.pointer, "swapBuffers_ev_bool_callback");
			this.register_swapBuffers_void(this.nativeObject.pointer, "swapBuffers_void_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_callback");
			this.register_addViewport_CCamera(this.nativeObject.pointer, "addViewport_CCamera_callback");
			this.register_getNumViewports_void(this.nativeObject.pointer, "getNumViewports_void_callback");
			this.register_getViewport_ev_uint16(this.nativeObject.pointer, "getViewport_ev_uint16_callback");
			this.register_getViewportByZOrder_ev_int32(this.nativeObject.pointer, "getViewportByZOrder_ev_int32_callback");
			this.register_hasViewportWithZOrder_ev_int32(this.nativeObject.pointer, "hasViewportWithZOrder_ev_int32_callback");
			this.register_removeViewport_ev_int32(this.nativeObject.pointer, "removeViewport_ev_int32_callback");
			this.register_removeAllViewports_void(this.nativeObject.pointer, "removeAllViewports_void_callback");
			this.register_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_getStatistics_void(this.nativeObject.pointer, "getStatistics_void_callback");
			this.register_getLastFPS_void(this.nativeObject.pointer, "getLastFPS_void_callback");
			this.register_getAverageFPS_void(this.nativeObject.pointer, "getAverageFPS_void_callback");
			this.register_getBestFPS_void(this.nativeObject.pointer, "getBestFPS_void_callback");
			this.register_getWorstFPS_void(this.nativeObject.pointer, "getWorstFPS_void_callback");
			this.register_getBestFrameTime_void(this.nativeObject.pointer, "getBestFrameTime_void_callback");
			this.register_getWorstFrameTime_void(this.nativeObject.pointer, "getWorstFrameTime_void_callback");
			this.register_resetStatistics_void(this.nativeObject.pointer, "resetStatistics_void_callback");
			this.register_getCustomAttribute_EVString_void(this.nativeObject.pointer, "getCustomAttribute_EVString_void_callback");
			this.register_addListener_CRenderTargetListener(this.nativeObject.pointer, "addListener_CRenderTargetListener_callback");
			this.register_removeListener_CRenderTargetListener(this.nativeObject.pointer, "removeListener_CRenderTargetListener_callback");
			this.register_removeAllListeners_void(this.nativeObject.pointer, "removeAllListeners_void_callback");
			this.register_setPriority_ev_uchar(this.nativeObject.pointer, "setPriority_ev_uchar_callback");
			this.register_getPriority_void(this.nativeObject.pointer, "getPriority_void_callback");
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_setAutoUpdated_ev_bool(this.nativeObject.pointer, "setAutoUpdated_ev_bool_callback");
			this.register_isAutoUpdated_void(this.nativeObject.pointer, "isAutoUpdated_void_callback");
			this.register_copyContentsToMemory_CPixelBox_FrameBuffer(this.nativeObject.pointer, "copyContentsToMemory_CPixelBox_FrameBuffer_callback");
			this.register_copyContentsToMemory_CPixelBox(this.nativeObject.pointer, "copyContentsToMemory_CPixelBox_callback");
			this.register_suggestPixelFormat_void(this.nativeObject.pointer, "suggestPixelFormat_void_callback");
			this.register_writeContentsToTimestampedFile_EVString_EVString(this.nativeObject.pointer, "writeContentsToTimestampedFile_EVString_EVString_callback");
			this.register_requiresTextureFlipping_void(this.nativeObject.pointer, "requiresTextureFlipping_void_callback");
			this.register_getTriangleCount_void(this.nativeObject.pointer, "getTriangleCount_void_callback");
			this.register_getBatchCount_void(this.nativeObject.pointer, "getBatchCount_void_callback");
			this.register_getVertexCount_void(this.nativeObject.pointer, "getVertexCount_void_callback");
			this.register__notifyCameraRemoved_CCamera(this.nativeObject.pointer, "_notifyCameraRemoved_CCamera_callback");
			this.register_isPrimary_void(this.nativeObject.pointer, "isPrimary_void_callback");
			this.register_isHardwareGammaEnabled_void(this.nativeObject.pointer, "isHardwareGammaEnabled_void_callback");
			this.register_getFSAA_void(this.nativeObject.pointer, "getFSAA_void_callback");
			this.register_getFSAAHint_void(this.nativeObject.pointer, "getFSAAHint_void_callback");
			this.register__getImpl_void(this.nativeObject.pointer, "_getImpl_void_callback");
			this.register__beginUpdate_void(this.nativeObject.pointer, "_beginUpdate_void_callback");
			this.register__updateViewport_ev_int32_ev_bool(this.nativeObject.pointer, "_updateViewport_ev_int32_ev_bool_callback");
			this.register__updateViewport_ev_int32(this.nativeObject.pointer, "_updateViewport_ev_int32_callback");
			this.register__updateViewport_CViewport_ev_bool(this.nativeObject.pointer, "_updateViewport_CViewport_ev_bool_callback");
			this.register__updateViewport_CViewport(this.nativeObject.pointer, "_updateViewport_CViewport_callback");
			this.register__updateAutoUpdatedViewports_ev_bool(this.nativeObject.pointer, "_updateAutoUpdatedViewports_ev_bool_callback");
			this.register__updateAutoUpdatedViewports_void(this.nativeObject.pointer, "_updateAutoUpdatedViewports_void_callback");
			this.register__endUpdate_void(this.nativeObject.pointer, "_endUpdate_void_callback");
			this.register_firePreUpdate_void(this.nativeObject.pointer, "firePreUpdate_void_callback");
			this.register_firePostUpdate_void(this.nativeObject.pointer, "firePostUpdate_void_callback");
			this.register_fireViewportPreUpdate_CViewport(this.nativeObject.pointer, "fireViewportPreUpdate_CViewport_callback");
			this.register_fireViewportPostUpdate_CViewport(this.nativeObject.pointer, "fireViewportPostUpdate_CViewport_callback");
			this.register_fireViewportAdded_CViewport(this.nativeObject.pointer, "fireViewportAdded_CViewport_callback");
			this.register_fireViewportRemoved_CViewport(this.nativeObject.pointer, "fireViewportRemoved_CViewport_callback");
			this.register_updateImpl_void(this.nativeObject.pointer, "updateImpl_void_callback");
		}
	}
	
	public static RenderTexture fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderTexture obj = null;
 		if(baseObj instanceof RenderTexture)
		{
			obj = (RenderTexture)baseObj;
		} else {
			obj = new RenderTexture(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderTexture");
			obj.increaseCast();
		}

		return obj;
	}
}
