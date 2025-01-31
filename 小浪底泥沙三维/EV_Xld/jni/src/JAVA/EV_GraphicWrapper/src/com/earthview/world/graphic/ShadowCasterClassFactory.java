package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowCasterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadowCaster emptyInstance = new ShadowCaster(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
