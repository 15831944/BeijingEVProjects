package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositionPassStencilTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositionPassStencilTranslator emptyInstance = new CompositionPassStencilTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
