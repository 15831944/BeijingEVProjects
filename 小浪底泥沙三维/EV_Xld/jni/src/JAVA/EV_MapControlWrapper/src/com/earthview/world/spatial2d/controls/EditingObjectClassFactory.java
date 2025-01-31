package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

public class EditingObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EditingObject emptyInstance = new EditingObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
