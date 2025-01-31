package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StreamSerialiserClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StreamSerialiser emptyInstance = new StreamSerialiser(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
