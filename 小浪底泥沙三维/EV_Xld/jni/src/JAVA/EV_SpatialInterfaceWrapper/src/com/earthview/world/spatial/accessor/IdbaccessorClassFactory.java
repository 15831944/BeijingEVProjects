package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdbaccessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idbaccessor emptyInstance = new Idbaccessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
