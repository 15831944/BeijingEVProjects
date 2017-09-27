package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///˼·����һ��LineString�ֽ�ɶ��������Ҹ��ݱ����߷�Ϊ���ɸ��ȼ���ÿ��LineString����һ��
///��ӵ�ʱ����ͬ�ȼ����ݵ�ǰ����ǰһ������ز��ж��Ƿ���Ҫ��Ӽ�ˢ�µ�ͼ
///���һ���㣬ÿ���ȼ��µ�Linestring�鶼��Ҫ�ж��Ƿ���Ҫ��Ӵ˵�
///��ͼ����ǰ��ѡ������Ļ��Χ�н����ĵ�ǰ�����µ�����linestring��ӵ�������
///������Ҫ����ʵ��Ӧ��������Լ�ʵ����ʾЧ�����е�������ǰ�����ڹ���Ч���в������룬�������ӵȼ�������Ȩ�أ����߲�����������
///�����������ø�������ŵĽӿ�
public class LinestringTrackingItemWrapper extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("CLinestringTrackingItemWrapper", new LinestringTrackingItemWrapperClassFactory());
	}

	/**
	 * Ĭ�Ϲ��캯��
	 */
	public LinestringTrackingItemWrapper(com.earthview.world.spatial2d.controls.MapControl ref_mapcontrol) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mapcontrolPtr = new BasePointer(ref_mapcontrol);
		list.add("ref_mapcontrol", ref_mapcontrolPtr.get());
		Create("CLinestringTrackingItemWrapper", list);
	}

	/**
	 * ���캯��Ĭ��ֵ��pointCountPerLine(100)ÿ����������levelCount(10)������tolerance(5)�߶λ����ݲ���أ��ڲ����㣩��Խ���ʾ��������Խ��ʹ�ô˹��캯�����������
	 */
	public LinestringTrackingItemWrapper(com.earthview.world.spatial2d.controls.MapControl ref_mapcontrol, int pointCountPerLine, int levelCount, int tolerance) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mapcontrolPtr = new BasePointer(ref_mapcontrol);
		list.add("ref_mapcontrol", ref_mapcontrolPtr.get());
		BasePointer pointCountPerLinePtr = new BasePointer(pointCountPerLine);
		list.add("pointCountPerLine", pointCountPerLinePtr.get());
		BasePointer levelCountPtr = new BasePointer(levelCount);
		list.add("levelCount", levelCountPtr.get());
		BasePointer tolerancePtr = new BasePointer(tolerance);
		list.add("tolerance", tolerancePtr.get());
		Create("CLinestringTrackingItemWrapper", list);
	}

	native private void setLevelScale_ev_int32_ev_real64(long pNativeObject, int level, double scale);
	/**
	 * ����ÿ���������С������,level��0��ʼ
	 */
	public void setLevelScale(int level, double scale)
	{
		int levelParamValue = level;
		double scaleParamValue = scale;
		setLevelScale_ev_int32_ev_real64(this.nativeObject.pointer, levelParamValue, scaleParamValue);
	}
	native private void setSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * ���÷���
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void addPoint_CPoint(long pNativeObject, long point);
	/**
	 * ��ӵ㣬ͨ�������ж��Ƿ���ӡ������жϻ��ƿ��޸�
	 */
	public void addPoint(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		addPoint_CPoint(this.nativeObject.pointer, pointParamValue);
	}
	native private void refresh_void(long pNativeObject);
	/**
	 * ˢ�£��˺������ڵ�ͼˢ��ǰ�����ã���ѡ������Ļ��Χ�н����ĵ�ǰ�����µ�����linestring��ӵ�������
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	public LinestringTrackingItemWrapper(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LinestringTrackingItemWrapper(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LinestringTrackingItemWrapper fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LinestringTrackingItemWrapper obj = null;
 		if(baseObj instanceof LinestringTrackingItemWrapper)
		{
			obj = (LinestringTrackingItemWrapper)baseObj;
		} else {
			obj = new LinestringTrackingItemWrapper(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLinestringTrackingItemWrapper");
			obj.increaseCast();
		}

		return obj;
	}
}
