package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubLabelElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubLabelElement emptyInstance = new SubLabelElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
