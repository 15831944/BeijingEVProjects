package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasurePointParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasurePointParam emptyInstance = new Analysis3DMeasurePointParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
