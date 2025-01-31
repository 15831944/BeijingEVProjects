package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BezierCurveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BezierCurve emptyInstance = new BezierCurve(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
