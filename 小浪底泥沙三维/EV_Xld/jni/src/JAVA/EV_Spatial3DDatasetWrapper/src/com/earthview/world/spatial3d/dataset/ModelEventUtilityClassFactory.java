package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEventUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelEventUtility emptyInstance = new ModelEventUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
