// DllTester.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Settings 1:C++\General\Additional Include Directories : C:\Users\Blu-Ray\source\dlls\dllProjectFileName\dllProjectFileName\
//Settings 2:Linker\Input\Additinal Dependancies : dllname.lib;%(AdditionalDependencies)
//Settings 3: Linker\General\Additional Libaray Directories:C:\Users\Blu-Ray\source\dlls\dllProjectFileName\$(IntDir)
//Settings 4:Build Events\Post-Build EvenCommand Line:xcopy /y /d "C:\Users\Blu-Ray\source\dlls\dllProjectFileName\$(IntDir)dllname.dll" "$(OutDir)" Or Copy DLL File in Same Built Caller.exe Directory


#include <iostream>

#include "momo.h"
//
int main()
{
    Hackme(100);

    Messageme();
}


