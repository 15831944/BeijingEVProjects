package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFeatureListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFeatureList emptyInstance = new KmlFeatureList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
