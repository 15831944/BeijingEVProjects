package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteAnalystClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RouteAnalyst emptyInstance = new RouteAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
