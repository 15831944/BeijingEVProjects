package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItileattachmentClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itileattachment emptyInstance = new Itileattachment(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
