package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureGroupLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureGroupLayerFactory emptyInstance = new FeatureGroupLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
