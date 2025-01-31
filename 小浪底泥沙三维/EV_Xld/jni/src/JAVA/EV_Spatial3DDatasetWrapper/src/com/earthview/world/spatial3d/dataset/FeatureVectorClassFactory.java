package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureVector emptyInstance = new FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
