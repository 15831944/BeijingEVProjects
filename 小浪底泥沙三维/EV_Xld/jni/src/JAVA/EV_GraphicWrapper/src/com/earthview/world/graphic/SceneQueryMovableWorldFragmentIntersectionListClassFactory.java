package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryMovableWorldFragmentIntersectionListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryMovableWorldFragmentIntersectionList emptyInstance = new SceneQueryMovableWorldFragmentIntersectionList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
