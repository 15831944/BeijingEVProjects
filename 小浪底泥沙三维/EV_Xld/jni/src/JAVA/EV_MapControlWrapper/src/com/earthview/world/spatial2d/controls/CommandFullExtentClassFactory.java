package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandFullExtentClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandFullExtent emptyInstance = new CommandFullExtent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
