package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BaseBandingObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BaseBandingObject emptyInstance = new BaseBandingObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
