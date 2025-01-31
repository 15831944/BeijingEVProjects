package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Point2DFClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Point2DF emptyInstance = new Point2DF(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
