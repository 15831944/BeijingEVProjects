package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Smart3DDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Smart3DDataSource emptyInstance = new Smart3DDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
