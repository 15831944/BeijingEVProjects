package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelCacheUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelCacheUtility emptyInstance = new ModelCacheUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
