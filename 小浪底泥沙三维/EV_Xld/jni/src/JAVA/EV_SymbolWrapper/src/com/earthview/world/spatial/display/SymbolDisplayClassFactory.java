package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SymbolDisplayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SymbolDisplay emptyInstance = new SymbolDisplay(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
