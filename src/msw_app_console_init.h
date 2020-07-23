#pragma once

#if PLATFORM_MSW
#include <Windows.h>

void msw_AllowUglyConsole(bool enable);
void msw_InitAppForConsole(const char* app_name);
void msw_WriteFullDump(EXCEPTION_POINTERS* pep, const char* dumpname);
void msw_set_abort_message(bool onoff);
void msw_set_abort_crashdump(bool onoff);
void msw_AllocUglyConsole();

#endif
