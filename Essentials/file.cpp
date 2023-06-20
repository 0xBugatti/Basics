

#include <iostream>
#include <string>
using namespace std;
// Your First C++ Program
//typedef
//cerr
/*
C#, Java, and Python use dot (.) instead of :: such as System.String in C#, so why c++ is different? It's hard to tell.

C++ is very context-dependent as it is. Giving the dot operator one more meaning would make the language more difficult to read and parse. Pointers to data members will have become very difficult to understand if ClassName.* is used instead of ClassName::*, since then it will be difficult to distinguish from pointer-to-member dereference obj.*ptr_to_member

As for the alternative syntax of std:map, it conflicts with goto labels
//https://www.quora.com/Why-does-C++-have-two-colons-in-front-of-types-for-example-std-string
//https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/operators/namespace-alias-qualifier
//https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
*/
//type is variable {Templete + Generic Programming}
//namespace is A block of code can Be Written in cpp or h or c file called in other code by using keyword
 int main () {
    int x = 90;
    int i;
    char lo[80];
    lo[1] = '0';
    cout << lo <<endl;
    string xoo = "ALL is S3cure";
    static string xoxo = "ALL is S3cure2";
    cout << "Hello World! \n";
    cout << x + x << endl ;
    cout << "any additional values" <<endl;
    bool test = 10>20 ;
    if (test == 0){
        cout << "Right \n";
    }else {
        cout << "wrong";
    }
    for (i = 2; i >= 0; i=i+2){
        cout <<i <<endl;
        if (i == 20){
            break;
        }
    }
    int b;
    cin >>b ;
    
        return 0;
}


    



//Code Flow + Calling
//Libraries [Group Of Pre-Compiled Code]
//Variables [Decleration Vs Intialization Vs Assigning]
//Keywords in C++
//int var1,var2,var3, *p1 , *p2;
/*

    cin.ignore(); prevent console from closing
https://www.youtube.com/watch?v=2XM_p8iNYT0&list=PLky4bd7_03m-NU50dSLbA5051Eyllao-Q&index=25

CPU_ALLOC_SIZE
array_realloc
CPU_ALLOC
what iz make
*/
