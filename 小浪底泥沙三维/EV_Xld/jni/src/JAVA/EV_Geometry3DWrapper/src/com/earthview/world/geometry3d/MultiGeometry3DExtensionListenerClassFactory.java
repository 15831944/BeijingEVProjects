package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiGeometry3DExtensionListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiGeometry3DExtensionListener emptyInstance = new MultiGeometry3DExtensionListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
