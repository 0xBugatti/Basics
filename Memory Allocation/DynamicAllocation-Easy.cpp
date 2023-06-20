
#include <iostream>
#include <string>
using namespace std;

int main() {

int *heaparr = new int[8]; //pointer points to first element of array
heaparr[0] = 90;
heaparr[1] = 99; 
cout << heaparr[50] ;
delete [] heaparr;

//https://www.geeksforgeeks.org/malloc-vs-new/?ref=lbp
//why Pointers in Heap
//malloc calloc realloc free
return 0;
}
