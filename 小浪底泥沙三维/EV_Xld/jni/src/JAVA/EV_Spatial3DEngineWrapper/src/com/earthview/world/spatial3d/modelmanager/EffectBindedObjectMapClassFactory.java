package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectBindedObjectMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectBindedObjectMap emptyInstance = new EffectBindedObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
