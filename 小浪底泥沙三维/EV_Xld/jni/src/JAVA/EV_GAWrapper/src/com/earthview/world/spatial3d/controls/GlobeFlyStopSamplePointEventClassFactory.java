package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyStopSamplePointEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyStopSamplePointEvent emptyInstance = new GlobeFlyStopSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
