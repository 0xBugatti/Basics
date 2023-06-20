#include <iostream>

using namespace std;


int * MakeRandomArray( ) {

   static int  r[10];

   
   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
   }

   return r;
}


int * PtrFunction(int x ) {
   
  int *ptr = &x;
  return ptr;
}

void printaddfunc(int a , int b){cout << a + b << endl;}
int realaddfunc(int a , int b){return a+b;}


int main(){





//Pointer to Functions usages :(Call Function with its Pointer|Pointer To Returned Value Of Function)

void (*funptr)(int,int);
int (*realfunptr)(int,int);
funptr = &printaddfunc;
realfunptr = &realaddfunc;

//Call Function With its Pointer
funptr(1,2);
cout << realfunptr(1,2)  << endl;
//Store Returned Value Or Print it  or its address in the mem
int sum12 = realfunptr(1,2); 
cout << sum12<< endl;
cout << &sum12<< endl;





//Function Return Pointer 
int var = 40;
cout<< PtrFunction(var)<< endl;




//Function Return Array
  int *randomArr ;
  randomArr = MakeRandomArray();
  cout << randomArr[2];

   




   return 0;}