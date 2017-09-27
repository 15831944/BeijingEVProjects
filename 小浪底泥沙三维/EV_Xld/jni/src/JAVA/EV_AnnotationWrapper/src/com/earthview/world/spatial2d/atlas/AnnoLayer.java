package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoLayer extends com.earthview.world.spatial.atlas.Ivectorlayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CAnnoLayer", new AnnoLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCAnnoLayerProxy", new AnnoLayerClassFactory());
	}

	native private int getType_void(long pNativeObject);
	/**
	 * ��ȡͼ������
	 * @param  
	 * @return ͼ������
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
	 * ��ȡ��ͼ�������������ݼ�
	 * @param  
	 * @return ���ݼ�
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

	native private String getDatasetName_void(long pNativeObject);
	/**
	 * ��ȡ���ݼ�������
	 * @param  
	 */
	public String getDatasetName()
	{
		String returnValue = getDatasetName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDatasetName_void_NoVirtual(long pNativeObject);
	protected String getDatasetName_NoVirtual()
	{
		String returnValue = getDatasetName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDataSource_void(long pNativeObject);
	/**
	 * ��ȡ���ݼ����ڵ�����Դ
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource()
	{
		long returnValue = getDataSource_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long getDataSource_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource getDataSource_NoVirtual()
	{
		long returnValue = getDataSource_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private void select_IQueryFilter_EVSelectionResultType(long pNativeObject, long filter, int type);
	/**
	 * ͼ��ѡ��
	 * @param filter ѡ���������
	 * @param type ѡ������
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}
	native private void select_IQueryFilter_EVSelectionResultType_NoVirtual(long pNativeObject, long filter, int type);
	protected void select_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		int typeParamValue = type.getValue();
		select_IQueryFilter_EVSelectionResultType_NoVirtual(this.nativeObject.pointer, filterParamValue, typeParamValue);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * ���ͼ��ѡ��
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setLayerSelection_ILayerSelection(long pNativeObject, long selection);
	/**
	 * ����ͼ���ѡ��
	 * @param selection ͼ���ѡ��
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		long selectionParamValue = (selection == null ? 0L : selection.nativeObject.pointer);
		setLayerSelection_ILayerSelection(this.nativeObject.pointer, selectionParamValue);
	}
	native private void setLayerSelection_ILayerSelection_NoVirtual(long pNativeObject, long selection);
	protected void setLayerSelection_NoVirtual(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		long selectionParamValue = (selection == null ? 0L : selection.nativeObject.pointer);
		setLayerSelection_ILayerSelection_NoVirtual(this.nativeObject.pointer, selectionParamValue);
	}

	native private long getLayerSelection_void(long pNativeObject);
	/**
	 * ��ȡͼ��ѡ��
	 * @param  
	 * @return ͼ��ѡ��
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		long returnValue = getLayerSelection_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}
	native private long getLayerSelection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection_NoVirtual()
	{
		long returnValue = getLayerSelection_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * ��ȡͼ�������
	 * @param  
	 * @return ͼ������
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

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * ����ͼ�������
	 * @param name ͼ������
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * ��ȡͼ���������Ϣ
	 * @param  
	 * @return ������Ϣ
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDescription_EVString(long pNativeObject, String value);
	/**
	 * ����ͼ���������Ϣ
	 * @param value ������Ϣ
	 */
	public void setDescription(String value)
	{
		String valueParamValue = value;
		setDescription_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String value);
	protected void setDescription_NoVirtual(String value)
	{
		String valueParamValue = value;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * ���ͼ��ͼ���Ƿ���Ա༭
	 * @param  
	 * @return ���ͼ����Ա༭,�򷵻�true,��֮���
	 */
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setCanEdit_ev_bool(long pNativeObject, boolean can);
	/**
	 * ����ͼ���Ƿ����֧�ֱ༭
	 * @param can ���Ϊtrue,��ͼ����Ա༭,��֮���
	 */
	public void setCanEdit(boolean can)
	{
		boolean canParamValue = can;
		setCanEdit_ev_bool(this.nativeObject.pointer, canParamValue);
	}
	native private void setCanEdit_ev_bool_NoVirtual(long pNativeObject, boolean can);
	protected void setCanEdit_NoVirtual(boolean can)
	{
		boolean canParamValue = can;
		setCanEdit_ev_bool_NoVirtual(this.nativeObject.pointer, canParamValue);
	}

	native private boolean isEditing_void(long pNativeObject);
	/**
	 * ���ͼ���Ƿ����ڱ��༭
	 * @param  
	 * @return ���ͼ�����ڱ༭�򷵻�true,��֮���
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setEditing_ev_bool(long pNativeObject, boolean editing);
	/**
	 * ����ͼ���Ƿ����ڱ༭
	 * @param editing ���Ϊtrue,������ͼ�����ڱ༭,��֮���
	 */
	public void setEditing(boolean editing)
	{
		boolean editingParamValue = editing;
		setEditing_ev_bool(this.nativeObject.pointer, editingParamValue);
	}
	native private void setEditing_ev_bool_NoVirtual(long pNativeObject, boolean editing);
	protected void setEditing_NoVirtual(boolean editing)
	{
		boolean editingParamValue = editing;
		setEditing_ev_bool_NoVirtual(this.nativeObject.pointer, editingParamValue);
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * ���ͼ���Ƿ����
	 * @param  
	 * @return ���ͼ������򷵻�true,��֮���
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * ����ͼ���Ƿ����
	 * @param visible ���Ϊtrue,��ͼ�����,��֮���
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * ���ͼ���Ƿ���Ч
	 * @param  
	 * @return �����Ч�򷵻�true,��֮���
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

	native private boolean isSelectable_void(long pNativeObject);
	/**
	 * �ж�ͼ���Ƿ�֧��ѡ��
	 * @param  
	 */
	public boolean isSelectable()
	{
		boolean returnValue = isSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectable_void_NoVirtual(long pNativeObject);
	protected boolean isSelectable_NoVirtual()
	{
		boolean returnValue = isSelectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	/**
	 * ����ͼ���Ƿ�֧��ѡ��
	 * @param selectable �Ƿ��ѡ
	 */
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selectable);
	protected void setSelectable_NoVirtual(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectableParamValue);
	}

	native private boolean ignoreScale_void(long pNativeObject);
	/**
	 * ���ͼ�����ʱ�Ƿ���Ա����ߵ�����
	 * @param  
	 * @return �������,�򷵻�true,��֮���
	 */
	public boolean ignoreScale()
	{
		boolean returnValue = ignoreScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean ignoreScale_void_NoVirtual(long pNativeObject);
	protected boolean ignoreScale_NoVirtual()
	{
		boolean returnValue = ignoreScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setIgnoreScale_ev_bool(long pNativeObject, boolean bIgnore);
	/**
	 * ����ͼ��Ļ����Ƿ���Ա����ߵ�����
	 * @param bIgnore �Ƿ����
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		boolean bIgnoreParamValue = bIgnore;
		setIgnoreScale_ev_bool(this.nativeObject.pointer, bIgnoreParamValue);
	}
	native private void setIgnoreScale_ev_bool_NoVirtual(long pNativeObject, boolean bIgnore);
	protected void setIgnoreScale_NoVirtual(boolean bIgnore)
	{
		boolean bIgnoreParamValue = bIgnore;
		setIgnoreScale_ev_bool_NoVirtual(this.nativeObject.pointer, bIgnoreParamValue);
	}

	native private double getDisplayMaxScale_void(long pNativeObject);
	/**
	 * ��ȡ�����ʾ������
	 * @param  
	 * @return ������
	 */
	public double getDisplayMaxScale()
	{
		double returnValue = getDisplayMaxScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDisplayMaxScale_void_NoVirtual(long pNativeObject);
	protected double getDisplayMaxScale_NoVirtual()
	{
		double returnValue = getDisplayMaxScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDisplayMaxScale_ev_real64(long pNativeObject, double scale);
	/**
	 * ���������ʾ������
	 * @param scale ������
	 */
	public void setDisplayMaxScale(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMaxScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setDisplayMaxScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setDisplayMaxScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMaxScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	native private double getDisplayMinScale_void(long pNativeObject);
	/**
	 * ��ȡ��С��ʾ������
	 * @param  
	 * @return ������
	 */
	public double getDisplayMinScale()
	{
		double returnValue = getDisplayMinScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDisplayMinScale_void_NoVirtual(long pNativeObject);
	protected double getDisplayMinScale_NoVirtual()
	{
		double returnValue = getDisplayMinScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDisplayMinScale_ev_real64(long pNativeObject, double scale);
	/**
	 * ������С��ʾ������
	 * @param scale ������
	 */
	public void setDisplayMinScale(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMinScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setDisplayMinScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setDisplayMinScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setDisplayMinScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * ��ȡͼ�������ϵͳ
	 * @param  
	 * @return ����ϵͳ
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long ref_sr);
	/**
	 * ����ͼ�������ϵͳ
	 * @param sr ����ϵͳ
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, ref_srParamValue);
	}
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long ref_sr);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, ref_srParamValue);
	}

	native private void setTransparentValue_ev_uint8(long pNativeObject, short transparent);
	/**
	 * ����ͼ���͸����
	 * @param transparent ͸��ֵ
	 */
	public void setTransparentValue(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparentValue_ev_uint8(this.nativeObject.pointer, transparentParamValue);
	}
	native private void setTransparentValue_ev_uint8_NoVirtual(long pNativeObject, short transparent);
	protected void setTransparentValue_NoVirtual(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparentValue_ev_uint8_NoVirtual(this.nativeObject.pointer, transparentParamValue);
	}

	native private short getTransparentValue_void(long pNativeObject);
	/**
	 * ��ȡͼ���͸��ֵ
	 * @param  
	 * @return ͸��ֵ
	 */
	public short getTransparentValue()
	{
		short returnValue = getTransparentValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getTransparentValue_void_NoVirtual(long pNativeObject);
	protected short getTransparentValue_NoVirtual()
	{
		short returnValue = getTransparentValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getExtent_void(long pNativeObject);
	/**
	 * ��ȡͼ��ķ�Χ
	 * @param  
	 * @return ͼ�㷶Χ
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		long returnValue = getExtent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getExtent_NoVirtual()
	{
		long returnValue = getExtent_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private boolean draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, long display, int type);
	/**
	 * ����ͼ��
	 * @param display �ռ���ʾ����
	 * @param type ��������
	 */
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int typeParamValue = type.getValue();
		boolean returnValue = draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, displayParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean draw_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(long pNativeObject, long display, int type);
	protected boolean draw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int typeParamValue = type.getValue();
		boolean returnValue = draw_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(this.nativeObject.pointer, displayParamValue, typeParamValue);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * ͼ��ĸ���,�ڴ��ⲿ�ͷ�
	 * @param sr �ο�����ϵ
	 * @return ͼ��
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	native private void setDataset_IDataset(long pNativeObject, long dataset);
	public void setDataset(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		setDataset_IDataset(this.nativeObject.pointer, datasetParamValue);
	}
	native private void setDataset_IDataset_NoVirtual(long pNativeObject, long dataset);
	protected void setDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		setDataset_IDataset_NoVirtual(this.nativeObject.pointer, datasetParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * ��ͼ�����Ϣ���浽����
	 * @param steam ������
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * ��xml�лָ�ͼ�������
	 * @param element xmlҪ��
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * ��ͼ�����Ϣ������xml��
	 * @param  
	 * @return xmlҪ��
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	native private void setDisplayFilter_EVString(long pNativeObject, String filter);
	/**
	 * ����ͼ����ʾ��������
	 * @param filter ��������
	 */
	public void setDisplayFilter(String filter)
	{
		String filterParamValue = filter;
		setDisplayFilter_EVString(this.nativeObject.pointer, filterParamValue);
	}
	native private void setDisplayFilter_EVString_NoVirtual(long pNativeObject, String filter);
	protected void setDisplayFilter_NoVirtual(String filter)
	{
		String filterParamValue = filter;
		setDisplayFilter_EVString_NoVirtual(this.nativeObject.pointer, filterParamValue);
	}

	native private String getDisplayFilter_void(long pNativeObject);
	/**
	 * ��ȡͼ����ʾ��������
	 * @param  
	 * @return ���ع�������
	 */
	public String getDisplayFilter()
	{
		String returnValue = getDisplayFilter_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDisplayFilter_void_NoVirtual(long pNativeObject);
	protected String getDisplayFilter_NoVirtual()
	{
		String returnValue = getDisplayFilter_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public AnnoLayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAnnoLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.atlas.AnnoLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public AnnoLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnnoLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取显示字段名
	 * @param  
	 * @return 返回字段名
	 */
	public String getDisplayField()
	{
		return super.getDisplayField_NoVirtual();
	}
	/**
	 * 设置显示字段
	 * @param fieldName 显示字段
	 */
	public void setDisplayField(String fieldName)
	{
		super.setDisplayField_NoVirtual(fieldName);
	}
	/**
	 * 获取专题图信息
	 * @param  
	 * @return 返回专题图信息
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme()
	{
		return super.getTheme_NoVirtual();
	}
	/**
	 * 设置专题图信息
	 * @param theme 专题图信息
	 */
	public void setTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		super.setTheme_NoVirtual(theme);
	}
	/**
	 * 获取是否显示提示
	 * @param  
	 */
	public boolean isShowTip()
	{
		return super.isShowTip_NoVirtual();
	}
	/**
	 * 设置是否显示提示
	 * @param show 是否显示
	 */
	public void setShowTip(boolean show)
	{
		super.setShowTip_NoVirtual(show);
	}
	/**
	 * 获取图层标签属性
	 * @param  
	 * @return 图层标签属性
	 */
	public com.earthview.world.spatial.display.Ilabelproperty getLayerLabelProperty()
	{
		return super.getLayerLabelProperty_NoVirtual();
	}
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	
	native protected void register_setDataset_IDataset(long pNativeObject, String method);
	native protected void register_getDisplayField_void(long pNativeObject, String method);
	native protected void register_setDisplayField_EVString(long pNativeObject, String method);
	native protected void register_getTheme_void(long pNativeObject, String method);
	native protected void register_setTheme_ITheme(long pNativeObject, String method);
	native protected void register_isShowTip_void(long pNativeObject, String method);
	native protected void register_setShowTip_ev_bool(long pNativeObject, String method);
	native protected void register_getLayerLabelProperty_void(long pNativeObject, String method);
	native protected void register_setDisplayFilter_EVString(long pNativeObject, String method);
	native protected void register_getDisplayFilter_void(long pNativeObject, String method);
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
			this.register_setDataset_IDataset(this.nativeObject.pointer, "setDataset_IDataset_callback");
			this.register_getDisplayField_void(this.nativeObject.pointer, "getDisplayField_void_callback");
			this.register_setDisplayField_EVString(this.nativeObject.pointer, "setDisplayField_EVString_callback");
			this.register_getTheme_void(this.nativeObject.pointer, "getTheme_void_callback");
			this.register_setTheme_ITheme(this.nativeObject.pointer, "setTheme_ITheme_callback");
			this.register_isShowTip_void(this.nativeObject.pointer, "isShowTip_void_callback");
			this.register_setShowTip_ev_bool(this.nativeObject.pointer, "setShowTip_ev_bool_callback");
			this.register_getLayerLabelProperty_void(this.nativeObject.pointer, "getLayerLabelProperty_void_callback");
			this.register_setDisplayFilter_EVString(this.nativeObject.pointer, "setDisplayFilter_EVString_callback");
			this.register_getDisplayFilter_void(this.nativeObject.pointer, "getDisplayFilter_void_callback");
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
	
	public static AnnoLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnnoLayer obj = null;
 		if(baseObj instanceof AnnoLayer)
		{
			obj = (AnnoLayer)baseObj;
		} else {
			obj = new AnnoLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnnoLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
