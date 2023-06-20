#include <cstring>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string.h>
#include <string>
using namespace std ;

void strcpEX(void);
void strcpEX(void){
char cpy3[10] = "amr";
char cpy4[10];
//ac = ab;//Error
//strcpy(ac,ab);//To Copy array of chars in another (old strings way before become a datatype) usage (distination array,source array)
strcpy(cpy4,cpy3);//To Copy array of chars in another (old strings way before become a datatype) usage (distination array,source array)
cout << cpy4 << endl;
string cpy1 = "ali";
string cpy2 = cpy1;//To Copy  string To another in new way after string became a datatype in C++
cout << cpy2 << endl; }





void strcatEX(void);
void strcatEX(void){
char cat3[10] = "amr";
char cat4[10] = " noor";
// cat3 + cat4;//Error
 cout << strcat(cat3,cat4) << endl; //To concatinate strings [array of chars] with another (old strings way before become a datatype) usage (distination array,source array)
string cat1 = "ali";
string cat2 = " noor";//To concatenate  string To another in new way after string became a datatype in C++
cout << cat1 + cat2 << endl; }



void strprop(void);
void strprop(void){
char str1[20]= "amr";
char str2[10] = "noor020";
// cat3 + cat4;//Error
 cout << strlen(str1) << endl; //To calculate length of string (wriiten bytes of reversed bytes of chars array ignoring terminator )
cout << sizeof(str1)  << endl ; //Size Of Reserved Bytes in Ram of any  array 

 cout << strcmp(str1,str2) << endl;//To Compare Between Final ascii Values of To Strings if second is bigger return -n if first return +n is bigger if the same return 0
}


int main () {









 






//Strings in C++
string a1,a2   ;
a1 = "NewNew" ;
a2 = "poc";
//{
 // a1 = a2 ;  
//string is array (always ByRef) so its Changing not ristricted ByScope 

 //}
cout << "------------------Strings in C++----------------------"<<endl;

cout << endl <<  a2 << endl ; 
cout << endl <<  a1 << endl ; 
cout << endl <<  a1.at(0) << endl ; //at(i) to print char of string
cout << endl <<  a1.length() << endl ; // a1.length() to print n of char of string
cout << endl <<  a1.size() << endl ; // a1.size() to print size in bytes  of string
cout << endl <<  a1.substr(0,3) << endl ; //a1.substr(0,3) to print range of chars of string if it takes one parameter it will make it as intial val and final val will be end of text
//To Replace string with another
a1.swap(a2) ;
cout << endl <<  a2 << endl ; 
cout << endl <<  a1 << endl ;  
//cout << endl <<  a1.erase(0,3) << endl;  // To remove range of chars from your string 
cout << endl <<  a1.find("c") << endl; //To search for char in string and return its index

//cout << endl <<  a1.replace(0,2,"PPPPP") << endl; //To Replace Range of chars in string with another chars takes index of start replacement and n of replaced chars and new string 

//cout << endl <<  a1.insert(a2) << endl; //To insert Range of chars in string  takes index of start  and new string and index of end  

//You can use those functions without make string (Object) By string::size();


cout << "------------------Strings in C----------------------"<<endl;


char arr[4] = { 'w' ,'e', 'd' ,'\0'};
//double quotes are used for string literals. A string literal “x” is a string, it is containing character 'x' and a null terminator '\0'. So “x” is two-Byte array in this case.
//or// char arr[] = "wed";    //or//char *ptr = "wed";
char *ptr = arr ;
//Pointer to array stores the address of its first element so derfracing the ptr with * return the first char only and *(ptr+1) .....+2 in for  to the end of the chars or if array has \0 or "abc" print ptr
//typedef char*   string
cout << "arr[0]   "  << arr[0] <<endl ;
cout <<"*ptr     "     << *ptr << endl ;
cout <<"*(ptr+1) " << *(ptr+1) << endl ;
cout <<"ptr      "      << ptr << endl <<endl <<endl ;







strcpEX();
strcatEX();
strprop();
/*


wcstof32
atof32
atof
atoi
atol
atoll
stoll
strtof128
stof
stoi
stol
*/

// printf("%p\n",arr);
// cout << *arr << endl ;
// int i;
//  for (i=0;i<4; i++) {
//  cout << * (ptr+i);
//  }

    return 11;




}

