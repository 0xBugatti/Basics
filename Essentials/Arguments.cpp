//#include <bits/utility.h>
#include<iostream>
#include <string>

using namespace std;
/*
int main(void) :represents that the function takes NO argument
any Function define its arguments in Brackets of Writing Function : func(int v)
any Function Argument passed in Brackets of function calling as Var or direct value
main Function Arguments ==> Passed in std stream (tty-cmd) within running

argc is an intiger value represents for the Number of passed Arguments 
argv[] is AutoSized array of strings (2d Array of chars) its elements is passed arguments in std,
arguments of main function is typed chars beside program name in std within execution element 0 is Program name written in std 
char * can be string : int  main (int argc , string argv[]){
argc - argv can be any names
parameter of function is value of arguments can be passed as Decleared variable or Direct  
int fi(int v) {              //v is parameter
                 code;
                 return ;

} 
fi (exv) //exv is argument 
*/     
int main (int argc , char *argv[]){

printf("Program NAme is  %s\n", argv[0]);
printf("First Passed Arg is %s\n", argv[1]);
int intargv = atoi(argv[1]); 
printf("First Passed Arg  as int datatype is %i\n", intargv); // casting 
printf("Number of Passed Arg is %i", argc -1 );
//any Typed argument [argv array elements] is string data type to int it use casting
//to_string toupper tolower
   return 0;
}

