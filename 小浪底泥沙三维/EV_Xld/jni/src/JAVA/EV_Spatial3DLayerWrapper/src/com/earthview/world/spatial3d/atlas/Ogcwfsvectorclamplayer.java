package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ogcwfsvectorclamplayer extends com.earthview.world.spatial3d.atlas.VectorDBClampSceneLayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorClampLayer", new OgcwfsvectorclamplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWFSVectorClampLayerProxy", new OgcwfsvectorclamplayerClassFactory());
	}

	public Ogcwfsvectorclamplayer(com.earthview.world.spatial.geodataset.Idataset ref_Dataset) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_DatasetPtr = new BasePointer(ref_Dataset);
		list.add("ref_Dataset", ref_DatasetPtr.get());
		Create("JCOGCWFSVectorClampLayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Ogcwfsvectorclamplayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setCacheDataset_IDataset(long pNativeObject, long ds);
	public void setCacheDataset(com.earthview.world.spatial.geodataset.Idataset ds)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		setCacheDataset_IDataset(this.nativeObject.pointer, dsParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层的类型
	 * @param  
	 * @return 图层的类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	native private long getDataset_void(long pNativeObject);
	/**
	 * 返回数据集
	 * @param  
	 * @return 数据集
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long getDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual()
	{
		long returnValue = getDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	public Ogcwfsvectorclamplayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwfsvectorclamplayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 鑾峰彇鐭㈤噺绫诲瀷
	 * @param  
	 * @return 鐭㈤噺绫诲瀷
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 鑾峰彇涓撻鍥炬渶澶у彲瑙嗚窛绂�
	 * @param  
	 * @return 涓撻鍥炬渶澶у彲瑙嗚窛绂�
	 */
	public double getMaxStaticsThemeVisibleDistance()
	{
		return super.getMaxStaticsThemeVisibleDistance_NoVirtual();
	}
	/**
	 * 璁剧疆涓撻鍥炬渶澶у彲瑙嗚窛绂�
	 * @param dis 涓撻鍥炬渶澶у彲瑙嗚窛绂�
	 */
	public void setMaxStaticsThemeVisibleDistance(double dis)
	{
		super.setMaxStaticsThemeVisibleDistance_NoVirtual(dis);
	}
	/**
	 * 鑾峰彇鐡︾墖锛屽叿浣撳湪瀛愮被涓疄鐜�
	 * @param tile 鐡︾墖鍐呭
	 * @param north 鐡︾墖淇℃伅
	 * @return 鏄惁鎴愬姛
	 */
	public boolean getTile(int level, int row, int col, com.earthview.world.spatial.TileData tile)
	{
		return super.getTile_NoVirtual(level, row, col, tile);
	}
	/**
	 * 鑾峰彇鐡︾墖锛屽叿浣撳湪瀛愮被涓疄鐜�
	 * @param tile 鐡︾墖鍐呭
	 * @param north 鐡︾墖淇℃伅
	 * @return 鏄惁鎴愬姛
	 */
	public boolean getTile(com.earthview.world.spatial.TileInfo tileInfo, com.earthview.world.spatial.TileData tile)
	{
		return super.getTile_NoVirtual(tileInfo, tile);
	}
	/**
	 * 鑾峰彇鐡︾墖
	 * @param minX 鐡︾墖缁忕含搴﹁寖鍥磎inX
	 * @param minY 鐡︾墖缁忕含搴﹁寖鍥磎inY
	 * @param maxX 鐡︾墖缁忕含搴﹁寖鍥磎axX
	 * @param maxY 鐡︾墖缁忕含搴﹁寖鍥磎axY
	 * @param tile 杩斿洖鐨勭摝鐗囨暟鎹俊鎭�
	 * @return 鏄惁鎴愬姛
	 */
	public boolean getTile(double minX, double minY, double maxX, double maxY, com.earthview.world.spatial.TileData tile)
	{
		return super.getTile_NoVirtual(minX, minY, maxX, maxY, tile);
	}
	/**
	 * 鑾峰彇鏈�澶х骇鍒�
	 * @param  
	 * @return 鏈�澶х骇鍒�
	 */
	public int getMaxLevel()
	{
		return super.getMaxLevel_NoVirtual();
	}
	/**
	 * 鑾峰彇鏈�灏忕骇鍒�
	 * @param  
	 * @return 鏈�灏忕骇鍒�
	 */
	public int getMinLevel()
	{
		return super.getMinLevel_NoVirtual();
	}
	/**
	 * 鑾峰彇鏈�澶х摝鐗囩骇鍒�
	 * @return 鏈�澶х摝鐗囩骇鍒�
	 */
	public int getMaxVisibleLevel()
	{
		return super.getMaxVisibleLevel_NoVirtual();
	}
	/**
	 * 鑾峰彇鏈�灏忕摝鐗囩骇鍒�
	 * @return 鏈�灏忕摝鐗囩骇鍒�
	 */
	public int getMinVisibleLevel()
	{
		return super.getMinVisibleLevel_NoVirtual();
	}
	/**
	 * 璁剧疆鏈�澶х摝鐗囩骇鍒�
	 * @param maxlevel 鏈�澶х摝鐗囩骇鍒�
	 */
	public boolean setMaxVisibleLevel(int maxlevel)
	{
		return super.setMaxVisibleLevel_NoVirtual(maxlevel);
	}
	/**
	 * 璁剧疆鏈�灏忕摝鐗囩骇鍒�
	 * @param maxlevel 鏈�灏忕摝鐗囩骇鍒�
	 */
	public boolean setMinVisibleLevel(int minlevel)
	{
		return super.setMinVisibleLevel_NoVirtual(minlevel);
	}
	/**
	 * 鑾峰彇涓撻鍥惧唴瀛樻祦
	 * @return 涓撻鍥惧唴瀛樻祦
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getThemeStream()
	{
		return super.getThemeStream_NoVirtual();
	}
	/**
	 * 鍒ゆ柇鍐呭瓨娴佹槸鍚︾浉鍚�
	 * @return 鍐呭瓨娴佹槸鍚︾浉鍚�
	 */
	public boolean equalThemeStream(com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		return super.equalThemeStream_NoVirtual(stream);
	}
	/**
	 * 閫氱煡鐡︾墖宸插垱寤�/閿�姣�
	 * @param level 绾у埆
	 * @param row 琛�
	 * @param col 鍒�
	 */
	public void _notifyTileCreated(long level, long row, long col)
	{
		super._notifyTileCreated_NoVirtual(level, row, col);
	}
	public void _notifyTileDestroyed(long level, long row, long col)
	{
		super._notifyTileDestroyed_NoVirtual(level, row, col);
	}
	/**
	 * 鑾风煡鎸囧畾绾у埆鐨勭摝鐗囨槸鍚︽湁鏁�
	 * @return 鎸囧畾绾у埆鐨勭摝鐗囨湁鏁堟��
	 */
	public boolean levelValid(int level)
	{
		return super.levelValid_NoVirtual(level);
	}
	/**
	 * 杩斿洖鍥惧眰鍦扮悊鑼冨洿
	 * @param  
	 * @return 鍥惧眰鍦扮悊鑼冨洿
	 */
	public com.earthview.world.spatial.geometry.Envelope getGeoExtent()
	{
		return super.getGeoExtent_NoVirtual();
	}
	/**
	 * 璁剧疆鍗峰笜鑼冨洿(鍍忕礌鍗曚綅锛屽彇鍊间负[-1,1])
	 * @param minPX 鏈�灏弜鍧愭爣
	 * @param minPY 鏈�灏弝鍧愭爣
	 * @param maxPX 鏈�澶鍧愭爣
	 * @param maxPY 鏈�澶鍧愭爣
	 * @return 鏄惁鎴愬姛
	 */
	public boolean setCurtainExtent(float minPX, float minPY, float maxPX, float maxPY)
	{
		return super.setCurtainExtent_NoVirtual(minPX, minPY, maxPX, maxPY);
	}
	/**
	 * 璁剧疆鍗峰笜閫忔槑搴�(鍙栧�艰寖鍥碵0,1];0涓轰笉閫忔槑,1涓哄叏閫忔槑)
	 * @param alpha 閫忔槑搴�
	 * @return 鏄惁鎴愬姛
	 */
	public boolean setCurtainAlpha(float alpha)
	{
		return super.setCurtainAlpha_NoVirtual(alpha);
	}
	/**
	 * 鑾峰彇鍗峰笜鑼冨洿(鍍忕礌鍗曚綅锛屽彇鍊间负[-1,1])
	 * @param minPX 鏈�灏弜鍧愭爣
	 * @param minPY 鏈�灏弝鍧愭爣
	 * @param maxPX 鏈�澶鍧愭爣
	 * @param maxPY 鏈�澶鍧愭爣
	 * @return 鏄惁鎴愬姛
	 */
	public boolean getCurtainExtent(FloatPointer minPX, FloatPointer minPY, FloatPointer maxPX, FloatPointer maxPY)
	{
		return super.getCurtainExtent_NoVirtual(minPX, minPY, maxPX, maxPY);
	}
	/**
	 * 鑾峰彇鍗峰笜鏄惁寮�鍚�
	 */
	public boolean getCurtainEnabled()
	{
		return super.getCurtainEnabled_NoVirtual();
	}
	/**
	 * 寮�鍚垨鑰呭叧闂嵎甯�
	 * @param enabled 
	 */
	public boolean setCurtainEnabled(boolean enabled)
	{
		return super.setCurtainEnabled_NoVirtual(enabled);
	}
	/**
	 * 鑾峰彇鍗峰笜閫忔槑搴�(鍙栧�艰寖鍥碵0,1];0涓轰笉閫忔槑,1涓哄叏閫忔槑)
	 * @param alpha 閫忔槑搴�
	 * @return 鏄惁鎴愬姛
	 */
	public boolean getCurtainAlpha(FloatPointer alpha)
	{
		return super.getCurtainAlpha_NoVirtual(alpha);
	}
	/**
	 * 鑾峰彇鍥惧眰璐村湴妯″紡
	 * @param  
	 * @return 璐村湴妯″紡
	 */
	public com.earthview.world.spatial3d.atlas.ClampMode getClampMode()
	{
		return super.getClampMode_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰璐村湴妯″紡
	 * @param mode 璐村湴妯″紡
	 */
	public void setClampMode(com.earthview.world.spatial3d.atlas.ClampMode mode)
	{
		super.setClampMode_NoVirtual(mode);
	}
	/**
	 * 缁戝畾涓�涓簩缁村浘灞�
	 * @param layer 浜岀淮鍥惧眰
	 */
	public void attachLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		super.attachLayer_NoVirtual(layer);
	}
	/**
	 * 鍙栨秷缁戝畾浜岀淮鍥惧眰
	 * @param  
	 */
	public void detachLayer()
	{
		super.detachLayer_NoVirtual();
	}
	/**
	 * 鑾峰彇缁戝畾鐨勪簩缁村浘灞�
	 * @param  
	 * @return 缁戝畾鐨勪簩缁村浘灞�
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		return super.getLayer_NoVirtual();
	}
	/**
	 * 鑾峰彇涓撻鍥�
	 * @param  
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme()
	{
		return super.getTheme_NoVirtual();
	}
	/**
	 * 璁剧疆涓撻鍥�
	 * @param theme 涓撻鍥�
	 */
	public void setTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		super.setTheme_NoVirtual(theme);
	}
	/// <summary>
	/// 鑾峰緱鍦烘櫙鍚嶇О
	/// </summary>
	/// <returns>鍦烘櫙鍚嶇О</return>
	public String getSceneName()
	{
		return super.getSceneName_NoVirtual();
	}
	/**
	 * 鑾峰彇鍖呭洿鐩掑湪X杞翠笂鏈�灏忓��
	 * @param  
	 * @return 鍖呭洿鐩掑湪X杞翠笂鏈�灏忓��
	 */
	public double getMinX()
	{
		return super.getMinX_NoVirtual();
	}
	/**
	 * 鑾峰彇鍖呭洿鐩掑湪X杞翠笂鏈�澶у��
	 * @param  
	 * @return 鍖呭洿鐩掑湪X杞翠笂鏈�澶у��
	 */
	public double getMaxX()
	{
		return super.getMaxX_NoVirtual();
	}
	/**
	 * 鑾峰彇鍖呭洿鐩掑湪Y杞翠笂鏈�灏忓��
	 * @param  
	 * @return 鍖呭洿鐩掑湪Y杞翠笂鏈�灏忓��
	 */
	public double getMinY()
	{
		return super.getMinY_NoVirtual();
	}
	/**
	 * 鑾峰彇鍖呭洿鐩掑湪Y杞翠笂鏈�澶у��
	 * @param  
	 * @return 鍖呭洿鐩掑湪Y杞翠笂鏈�澶у��
	 */
	public double getMaxY()
	{
		return super.getMaxY_NoVirtual();
	}
	/**
	 * 鏍规嵁缁忕含搴﹀拰绾у埆鑾峰彇楂樼▼
	 * @param lat 绾害
	 * @param lon 缁忓害
	 * @param targetSamplesPerDegrees 姣忓害閲囨牱鏁帮紝-1琛ㄧず鏈�楂樼簿搴�
	 */
	public boolean getHeightAt(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		return super.getHeightAt_NoVirtual(lat, lon, targetSamplesPerDegrees, height);
	}
	/**
	 * Globe鍔犺浇涓�涓浘灞備箣鍚庤皟鐢ㄧ殑鍑芥暟
	 * @param  
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerAdd_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe鍗歌浇涓�涓浘灞備箣鍚庤皟鐢ㄧ殑鍑芥暟
	 * @param  
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		super._notifyLayerRemoved_NoVirtual(pSceneMgr);
	}
	/**
	 * Globe鍒锋柊鏃惰皟鐢ㄧ殑鍑芥暟
	 * @param camera 褰撳墠鐨勭浉鏈�
	 * @param level 褰撳墠鐨勭骇鍒�
	 * @param force 鏄惁涓哄己鍒跺埛鏂�
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		super._notifyRefreshed_NoVirtual(camera, updateType);
	}
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		super._notifyRefreshed_NoVirtual(camera);
	}
	/**
	 * 鏁版嵁闆嗘洿鏂颁簨浠剁殑閫氱煡
	 * @param strDatasetName 鏁版嵁闆嗗悕绉�
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		super._notifyDataChanged_NoVirtual(strDataSourceName, strDatasetName, pEvent);
	}
	/// <summary>
	/// 鑾峰緱鍦烘櫙绠＄悊鍣�
	/// </summary>
	/// <returns>鍦烘櫙绠＄悊鍣�</return>
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
	}
	/**
	 * 鑾峰彇鏁版嵁闆嗙殑鍚嶇О
	 * @param  
	 */
	public String getDatasetName()
	{
		return super.getDatasetName_NoVirtual();
	}
	/**
	 * 鑾峰彇鏁版嵁闆嗘墍鍦ㄧ殑鏁版嵁婧�
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource()
	{
		return super.getDataSource_NoVirtual();
	}
	/**
	 * 鍥惧眰閫夋嫨
	 * @param filter 閫夋嫨杩囨护鏉′欢
	 * @param type 閫夋嫨绫诲瀷
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		super.select_NoVirtual(filter, type);
	}
	/**
	 * 娓呯┖鍥惧眰閫夋嫨
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鐨勯�夋嫨闆�
	 * @param selection 鍥惧眰鐨勯�夋嫨闆�
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
	}
	/**
	 * 鑾峰彇鍥惧眰閫夋嫨
	 * @param  
	 * @return 鍥惧眰閫夋嫨
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		return super.getLayerSelection_NoVirtual();
	}
	/**
	 * 鑾峰彇鍥惧眰鐨勫悕绉�
	 * @param  
	 * @return 鍥惧眰鍚嶇О
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鐨勫悕绉�
	 * @param name 鍥惧眰鍚嶇О
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	/**
	 * 鑾峰彇鍥惧眰鐨勬弿杩颁俊鎭�
	 * @param  
	 * @return 鎻忚堪淇℃伅
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鐨勬弿杩颁俊鎭�
	 * @param value 鎻忚堪淇℃伅
	 */
	public void setDescription(String value)
	{
		super.setDescription_NoVirtual(value);
	}
	/**
	 * 妫�娴嬪浘灞傚浘灞傛槸鍚﹀彲浠ョ紪杈�
	 * @param  
	 * @return 濡傛灉鍥惧眰鍙互缂栬緫,鍒欒繑鍥瀟rue,鍙嶄箣鍒欏惁
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鏄惁鍙互鏀寔缂栬緫
	 * @param can 濡傛灉涓簍rue,鍒欏浘灞傚彲浠ョ紪杈�,鍙嶄箣鍒欏惁
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
	}
	/**
	 * 妫�娴嬪浘灞傛槸鍚︽鍦ㄨ缂栬緫
	 * @param  
	 * @return 濡傛灉鍥惧眰姝ｅ湪缂栬緫鍒欒繑鍥瀟rue,鍙嶄箣鍒欏惁
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鏄惁姝ｅ湪缂栬緫
	 * @param editing 濡傛灉涓簍rue,鍒欒缃浘灞傛鍦ㄧ紪杈�,鍙嶄箣鍒欏惁
	 */
	public void setEditing(boolean editing)
	{
		super.setEditing_NoVirtual(editing);
	}
	/**
	 * 妫�娴嬪浘灞傛槸鍚﹀彲瑙�
	 * @param  
	 * @return 濡傛灉鍥惧眰鍙鍒欒繑鍥瀟rue,鍙嶄箣鍒欏惁
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鏄惁鍙
	 * @param visible 濡傛灉涓簍rue,鍒欏浘灞傚彲瑙�,鍙嶄箣鍒欏惁
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 妫�娴嬪浘灞傛槸鍚︽湁鏁�
	 * @param  
	 * @return 濡傛灉鏈夋晥鍒欒繑鍥瀟rue,鍙嶄箣鍒欏惁
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 鍒ゆ柇鍥惧眰鏄惁鏀寔閫夋嫨
	 * @param  
	 */
	public boolean isSelectable()
	{
		return super.isSelectable_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鏄惁鏀寔閫夋嫨
	 * @param selectable 鏄惁鍙��
	 */
	public void setSelectable(boolean selectable)
	{
		super.setSelectable_NoVirtual(selectable);
	}
	/**
	 * 妫�娴嬪浘灞傜粯鍒舵椂鏄惁蹇界暐姣斾緥灏虹殑鍥犵礌
	 * @param  
	 * @return 濡傛灉蹇界暐,鍒欒繑鍥瀟rue,鍙嶄箣鍒欏惁
	 */
	public boolean ignoreScale()
	{
		return super.ignoreScale_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鐨勭粯鍒舵槸鍚﹀拷鐣ユ瘮渚嬪昂鐨勫洜绱�
	 * @param bIgnore 鏄惁蹇界暐
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		super.setIgnoreScale_NoVirtual(bIgnore);
	}
	/**
	 * 鑾峰彇鏈�澶ф樉绀烘瘮渚嬪昂
	 * @param  
	 * @return 姣斾緥灏�
	 */
	public double getDisplayMaxScale()
	{
		return super.getDisplayMaxScale_NoVirtual();
	}
	/**
	 * 璁剧疆鏈�澶ф樉绀烘瘮渚嬪昂
	 * @param scale 姣斾緥灏�
	 */
	public void setDisplayMaxScale(double scale)
	{
		super.setDisplayMaxScale_NoVirtual(scale);
	}
	/**
	 * 鑾峰彇鏈�灏忔樉绀烘瘮渚嬪昂
	 * @param  
	 * @return 姣斾緥灏�
	 */
	public double getDisplayMinScale()
	{
		return super.getDisplayMinScale_NoVirtual();
	}
	/**
	 * 璁剧疆鏈�灏忔樉绀烘瘮渚嬪昂
	 * @param scale 姣斾緥灏�
	 */
	public void setDisplayMinScale(double scale)
	{
		super.setDisplayMinScale_NoVirtual(scale);
	}
	/**
	 * 鑾峰彇鍥惧眰鐨勫潗鏍囩郴缁�
	 * @param  
	 * @return 鍧愭爣绯荤粺
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
	}
	/**
	 * 璁剧疆鍥惧眰鐨勫潗鏍囩郴缁�
	 * @param sr 鍧愭爣绯荤粺
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReference_NoVirtual(ref_sr);
	}
	/**
	 * 璁剧疆鍥惧眰鐨勯�忔槑搴�
	 * @param transparent 閫忔槑鍊�
	 */
	public void setTransparentValue(short transparent)
	{
		super.setTransparentValue_NoVirtual(transparent);
	}
	/**
	 * 鑾峰彇鍥惧眰鐨勯�忔槑鍊�
	 * @param  
	 * @return 閫忔槑鍊�
	 */
	public short getTransparentValue()
	{
		return super.getTransparentValue_NoVirtual();
	}
	/**
	 * 鑾峰彇鍥惧眰鐨勮寖鍥�
	 * @param  
	 * @return 鍥惧眰鑼冨洿
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		return super.getExtent_NoVirtual();
	}
	/**
	 * 缁樺埗鍥惧眰
	 * @param display 绌洪棿鏄剧ず鍙傛暟
	 * @param type 缁樺埗绫诲瀷
	 */
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		return super.draw_NoVirtual(display, type);
	}
	/**
	 * 鍥惧眰鐨勫鍒�,鍐呭瓨澶栭儴閲婃斁
	 * @param sr 鍙傝�冨潗鏍囩郴
	 * @return 鍥惧眰
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 鎶婂浘灞傜殑淇℃伅淇濆瓨鍒版祦涓�
	 * @param steam 瀵煎嚭娴�
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	/**
	 * 浠巟ml涓仮澶嶅浘灞傜殑閰嶇疆
	 * @param element xml瑕佺礌
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	/**
	 * 鎶婂浘灞傜殑淇℃伅瀵煎嚭鍒皒ml涓�
	 * @param  
	 * @return xml瑕佺礌
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		return super.toXmlElement_NoVirtual();
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getMaxStaticsThemeVisibleDistance_void(long pNativeObject, String method);
	native protected void register_setMaxStaticsThemeVisibleDistance_ev_real64(long pNativeObject, String method);
	native protected void register_getTile_ev_int32_ev_int32_ev_int32_CTileData(long pNativeObject, String method);
	native protected void register_getTile_CTileInfo_CTileData(long pNativeObject, String method);
	native protected void register_getTile_Real_Real_Real_Real_CTileData(long pNativeObject, String method);
	native protected void register_getMaxLevel_void(long pNativeObject, String method);
	native protected void register_getMinLevel_void(long pNativeObject, String method);
	native protected void register_getMaxVisibleLevel_void(long pNativeObject, String method);
	native protected void register_getMinVisibleLevel_void(long pNativeObject, String method);
	native protected void register_setMaxVisibleLevel_ev_int32(long pNativeObject, String method);
	native protected void register_setMinVisibleLevel_ev_int32(long pNativeObject, String method);
	native protected void register_getThemeStream_void(long pNativeObject, String method);
	native protected void register_equalThemeStream_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register__notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_levelValid_ev_int32(long pNativeObject, String method);
	native protected void register_getGeoExtent_void(long pNativeObject, String method);
	native protected void register_setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_setCurtainAlpha_ev_real32(long pNativeObject, String method);
	native protected void register_getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_getCurtainEnabled_void(long pNativeObject, String method);
	native protected void register_setCurtainEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getCurtainAlpha_ev_real32(long pNativeObject, String method);
	native protected void register_getClampMode_void(long pNativeObject, String method);
	native protected void register_setClampMode_ClampMode(long pNativeObject, String method);
	native protected void register_attachLayer_ILayer(long pNativeObject, String method);
	native protected void register_detachLayer_void(long pNativeObject, String method);
	native protected void register_getLayer_void(long pNativeObject, String method);
	native protected void register_getTheme_void(long pNativeObject, String method);
	native protected void register_setTheme_ITheme(long pNativeObject, String method);
	native protected void register_getSceneName_void(long pNativeObject, String method);
	native protected void register_getMinX_void(long pNativeObject, String method);
	native protected void register_getMaxX_void(long pNativeObject, String method);
	native protected void register_getMinY_void(long pNativeObject, String method);
	native protected void register_getMaxY_void(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register__notifyLayerAdd_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyLayerRemoved_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera(long pNativeObject, String method);
	native protected void register__notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getDatasetName_void(long pNativeObject, String method);
	native protected void register_getDataSource_void(long pNativeObject, String method);
	native protected void register_select_IQueryFilter_EVSelectionResultType(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setLayerSelection_ILayerSelection(long pNativeObject, String method);
	native protected void register_getLayerSelection_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_setCanEdit_ev_bool(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_setEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getDisplayMaxScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_getDisplayMinScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setTransparentValue_ev_uint8(long pNativeObject, String method);
	native protected void register_getTransparentValue_void(long pNativeObject, String method);
	native protected void register_getExtent_void(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getMaxStaticsThemeVisibleDistance_void(this.nativeObject.pointer, "getMaxStaticsThemeVisibleDistance_void_callback");
			this.register_setMaxStaticsThemeVisibleDistance_ev_real64(this.nativeObject.pointer, "setMaxStaticsThemeVisibleDistance_ev_real64_callback");
			this.register_getTile_ev_int32_ev_int32_ev_int32_CTileData(this.nativeObject.pointer, "getTile_ev_int32_ev_int32_ev_int32_CTileData_callback");
			this.register_getTile_CTileInfo_CTileData(this.nativeObject.pointer, "getTile_CTileInfo_CTileData_callback");
			this.register_getTile_Real_Real_Real_Real_CTileData(this.nativeObject.pointer, "getTile_Real_Real_Real_Real_CTileData_callback");
			this.register_getMaxLevel_void(this.nativeObject.pointer, "getMaxLevel_void_callback");
			this.register_getMinLevel_void(this.nativeObject.pointer, "getMinLevel_void_callback");
			this.register_getMaxVisibleLevel_void(this.nativeObject.pointer, "getMaxVisibleLevel_void_callback");
			this.register_getMinVisibleLevel_void(this.nativeObject.pointer, "getMinVisibleLevel_void_callback");
			this.register_setMaxVisibleLevel_ev_int32(this.nativeObject.pointer, "setMaxVisibleLevel_ev_int32_callback");
			this.register_setMinVisibleLevel_ev_int32(this.nativeObject.pointer, "setMinVisibleLevel_ev_int32_callback");
			this.register_getThemeStream_void(this.nativeObject.pointer, "getThemeStream_void_callback");
			this.register_equalThemeStream_MemoryDataStreamPtr(this.nativeObject.pointer, "equalThemeStream_MemoryDataStreamPtr_callback");
			this.register__notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "_notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register__notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "_notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_levelValid_ev_int32(this.nativeObject.pointer, "levelValid_ev_int32_callback");
			this.register_getGeoExtent_void(this.nativeObject.pointer, "getGeoExtent_void_callback");
			this.register_setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "setCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_setCurtainAlpha_ev_real32(this.nativeObject.pointer, "setCurtainAlpha_ev_real32_callback");
			this.register_getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getCurtainExtent_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_getCurtainEnabled_void(this.nativeObject.pointer, "getCurtainEnabled_void_callback");
			this.register_setCurtainEnabled_ev_bool(this.nativeObject.pointer, "setCurtainEnabled_ev_bool_callback");
			this.register_getCurtainAlpha_ev_real32(this.nativeObject.pointer, "getCurtainAlpha_ev_real32_callback");
			this.register_getClampMode_void(this.nativeObject.pointer, "getClampMode_void_callback");
			this.register_setClampMode_ClampMode(this.nativeObject.pointer, "setClampMode_ClampMode_callback");
			this.register_attachLayer_ILayer(this.nativeObject.pointer, "attachLayer_ILayer_callback");
			this.register_detachLayer_void(this.nativeObject.pointer, "detachLayer_void_callback");
			this.register_getLayer_void(this.nativeObject.pointer, "getLayer_void_callback");
			this.register_getTheme_void(this.nativeObject.pointer, "getTheme_void_callback");
			this.register_setTheme_ITheme(this.nativeObject.pointer, "setTheme_ITheme_callback");
			this.register_getSceneName_void(this.nativeObject.pointer, "getSceneName_void_callback");
			this.register_getMinX_void(this.nativeObject.pointer, "getMinX_void_callback");
			this.register_getMaxX_void(this.nativeObject.pointer, "getMaxX_void_callback");
			this.register_getMinY_void(this.nativeObject.pointer, "getMinY_void_callback");
			this.register_getMaxY_void(this.nativeObject.pointer, "getMaxY_void_callback");
			this.register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register__notifyLayerAdd_CSceneManager(this.nativeObject.pointer, "_notifyLayerAdd_CSceneManager_callback");
			this.register__notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, "_notifyLayerRemoved_CSceneManager_callback");
			this.register__notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, "_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
			this.register__notifyRefreshed_CCamera(this.nativeObject.pointer, "_notifyRefreshed_CCamera_callback");
			this.register__notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, "_notifyDataChanged_EVString_EVString_CEvent_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getDatasetName_void(this.nativeObject.pointer, "getDatasetName_void_callback");
			this.register_getDataSource_void(this.nativeObject.pointer, "getDataSource_void_callback");
			this.register_select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, "select_IQueryFilter_EVSelectionResultType_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setLayerSelection_ILayerSelection(this.nativeObject.pointer, "setLayerSelection_ILayerSelection_callback");
			this.register_getLayerSelection_void(this.nativeObject.pointer, "getLayerSelection_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_setCanEdit_ev_bool(this.nativeObject.pointer, "setCanEdit_ev_bool_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_setEditing_ev_bool(this.nativeObject.pointer, "setEditing_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getDisplayMaxScale_void(this.nativeObject.pointer, "getDisplayMaxScale_void_callback");
			this.register_setDisplayMaxScale_ev_real64(this.nativeObject.pointer, "setDisplayMaxScale_ev_real64_callback");
			this.register_getDisplayMinScale_void(this.nativeObject.pointer, "getDisplayMinScale_void_callback");
			this.register_setDisplayMinScale_ev_real64(this.nativeObject.pointer, "setDisplayMinScale_ev_real64_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_setTransparentValue_ev_uint8(this.nativeObject.pointer, "setTransparentValue_ev_uint8_callback");
			this.register_getTransparentValue_void(this.nativeObject.pointer, "getTransparentValue_void_callback");
			this.register_getExtent_void(this.nativeObject.pointer, "getExtent_void_callback");
			this.register_draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, "draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Ogcwfsvectorclamplayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwfsvectorclamplayer obj = null;
 		if(baseObj instanceof Ogcwfsvectorclamplayer)
		{
			obj = (Ogcwfsvectorclamplayer)baseObj;
		} else {
			obj = new Ogcwfsvectorclamplayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWFSVectorClampLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
