package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnoLayer emptyInstance = new AnnoLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
