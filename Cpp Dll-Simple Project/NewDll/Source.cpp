#include <iostream>
#define Source _declspec(dllexport)
//Project Properties\General\Configuration Properties\Configuration Type\DLL
extern "C" {

	Source void print(int a) {

		 std::cout <<a;
	}

	 Source int double9(int b){
	 
	 


		 return b * 2 * 9;
	 }



	


}