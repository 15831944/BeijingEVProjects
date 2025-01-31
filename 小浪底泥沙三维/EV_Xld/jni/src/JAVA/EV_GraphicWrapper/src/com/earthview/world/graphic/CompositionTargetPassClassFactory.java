package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositionTargetPassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositionTargetPass emptyInstance = new CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
