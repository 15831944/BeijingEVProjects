﻿#ifndef EARTHVIEW_WORLD_SPATIAL_SPATIALSERVERCLIENTEXPORTS_H
#define EARTHVIEW_WORLD_SPATIAL_SPATIALSERVERCLIENTEXPORTS_H

#ifdef EV_BUILD_SPATIALSERVERCLIENT
#define EV_SPATIALSERVERCLIENT_DLL EV_DLL_EXPORT
#else
#define EV_SPATIALSERVERCLIENT_DLL EV_DLL_IMPORT
#endif

#include "core/core_api.h"
#endif


