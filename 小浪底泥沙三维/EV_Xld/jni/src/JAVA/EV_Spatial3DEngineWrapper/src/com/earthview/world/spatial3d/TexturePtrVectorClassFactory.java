package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TexturePtrVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TexturePtrVector emptyInstance = new TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
