package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfileannolayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfileannolayerfactory emptyInstance = new Ivectorfileannolayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
