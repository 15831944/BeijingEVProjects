package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfpfogClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffpfog emptyInstance = new Ffpfog(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
