package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleTextSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleTextSymbol emptyInstance = new SimpleTextSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
