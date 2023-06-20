// Enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Enumerations Used For Making Numbered Set Of int Data with diffrent values
    //Enumeration Values Cant Be edited : const int
    //If Values Doesnt assigned will add 1 To First Value
    //If first Value doesnt assigned will Make it 0


    
//Implementing it
enum ex{a1=20,a2=12,a3=50,a4=5,a5=71,a6=10};
//Using it
cout << a2 << endl;


//Assigning enum in Array
//EnumName ArrName[Size] = {Values Copied From Enum  To Be Put in this array with new arrange}
ex Enumarr[3] = {a4,a1,a6};
cout << Enumarr[0];

  
}
