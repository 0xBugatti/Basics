//Preprocessor Directives --> Action Performed Before Compiler
//File Inclusion 
//lib.h [Define = Guard]
//<lib> include cpp file
#include<iostream>
#include <stdio.h>
#include <unistd.h>
#include "lib2.h"
/*Macros :  are pieces of code in a program that is given some name. Whenever this name is encountered by the compiler, the compiler replaces the name with the actual piece of code. The ‘#define’ directive is used to define a macro. Let us now understand the macro definition with the help of a program */
#define LIMIT 5
#define PrintHello() printf("%s \n" , "Hello")
using namespace std;
//Conditional Compilation : True IF = Compile
/*
 #ifdef macro_name
    statement1;
    statement2;
    statement3;
    .
    .
    .
    statementN;
#endif
*/
 int main(){
 
 
 
 
PrintHello();
printf( "Integer Is %i \n" , LIMIT) ;
printf("Values of Integers In Included Lib2.h are %i %i " , b ,t) ;
int u = 'b' ;
// cout << endl << u << endl ;
// printf ( "%i" , 'b');
// //Linking Is merging assembeled Header Files With assembeled Source File
//sleep(1);



return 0;
 
 
 
 
 
 }




//Other directives :

