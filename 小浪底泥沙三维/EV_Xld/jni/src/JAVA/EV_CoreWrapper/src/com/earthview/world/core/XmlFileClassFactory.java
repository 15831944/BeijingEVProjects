package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class XmlFileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		XmlFile emptyInstance = new XmlFile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
