package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterBandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterBand emptyInstance = new RasterBand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
