package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkeletonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Skeleton emptyInstance = new Skeleton(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
