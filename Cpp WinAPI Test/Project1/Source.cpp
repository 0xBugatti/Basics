#include <Windows.h>
#include <WinUser.h>
#include <iostream>
#include <string>
#include <string.h>
#define DLL extern "C" __declspec(dllexport)




BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    MessageBox(0, (LPCWSTR)L"myfirstdll loaded", (LPCWSTR)L"SUCCESS STATUS", MB_OK);
    return TRUE; // succesful
}


int main() {
    MessageBox(0, (LPCWSTR)L"Fuck You", (LPCWSTR)L"Fucken Program", MB_OK);
   



    //WINAPI()
    //LoadLibrary()
    return 0;
}
