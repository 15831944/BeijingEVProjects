package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainShadeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainShade emptyInstance = new TerrainShade(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
