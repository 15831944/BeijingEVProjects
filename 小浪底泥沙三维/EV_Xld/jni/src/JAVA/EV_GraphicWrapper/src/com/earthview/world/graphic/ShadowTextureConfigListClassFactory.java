package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowTextureConfigListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadowTextureConfigList emptyInstance = new ShadowTextureConfigList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
