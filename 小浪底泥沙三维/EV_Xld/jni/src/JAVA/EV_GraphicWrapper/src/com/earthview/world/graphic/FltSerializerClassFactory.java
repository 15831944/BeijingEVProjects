package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FltSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FltSerializer emptyInstance = new FltSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
