package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LiSPSMShadowCameraSetupClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LiSPSMShadowCameraSetup emptyInstance = new LiSPSMShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
