package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeDataSource extends com.earthview.world.spatial.geodataset.DatabaseDataSource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource", new VectorOctreeDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDataSourceProxy", new VectorOctreeDataSourceClassFactory());
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据源名称
	 * @param  
	 * @return 数据源名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据源类型
	 * @param  
	 * @return 数据源类型
	 */
	public int getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected int getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getPropertySet_void(long pNativeObject);
	/**
	 * 获取数据源参数
	 * @param  
	 * @return 数据源KeyValue参数
	 */
	public com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet()
	{
		long returnValue = getPropertySet_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}
	native private long getPropertySet_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet_NoVirtual()
	{
		long returnValue = getPropertySet_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}

	native private long getDatasetInfo_EVString(long pNativeObject, String datasetName);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param  
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getDatasetInfo_EVString(this.nativeObject.pointer, datasetNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}
	native private long getDatasetInfo_EVString_NoVirtual(long pNativeObject, String datasetName);
	protected com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo_NoVirtual(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getDatasetInfo_EVString_NoVirtual(this.nativeObject.pointer, datasetNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}

	native private long getDatasetInfos_EVDatasetType(long pNativeObject, int type);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param  
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}
	native private long getDatasetInfos_EVDatasetType_NoVirtual(long pNativeObject, int type);
	protected com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos_NoVirtual(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}

	protected  boolean createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback(String name, int geometryType, int layerType, long pEnv, long sr, long layerInfoStream)
	{
		String nameParamValue = name;
		com.earthview.world.spatial.geometry.EVGeometryType geometryTypeParamValue = com.earthview.world.spatial.geometry.EVGeometryType.toEnum(geometryType);
		com.earthview.world.spatial.atlas.EVLayerType layerTypeParamValue = com.earthview.world.spatial.atlas.EVLayerType.toEnum(layerType);
		com.earthview.world.spatial.geometry.Ienvelope pEnvParamValue = (pEnv == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEnvParamValue != null)
		{
		pEnvParamValue.setDelegate(true);
		pEnvParamValue.setInstancePointer(new InstancePointer(pEnv));
		IClassFactory pEnvParamValueClassFactory = GlobalClassFactoryMap.get(pEnvParamValue.getCppInstanceTypeName());
		if (pEnvParamValueClassFactory != null)
		{
			pEnvParamValue.setDelegate(true);
			pEnvParamValue = (com.earthview.world.spatial.geometry.Ienvelope)pEnvParamValueClassFactory.create();
			pEnvParamValue.setDelegate(true);
			pEnvParamValue.setInstancePointer(new InstancePointer(pEnv));
		}
		}
		com.earthview.world.spatial.geometry.Ispatialreference srParamValue = (sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(srParamValue != null)
		{
		srParamValue.setDelegate(true);
		srParamValue.setInstancePointer(new InstancePointer(sr));
		IClassFactory srParamValueClassFactory = GlobalClassFactoryMap.get(srParamValue.getCppInstanceTypeName());
		if (srParamValueClassFactory != null)
		{
			srParamValue.setDelegate(true);
			srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)srParamValueClassFactory.create();
			srParamValue.setDelegate(true);
			srParamValue.setInstancePointer(new InstancePointer(sr));
		}
		}
		com.earthview.world.core.MemoryDataStreamPtr layerInfoStreamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		layerInfoStreamParamValue.setDelegate(true);
		layerInfoStreamParamValue.setInstancePointer(new InstancePointer(layerInfoStream));
		IClassFactory layerInfoStreamParamValueClassFactory = GlobalClassFactoryMap.get(layerInfoStreamParamValue.getCppInstanceTypeName());
		if (layerInfoStreamParamValueClassFactory != null)
		{
			layerInfoStreamParamValue.setDelegate(true);
			layerInfoStreamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)layerInfoStreamParamValueClassFactory.create();
			layerInfoStreamParamValue.setDelegate(true);
			layerInfoStreamParamValue.setInstancePointer(new InstancePointer(layerInfoStream));
		}
		boolean returnValue = createDataset(nameParamValue, geometryTypeParamValue, layerTypeParamValue, pEnvParamValue, srParamValue, layerInfoStreamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr(long pNativeObject, String name, int geometryType, int layerType, long pEnv, long sr, long layerInfoStream);
	/**
	 * 创建指定类别数据集，对于返回的指针需要通过closedataset来释放资源
	 * @param name 指定名称
	 * @param srID 地理或是投影坐标系ID
	 * @return ev_bool，创建失败返回FALSE
	 */
	public boolean createDataset(String name, com.earthview.world.spatial.geometry.EVGeometryType geometryType, com.earthview.world.spatial.atlas.EVLayerType layerType, com.earthview.world.spatial.geometry.Ienvelope pEnv, com.earthview.world.spatial.geometry.Ispatialreference sr, com.earthview.world.core.MemoryDataStreamPtr layerInfoStream)
	{
		String nameParamValue = name;
		int geometryTypeParamValue = geometryType.getValue();
		int layerTypeParamValue = layerType.getValue();
		long pEnvParamValue = (pEnv == null ? 0L : pEnv.nativeObject.pointer);
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long layerInfoStreamParamValue = layerInfoStream.nativeObject.pointer;
		boolean returnValue = createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr(this.nativeObject.pointer, nameParamValue, geometryTypeParamValue, layerTypeParamValue, pEnvParamValue, srParamValue, layerInfoStreamParamValue);
		return returnValue;
	}
	native private boolean createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String name, int geometryType, int layerType, long pEnv, long sr, long layerInfoStream);
	protected boolean createDataset_NoVirtual(String name, com.earthview.world.spatial.geometry.EVGeometryType geometryType, com.earthview.world.spatial.atlas.EVLayerType layerType, com.earthview.world.spatial.geometry.Ienvelope pEnv, com.earthview.world.spatial.geometry.Ispatialreference sr, com.earthview.world.core.MemoryDataStreamPtr layerInfoStream)
	{
		String nameParamValue = name;
		int geometryTypeParamValue = geometryType.getValue();
		int layerTypeParamValue = layerType.getValue();
		long pEnvParamValue = (pEnv == null ? 0L : pEnv.nativeObject.pointer);
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long layerInfoStreamParamValue = layerInfoStream.nativeObject.pointer;
		boolean returnValue = createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, nameParamValue, geometryTypeParamValue, layerTypeParamValue, pEnvParamValue, srParamValue, layerInfoStreamParamValue);
		return returnValue;
	}

	native private long openDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定数据集名称的数据集
	 * @param name 指定名称
	 * @return 数据集对象指针，如果名字不存在，这返回null
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long openDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial.geodataset.Idataset openDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	native private boolean deleteDataset_EVString(long pNativeObject, String name);
	/**
	 * 删除指定数据集名称的物理文件
	 * @param name 指定名称
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean deleteDataset(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean deleteDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean deleteDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  boolean deleteDatasetInfo_EVString_callback(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		boolean returnValue = deleteDatasetInfo(datasetNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteDatasetInfo_EVString(long pNativeObject, String datasetName);
	/**
	 * 删除数据集元数据信息
	 * @param info 元数据信息
	 * @return ev_bool
	 */
	public boolean deleteDatasetInfo(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		boolean returnValue = deleteDatasetInfo_EVString(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}
	native private boolean deleteDatasetInfo_EVString_NoVirtual(long pNativeObject, String datasetName);
	protected boolean deleteDatasetInfo_NoVirtual(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		boolean returnValue = deleteDatasetInfo_EVString_NoVirtual(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}

	native private boolean closeDataset_IDataset(long pNativeObject, long dataset);
	/**
	 * 关闭指定数据集名称的数据集，会删掉数据集指针
	 * @param name 数据集指针
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean closeDataset(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}
	native private boolean closeDataset_IDataset_NoVirtual(long pNativeObject, long dataset);
	protected boolean closeDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset_NoVirtual(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}

	native private boolean isDatasetValid_EVString(long pNativeObject, String datasetName);
	public boolean isDatasetValid(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		boolean returnValue = isDatasetValid_EVString(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}
	protected  long getDatabase_void_callback()
	{
		com.earthview.world.core.database.SqlDatabase returnValue = getDatabase();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDatabase_void(long pNativeObject);
	/**
	 * 获取数据库句柄
	 * @param  
	 * @return EarthView::World::Core::Database::CSqlDatabase，数据库句柄
	 */
	public com.earthview.world.core.database.SqlDatabase getDatabase()
	{
		long returnValue = getDatabase_void(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDatabase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private long getDatabase_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.database.SqlDatabase getDatabase_NoVirtual()
	{
		long returnValue = getDatabase_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDatabase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}

	public VectorOctreeDataSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorOctreeDataSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 判断数据源是否有效
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 创建FeatureClass数据集
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureClass的指针
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass createFeatureClass(String name, com.earthview.world.spatial.geodataset.Igeometryfield geofield, com.earthview.world.spatial.geodataset.Ifields fields)
	{
		return super.createFeatureClass_NoVirtual(name, geofield, fields);
	}
	/**
	 * 序列化字符串
	 * @param  
	 * @param  
	 */
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	/**
	 * 深度拷贝
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	
	native protected void register_createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_deleteDatasetInfo_EVString(long pNativeObject, String method);
	native protected void register_getDatabase_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getPropertySet_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_getDatasetInfo_EVString(long pNativeObject, String method);
	native protected void register_getDatasetInfos_EVDatasetType(long pNativeObject, String method);
	native protected void register_createFeatureClass_EVString_IGeometryField_IFields(long pNativeObject, String method);
	native protected void register_openDataset_EVString(long pNativeObject, String method);
	native protected void register_deleteDataset_EVString(long pNativeObject, String method);
	native protected void register_closeDataset_IDataset(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr(this.nativeObject.pointer, "createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback");
			this.register_deleteDatasetInfo_EVString(this.nativeObject.pointer, "deleteDatasetInfo_EVString_callback");
			this.register_getDatabase_void(this.nativeObject.pointer, "getDatabase_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getPropertySet_void(this.nativeObject.pointer, "getPropertySet_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_getDatasetInfo_EVString(this.nativeObject.pointer, "getDatasetInfo_EVString_callback");
			this.register_getDatasetInfos_EVDatasetType(this.nativeObject.pointer, "getDatasetInfos_EVDatasetType_callback");
			this.register_createFeatureClass_EVString_IGeometryField_IFields(this.nativeObject.pointer, "createFeatureClass_EVString_IGeometryField_IFields_callback");
			this.register_openDataset_EVString(this.nativeObject.pointer, "openDataset_EVString_callback");
			this.register_deleteDataset_EVString(this.nativeObject.pointer, "deleteDataset_EVString_callback");
			this.register_closeDataset_IDataset(this.nativeObject.pointer, "closeDataset_IDataset_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static VectorOctreeDataSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorOctreeDataSource obj = null;
 		if(baseObj instanceof VectorOctreeDataSource)
		{
			obj = (VectorOctreeDataSource)baseObj;
		} else {
			obj = new VectorOctreeDataSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorOctreeDataSource");
			obj.increaseCast();
		}

		return obj;
	}
}
