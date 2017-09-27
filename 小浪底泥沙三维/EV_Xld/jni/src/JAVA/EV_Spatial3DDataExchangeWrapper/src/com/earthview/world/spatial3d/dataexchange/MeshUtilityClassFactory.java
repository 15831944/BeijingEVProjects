package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshUtility emptyInstance = new MeshUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
