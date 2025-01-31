package com.earthview.world.spatial2d.geocorretion;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResamplerOpratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResamplerOprator emptyInstance = new ResamplerOprator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
