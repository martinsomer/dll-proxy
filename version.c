#include "version.h"
#include <windows.h>

void on_attach(void) {
    MessageBoxW(NULL, L"DLL_PROCESS_ATTACH", L"Proxy", MB_OK);
}

void on_detach(void) {
    MessageBoxW(NULL, L"DLL_PROCESS_DETACH", L"Proxy", MB_OK);
}
