package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AxisAlignedBoxSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AxisAlignedBoxSceneQuery emptyInstance = new AxisAlignedBoxSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
