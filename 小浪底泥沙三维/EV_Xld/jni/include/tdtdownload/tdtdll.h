#ifndef tdtdownload_tdtdll_h_H
#define tdtdownload_tdtdll_h_H
#include "core/global.h"
#include "core/ev_logger.h"

//��̬�⵼�������
#ifdef EV_BUILD_TDT_DOWNLOAD
#define EV_TDT_DOWNLOAD_DLL EV_DLL_EXPORT
#else
#define EV_TDT_DOWNLOAD_DLL EV_DLL_IMPORT
#endif

#endif