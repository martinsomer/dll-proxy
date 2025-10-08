#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "version.h"

void on_attach(void) {
    MessageBoxW(NULL, L"DLL_PROCESS_ATTACH", L"Proxy", MB_OK);
}

void on_detach(void) {
    MessageBoxW(NULL, L"DLL_PROCESS_DETACH", L"Proxy", MB_OK);
}
