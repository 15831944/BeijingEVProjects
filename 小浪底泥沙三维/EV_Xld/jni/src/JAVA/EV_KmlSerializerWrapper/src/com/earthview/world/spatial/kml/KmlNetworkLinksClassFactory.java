package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlNetworkLinksClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlNetworkLinks emptyInstance = new KmlNetworkLinks(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
