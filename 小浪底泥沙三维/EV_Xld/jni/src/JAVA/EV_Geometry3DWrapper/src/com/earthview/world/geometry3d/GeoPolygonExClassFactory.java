package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoPolygonExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoPolygonEx emptyInstance = new GeoPolygonEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
