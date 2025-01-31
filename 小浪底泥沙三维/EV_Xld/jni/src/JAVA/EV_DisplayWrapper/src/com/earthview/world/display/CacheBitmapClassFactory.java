package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheBitmapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CacheBitmap emptyInstance = new CacheBitmap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
