#include <stdio.h>
#include <Windows.h>

typedef void(_stdcall* ExecFunc)(void);

int main(){

    HMODULE dllHandle = LoadLibraryA("C:\\Users\\sxh\\CLionProjects\\untitled2\\GenerateDll.dll");
    if (dllHandle == NULL) return -1;

    ExecFunc execFunc = (ExecFunc)GetProcAddress(dllHandle, "hello");
    if (execFunc == NULL) return -2;

    return 0;
}