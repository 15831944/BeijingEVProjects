package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DepthAccessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DepthAccessor emptyInstance = new DepthAccessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
