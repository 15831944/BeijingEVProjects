package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorOctreeDataSource emptyInstance = new VectorOctreeDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
