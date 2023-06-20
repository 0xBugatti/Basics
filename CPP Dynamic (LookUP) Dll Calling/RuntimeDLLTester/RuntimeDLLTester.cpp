// RuntimeDLLTester.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
void main()
{
    HINSTANCE RTDll = LoadLibrary(L"C:\\Users\\Blu-Ray\\source\\C++\\DllTester\\x64\\Debug\\momo.dll");
    auto RuntTimeCalledFunction = GetProcAddress(RTDll, "Messageme");
    std::cout << "Function Address in Memory is : " << RuntTimeCalledFunction;
    RuntTimeCalledFunction();
    
    
    //Error Debugging
    if (!RuntTimeCalledFunction) {
        printf("could not locate the function ");
        printf("%d", GetLastError());
    }
     
}



