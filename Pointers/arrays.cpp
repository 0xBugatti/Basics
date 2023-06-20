#include <iostream>

using namespace std;

int main()
{
// int x =0;
// int * p = &x;
// cout <<  p[611] << endl;
// cout << p;



/*
Basic


array also Known as Vector

*/
//Diffrent Ways For Array intialization
int arrName[3] = { 5 ,14 ,12};
char sttr[100] = "uerrkkkkkkkkkkkkkkkkkkkkkkkkkkkgjglekgggggggjrlgi" ;
char sttrp[] = "uerrkkkkkkkkkkkkkkkkkkkkkkkkkkkgjglekgggggggjrlgi" ;
char stt[10] = {'A' , 'B'} ;
//Clarify Array Concepts
cout << arrName << endl;
int i ;
//Print Array Elemnts
for (i = 0;i<4;i++) {
cout << arrName[i] << endl ;
}




cout << "##Very Advanced Practice in Arrays ##\n" ;
//Manual arrays 
int arr[30] = {1412,152454,841,245}; 
int arr2[2] = {14,'a'} ; 
cout << arr[14] << endl;
cout << arr[29] << endl ;
cout <<  arr[44] << endl;
cout << arr2[1] << endl ;
cout << arr2[2] << endl ;
cout << "\nas\n";
arr2[12] = 00;

return 0;
}


/*
Arrays|strings is   Pointers
ointer To Array

arrays is collection of vars with same type
Pointers == AutoSized Arrays

DataType arrname[size] ;
//https://www.geeksforgeeks.org/difference-between-pointer-to-an-array-and-array-of-pointers/
String Is A (Array of Chars) Pointer (Array Of Charcters ) cout << endl <<strv[0] <<endl;char *str = "nuss" {One Ram Address (Pointer) is Being accessed & Edited throuth its name str you Can easy Acess Next Ram Address Through Original Arethmatic Pointer way *(str +1) which is main idea of AutoSized Array} or char str[256]; {265 Consecutive Ram Address is Being accessed & Edited throuth str Main Pointer }

*/
