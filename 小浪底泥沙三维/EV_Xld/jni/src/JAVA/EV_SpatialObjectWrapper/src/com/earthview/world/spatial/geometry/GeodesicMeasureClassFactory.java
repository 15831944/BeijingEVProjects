package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeodesicMeasureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeodesicMeasure emptyInstance = new GeodesicMeasure(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
