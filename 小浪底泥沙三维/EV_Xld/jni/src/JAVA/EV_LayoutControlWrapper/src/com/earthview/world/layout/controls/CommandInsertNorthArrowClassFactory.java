package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.atlas.*;
import com.earthview.world.core.*;

public class CommandInsertNorthArrowClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandInsertNorthArrow emptyInstance = new CommandInsertNorthArrow(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
