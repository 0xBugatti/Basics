// Pointer is Variable contains address
#include <iostream>

using namespace std;

 int main()
{
int x = 2;
cout << "X value :  ";cout<<x<<endl<<endl<<endl;
//X is Variable stored in mem

//int_pointer(DataType Accept mem addr values) == mem addr
//Void Pointer is Used to Point to Ram Address to read an unKnown DataType or Write multi Types (Dangerous Using)
/*
int z = 742;
int *intpt = &z; 
void *pt = intpt ; //auto DataType Conversion Implicint Conversion
*/
//any pointers is datatype 8-Bytes|4-Bytes Size Related To Operating System Architecture (Store Ram Address Like CPU Registers) So char *str or string dataType is 8-ByteSize

//&X ==>mem addr of var X called immpersent
//*p ==>Content of mem sapce p called astrik
//*p = &x ==>Content of mem space p is memmory addres of var x 
//*&x ==> Content of memmory address of x == (X value)
//*p ==> Content of pointer P which is memmory address of x == (X value)
/* int *y = & *p;*/
//cout <<y<<endl;
cout << "Memmory Address Practice"<<endl ;
cout<<"=================================" <<endl<<endl<<endl;
cout<<"Memmory Address of variable x with storing address in specefic variable (int Pointer to X called p):  ";
int *p = &x;
int **pp = &p;

//Pointer to Pointer Inialization & Decleration {Pointer Store address of another Pointer and this another Pointer store address o another variable} OK
// &pp == address of pp is a diffrent ram adress  OK
//* pp == Content of pp ram scape which is pointer P ram address OK
//** pp == Content of of Content pp ram space which is content of p ram space which is x value OK
//&**pp == ram address of x OK 
//&*pp  == ram address of Pointer p (& p)  OK


/*
cout<<"==="<< pp[0][0] << "====" <<endl;

arethmatic Pointers 
to acccess Byte After Address of *p we will use *(p+1) 
p[1] Copiler actually map it to be *(p+1) 








// [] = *
// [] [] = **

//* p = p[0]
// * Ram Address beside addess stored in p = p [1]
// pointer realy is array of pointers to the end of ram 
// First element of array pp  is P pointer 
*/
// cout<<endl;
// cout<<"============================"<< p[70] << "===============================" <<endl;
// cout <<endl;






cout << p <<endl;
cout<<"Memmory Address of variable x with Operator:  ";
cout << &x <<endl;

cout<<"Memmory Address of Pointer:  ";
cout <<&p <<endl<<endl<<endl;


cout << "Memmory Content Practice" <<endl;
cout<<"================================="<<endl<<endl<<endl;

cout<<"Content of Memmory Address of variable x with Operator :  ";
cout<<*&x <<endl;
cout << "==========NOTE :should be value of x ============" <<endl<<endl<<endl;


cout<<"Content of Specefic Variable Which store X memmory address (int Pointer to X called p) :  ";
cout <<*p <<endl;
cout << "==========NOTE :should be value of x ============" << endl<< endl << endl;

cout<<"Content of Memmory Address of Specefic Variable Which store X memmory address (what stored in mem Address of Pointer P) [address of x] :  ";
cout<<*&p <<endl;
cout << "==========NOTE :should be value of address x ============" <<endl<<endl<<endl;






return 0;
}


