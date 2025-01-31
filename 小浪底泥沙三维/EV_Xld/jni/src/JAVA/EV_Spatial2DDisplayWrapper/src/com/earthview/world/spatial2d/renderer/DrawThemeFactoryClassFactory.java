package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawThemeFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawThemeFactory emptyInstance = new DrawThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
