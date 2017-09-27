package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RegionAtmosphereClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RegionAtmosphere emptyInstance = new RegionAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
