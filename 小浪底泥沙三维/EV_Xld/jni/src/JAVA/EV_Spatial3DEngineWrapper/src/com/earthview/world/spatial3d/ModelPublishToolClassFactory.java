package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelPublishToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelPublishTool emptyInstance = new ModelPublishTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
