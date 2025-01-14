package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceGeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceGeometry emptyInstance = new ResourceGeometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
