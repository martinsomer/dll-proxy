#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "dllproxy.h"

void DLLP_OnAttach(void) {
    MessageBoxW(NULL, L"DLL_PROCESS_ATTACH", L"Proxy", MB_OK);
}

void DLLP_OnDetach(void) {
    MessageBoxW(NULL, L"DLL_PROCESS_DETACH", L"Proxy", MB_OK);
}
