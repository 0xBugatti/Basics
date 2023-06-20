/*

Notes:
-----
? : operator works as follows :
condition ? value_if_true : value_if_false

string is array of chars [const charPointer  because array is Const Pointer ]

Tempeltes is A way to write Piece of Code Ignoring The dataTypes which mean Generlization and made By generic Functions and Classes
One Temlete Accept only One Use [Class or Function or Variable]

//The keyword 'class' above simply means that the identifier a_type will stand for a datatype. NB: a_type is not a keyword; 

*/
#include <iostream>
#include <Windows.h>

//Syntax of Implmenting: template <class TempName>
template <class T>
T anyDouble(T var2){
	return var2*2;
}


template <class T2>
T2 xvar;

template <class T3>
class TempClass
{
public:
	int a = 120;
	int b = 12;
	const char* name = "ABC";
	T3  TempVar;
	static T3 TempFunc(T3 var) { return var; }
};



int main(){

	//use temleted function -- Method 1 [Implicint Conversion]
	std::cout << anyDouble(10) << std::endl;
	std::cout << anyDouble(15.2) << std::endl;

	//use temleted function -- Method 2 [Explicint Conversion]
	std::cout << anyDouble<double>(15.2) << std::endl;

	//Using Temleted variable
	xvar<int> =10;

	//Use Temleted Class : You Should Determine The datatype which will be used Firstly
   
	TempClass<DWORD32> Obj1;
    //Here I used DWORD32 Datatype
	TempClass<int> Obj2;
	//Here I used int Datatype
	TempClass<__int64> Obj3;
	//Here I used __int64 Datatype
	
	
	Obj1.TempVar = 10;
	Obj2.TempVar = 20;
	
	std::cout << Obj3.TempFunc(Obj1.TempVar * Obj2.TempVar) << std::endl;
	
	//Integration Templete Class With Static Function Properties
	std::cout << TempClass<__int64>::TempFunc(Obj1.TempVar * Obj2.TempVar) << std::endl;
	
	return 0;


}