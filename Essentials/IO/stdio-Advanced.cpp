#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main (){


//Get Pointer Fro User
char c = 'a';
int i = 21 ;
float f = 10.0 ;
bool b = 0;

char *cp = &c;
int *ip = &i;
float *fp = &f;
bool *bp = &b;
//Print Address Of Pointer
cout << "Memmory Address Of Pointer :"<< &cp << endl ;
//Print Ram Address stored in Pointer (Content Of Pointer) w
cout << "Memmory Address Stored in  Pointer :"<< cp << endl ;
cout << "Memmory Address Of Variable x :"<< &c << endl;
cout << "Reassign Value Of Ram Address stored in Pointer (Content Of Pointer) :" ;
scanf ("%p" , &cp);
*cp = *ip = *fp = *bp;
cout << "New Memmory Address Stored in  Pointer :"<< cp << endl ;

cout << "Memmory Address Of Variable x :"<< &c << endl;
//Memory Dumper
// cout << "Content Of New Memmory Address Stored in  Pointer"<<endl;
// cout << "--------------------------------------------------";

// printf("\nin Hex Format :%x\n",*bp);
// printf("in Hex Format :%x \n",*cp);
// printf("in Hex Format :%x \n",*fp);
// printf("in Hex Format :%x \n",*ip);
// You Want to change The Type Of Pointer also to Extract Pointed Value  
return 0;
}