package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectObject emptyInstance = new EffectObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
