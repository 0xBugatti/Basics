#include <iostream>
#include <stdio.h>
using namespace std ;
/*


Global Variable : Decleared Outside Of Every Function
                  If Variable Decleared as local in function FUNC and global local will Be Enforced To use when function FUNC executed 
                  If You Want to change this rule you can use scope resulotion  operator [::]  to Ignore Local Variable when You IN Function Func 

local Variable : Decleared in a Function - Block Of Code 
                  cant be accessed outside of the Function or Block of Code 

Explain:

in  Every Scope Like  Function - Code Block  new variables or new vlaues of global variables stored in new specfic stack frame related to this specfic scope which is  automaticly
stored that means it is destroyed out side its scope becasue its stack memmory  automaticly deallocated (Freed) after exting Scope  so it can't be accsessable any more in byRef 
You Abuse The Scope Like  Function - Code Block  to store new  new vlaues of global variables in main function stack frame not in new specfic stack frame


if Variable is Local 


ByVal: used automatically by C++

Copy Value of (Varaible in main function) to  (Variable in another Function) as Parameter
cahnges on Parameter in specefic function Dont affect   (Variable  value in main Function)
Thats a copy of variable Value of main func  is Copied in specefic funtion and passed to it and the output dont reassign the Variable Value





ByRef

Value of Content Of Address  Varaible in main function reassigned as process it as Parameter in another Function
cahmges on Parameter in specefic function ofcourse affect  Variable in main Function
Thats not a copy of variable Value from main func thats reassign the variable value in whole code





By value : func(var)
By Ref : var = func(var) or Use Pointers or reassign Arrays elements or (Pointers) by any Function or statement


Notes:
1- when local variable (intialzed in any scope even main  execpt the global scope )is called it is mean  call by Value {variable new value is related to its specefic local scope when you exit this scope and take a look to variable value you will find it old value } 
2- No Confusion if Duplicated Variable intializion in Diffrent Scopes 



*/


void FoolSwap(int a,int b){


    int tmp;
    tmp = a;
    a = b;
    b = tmp ;
    printf("ByValFunction Scope Say:\n\nNew Value of First var is %i\nNew Value of Second var is %i\n" , a, b);
}

void Swap(int *aptr, int *bptr){


    int tmpptr ;
    tmpptr = *aptr;
    
    *aptr = *bptr ;
    *bptr = tmpptr ;
    printf("\nByRefFunction Scope Say:\n\nNew Value of First var is %i\nNew Value of Second var is %i\n" , *aptr, *bptr);
}


void ByValadder(int vi){
        ++vi;

    printf("\nByValAdder Scope Say:\n\nNew Value of  (x) is %i\n" ,vi);
}

void ByRefadder(int &ri){
        ++ri;

    printf("\nByRefAdder Scope Say:\n\nNew Value of  (x) is %i\n" , ri );
}


int main() {

int testFirst = 10 ;
int testSecond = 20;
FoolSwap(testFirst, testSecond);
printf("\nGlobal Scope Say:\n\nNew Value of First var is %i\nNew Value of Second var is %i\n" , testFirst, testSecond);
Swap(&testFirst, &testSecond);
printf("\nGlobal Scope Say:\n\nNew Value of First var is %i\nNew Value of Second var is %i\n" , testFirst, testSecond);



int x = 102;
printf("\nGlobal Scope Say:\n\nValue of  (x) is %i\n" , x );
ByValadder(x);
printf("\nGlobal Scope Say:\n\nNew Value of  (x) is %i\n" , x );
ByRefadder(x);
printf("\nGlobal Scope Say:\n\nNew Value of  (x) is %i\n" , x );


    return 0;
}
