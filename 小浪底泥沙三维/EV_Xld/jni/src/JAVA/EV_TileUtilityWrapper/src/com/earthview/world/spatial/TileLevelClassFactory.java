package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileLevelClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileLevel emptyInstance = new TileLevel(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
