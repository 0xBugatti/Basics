
#include <iostream>
#include <string>
using namespace std;

int main() {





//Advanced Code on Dynamic Arrays

int i;
int p;
cout << "Enter array Size : ";cin >> i;
cout<<""<<endl;
int *heaparr = new int[i]; //pointer points to first element of array



cout<< " Value of array element number 0 :";cin >>heaparr[0];
cout<< " Value of array element number 1 :";cin >>heaparr[1];
cout<< " Value of array element number 2 :";cin >>heaparr[2];
cout<< " Value of array element number 3 :";cin >>heaparr[3];

cout << "\n";


cout << "Which Element You Want to show? : ";cin >>p;
cout <<"Tha Value Of Element Number " << p <<" is :"<<heaparr[p]<<endl;
delete [] heaparr;





return 0;


}
