package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderToVertexBufferSharedPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderToVertexBufferSharedPtr emptyInstance = new RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
