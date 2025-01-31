package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderQueueInvocationSequenceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderQueueInvocationSequence emptyInstance = new RenderQueueInvocationSequence(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
