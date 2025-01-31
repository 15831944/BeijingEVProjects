package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.utilities.*;
import com.earthview.world.core.*;

public class DataSourceURLStructClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceURLStruct emptyInstance = new DataSourceURLStruct(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
