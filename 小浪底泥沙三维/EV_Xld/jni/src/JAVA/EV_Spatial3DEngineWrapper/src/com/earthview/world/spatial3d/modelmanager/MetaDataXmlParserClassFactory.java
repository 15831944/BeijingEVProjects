package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MetaDataXmlParserClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MetaDataXmlParser emptyInstance = new MetaDataXmlParser(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
