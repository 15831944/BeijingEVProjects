package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PropertySetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PropertySet emptyInstance = new PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
