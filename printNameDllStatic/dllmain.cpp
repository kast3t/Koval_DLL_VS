// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include "Header.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void __stdcall printName(char *buff) {
    char fio[]{ "Коваль Константин Александрович" };
    strncpy_s(buff, 32, fio, 32);
}