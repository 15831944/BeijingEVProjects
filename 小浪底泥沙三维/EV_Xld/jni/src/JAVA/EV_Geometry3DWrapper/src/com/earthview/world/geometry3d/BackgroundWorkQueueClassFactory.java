package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BackgroundWorkQueueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BackgroundWorkQueue emptyInstance = new BackgroundWorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
