package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwfslayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwfslayerfactory emptyInstance = new Evwfslayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
