package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ����ģ��Shape�ļ��Ĺ�����
 */
public class ParseShapeFile extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CParseShapeFile", new ParseShapeFileClassFactory());
	}

	public ParseShapeFile() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CParseShapeFile", null);
	}

	native private boolean open_EVString(long pNativeObject, String filename);
	/**
	 * ��Shape�ļ�
	 * @param filename Shape�ļ���
	 * @return �ɹ�����true�����򷵻�false
	 */
	public boolean open(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = open_EVString(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}
	native private static boolean readFields_EVString_ShapeFieldsList(String file, long fields);
	/**
	 * ��ȡShape�ļ��е��ֶ�
	 * @param file Shape�ļ���������·��
	 * @param fields �ֶμ���
	 * @return �ɹ�����true�����򷵻�false
	 */
	public static boolean readFields(String file, com.earthview.world.spatial3d.dataexchange.ShapeFieldsList fields)
	{
		String fileParamValue = file;
		long fieldsParamValue = fields.nativeObject.pointer;
		boolean returnValue = readFields_EVString_ShapeFieldsList(fileParamValue, fieldsParamValue);
		return returnValue;
	}
	native private static int readSrsID_EVString(String file);
	/**
	 * ��ȡShape�ļ��е�����ϵ
	 * @param file Shape�ļ���������·��
	 * @param fields �ֶμ���
	 * @return �ɹ���������ϵ���룬���򷵻�0
	 */
	public static int readSrsID(String file)
	{
		String fileParamValue = file;
		int returnValue = readSrsID_EVString(fileParamValue);
		return returnValue;
	}
	native private int readShapeData_EVString_CShapeAssignedFields_EntityMetaDataList(long pNativeObject, String modelFilePath, long assignedValue, long meshEntitis);
	/**
	 * ��ȡShape�ļ��е�mesh��Ϣ
	 * @param modelFilePath shape�ļ��е�mesh��Ӧ���ļ�·��
	 * @param meshEntitis mesh����
	 * @return �ɹ�����true�����򷵻�false
	 */
	public int readShapeData(String modelFilePath, com.earthview.world.spatial3d.dataexchange.ShapeAssignedFields assignedValue, com.earthview.world.spatial3d.dataexchange.EntityMetaDataList meshEntitis)
	{
		String modelFilePathParamValue = modelFilePath;
		long assignedValueParamValue = assignedValue.nativeObject.pointer;
		long meshEntitisParamValue = meshEntitis.nativeObject.pointer;
		int returnValue = readShapeData_EVString_CShapeAssignedFields_EntityMetaDataList(this.nativeObject.pointer, modelFilePathParamValue, assignedValueParamValue, meshEntitisParamValue);
		return returnValue;
	}
	public ParseShapeFile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParseShapeFile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParseShapeFile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParseShapeFile obj = null;
 		if(baseObj instanceof ParseShapeFile)
		{
			obj = (ParseShapeFile)baseObj;
		} else {
			obj = new ParseShapeFile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParseShapeFile");
			obj.increaseCast();
		}

		return obj;
	}
}
