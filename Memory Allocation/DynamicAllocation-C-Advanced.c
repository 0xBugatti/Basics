#include <stdlib.h>
//#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//unsiggned integer is sizeoff returned datatype
//void Pointer is malloc returned Vlaue (Void to ease casting)
//malloc function takes a size (Number Of Bytes) you want to allocate it in heap memory and return void pointer to (Ram Address of) first byte
//we need to cast this void pointer to pointer with type of data stored in those bytes in C++ only 
//int *ptr = --->(int *)<--- malloc (i*sizeof(int));
//as we learnt in heap 
/*1- we can sacify the size in runtime 
2- its unmanaged code requires to be  freed manuallly by free() which is function takes returned pointer from malloc and destroy this allocated space

//Size Can Be Direct number or 29*sizeoff(int) or (strlen +1) 

realloc function takes 2 parameters  void pointer to (Ram Address of) first byte of pre-allocated space , new allocated size to increase allocated size
calloc function takes 2 parameters  Number of elements you want to allocate it in heap memory ,size (Number Of Bytes) for each element   and return void pointer to (Ram Address of) first byte and intialize all allocated values with 0

*/

int main () {
int i;


printf( "Enter Allocated Size:")  ;
scanf ("%i" , &i);
printf("\n");
int *ptr = (int *) malloc (i*sizeof(int));
//char  *t =  malloc (40); Code Works in C

ptr[1] = 10 ;
ptr[2] = 12;
// std::cout << ptr[0] << std::endl ; 
// std::cout << ptr[1] << std::endl ; 
// std::cout << ptr[2] << std::endl ; 
// std::cout << ptr[3] << std::endl ; 
free(ptr);
    return 0;
}