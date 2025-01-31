package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DeletePartCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DeletePartCommand emptyInstance = new DeletePartCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
