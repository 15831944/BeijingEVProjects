﻿#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_COFING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_COFING_H

//#ifndef EV_BULID_DLL
//#define EV_BULID_DLL
//#endif

//#ifdef EV_BULID_DLL
//#define EV_BUILD_SPATIAL_OBJECT
//#endif
#ifdef EV_GEOMETRY_DLL
#undef EV_GEOMETRY_DLL
#endif

#ifdef EV_BUILD_SPATIAL_OBJECT 
#define EV_GEOMETRY_DLL EV_DLL_EXPORT
#define EV_SPATIALREFERENCE_DLL EV_DLL_EXPORT
#else
#define EV_GEOMETRY_DLL EV_DLL_IMPORT
#define EV_SPATIALREFERENCE_DLL EV_DLL_IMPORT
#endif

#include "core/core_api.h"
// using namespace EarthView::World::Core;

#endif