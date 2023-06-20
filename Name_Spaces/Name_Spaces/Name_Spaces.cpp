
#include <iostream>
#include "ns.h"
#include <stdio.h>

// NameSpaces: Is Just a piece of Code  to easing accessed to some Clustered Functions and Variables
//Scoping Rules
//Access without (::) related to place -> Where you write "using" 
//Access with :: related to place -> Where you write The NameSpcae it Self



//NameSpace Implmentation
namespace Num {
	int z = 102;
	std::string pass = "BCVw@be#TWd216";

	void Place() { printf("exNS"); }
	int Trippler(int a) { return a * 3; }
    int Squarer(int a) { return a * a; }

	class test{
	public:
		void display(){std::cout << "Testing Classes in Namespaces" << std::endl;}
	};


//Neasted NameSpaces  Implmentation
	namespace NumType {
		bool ISEven(int a) {
			if (a % 2 == 0) { return true; }
			else { return false; }}
		const char* ISoddNum(int a) {
			if (a % 2 == 0) { return "Not odd"; }
			else { return "Odd"; }}
	}
	
	int Cuber(int a) { return a*a*a; }

}




void main()
{
//Name Space Accessing Methods direct with :: or with "using"


//Direct Access:
	printf("%d \n", Num::z);
//Keyword Using To Make Namespace global Global as you wrote it here:
	{
		using namespace Num;
		printf("%d \n", Cuber(10));
	//I put Code In Block to Modify The Scope of Name Sapce

	}
	

//Handeling Class From Name Space

	Num::test obj1;
	obj1.display();
 
//OR
	{
		using namespace Num;
		test obj2;
		obj2.display();
	}


//Neasted NameSpaces Accessing Methods direct with :: :: or with "using :: "
	
//Direct Access:
	std::cout << Num::NumType::ISoddNum(10) << std::endl;
	// Keyword Using To Make Namespace global Global as you wrote it here
	{
		using namespace Num::NumType;		
		std::cout << ISEven(10)<<std::endl;
	}
//Additions: remote  
//Name Spaces is not a solid feature Like Headers So Cant Be standalone remote File But We Can Write it in Header File and Include it

int d = Remote::doubleit(10);
std::cout << d <<std::endl;


//Additions Aliesing [namespace NewName = NS1::neastedNS1;] is For shorten Your writing
namespace Mather = Num::NumType;
std::cout << Mather::ISoddNum(20) << std::endl;}















