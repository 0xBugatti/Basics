//The Library Code
//First 
      

#include "pch.h"  
// use stdafx.h in Visual Studio 2017 and earlier
//Project settings / C/C++ / Precompiled Precompiled Headers : Create(/ Yc)
#include <utility>
#include <limits.h>
#include <iostream>
#include <string>
#include <Windows.h>
#include <string.h>
//Include Dll header Library 
#include "momo.h"
//Write Functions and Intialize Variables which has Defnied in header momo.h without main


void Hackme(int n ) {
	int i = 0;
	while (i < n) {

		i++;
		std::cout << i << ":" << "You Are Hacked"<<std::endl;

	}}

void Messageme() {
	MessageBox(0, (LPCWSTR)L"Fuck You , You are H4ck3d", (LPCWSTR)L"Fucken Program", MB_OK);
}

