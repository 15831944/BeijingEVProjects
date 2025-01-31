package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebDataSourceCacheManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebDataSourceCacheManager emptyInstance = new WebDataSourceCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
