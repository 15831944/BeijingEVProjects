package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiPolyline3DExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiPolyline3DExtension emptyInstance = new MultiPolyline3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
