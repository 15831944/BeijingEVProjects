﻿#ifndef EARTHVIEW_WORLD_SPATIAL_PAINTDEVICEEXPORTS_H
#define EARTHVIEW_WORLD_SPATIAL_PAINTDEVICEEXPORTS_H

#ifdef EV_BULID_SPATIALDISPLAY
#define EV_SPATIALDISPLAY_DLL EV_DLL_EXPORT
#else
#define EV_SPATIALDISPLAY_DLL EV_DLL_IMPORT
#endif

#ifdef _WIN32
#ifndef EV_CC_MSVC
#define EV_CC_MSVC
#endif
#endif

#include "core/core_api.h"
#endif
