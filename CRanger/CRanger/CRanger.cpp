// CRanger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
First of all What is Range : Subset Of Array has start and end related to indexes of Array elements
How To Implment it : Intialize three Pointers
                     1- The Seeking Pointer :Moving From The Start To End and Get Every Value
                     2- Start Value Pointer :Points to The Start of Range
                     3- End Value Pointer   :Points to The End of Range
                     Notes:
                     -Like Swapping
                     - All Array Pointers Should Be Const Because Array is Const Pointer

*/
using namespace std;


void Ranger(const int *start, const int *end) {
    const int *seeker;
    for (seeker = start; seeker != end; seeker++){
        //Not > Because Its Ram addresses Just != is 
        //Here You Got  Every Value Of Range
        cout << *seeker <<" ";
    }



};
int main()
{
    int arr[] = { 1,52,114,201,0104,14,4,4,785,9,51,589 };
     Ranger(arr,arr+8);

//All Previous Technique Can Be Automated In Mpdern C++ Throgh Ranged Based For Loop 
//Range Based For Loops:Loop That itreating on Extracted Values From any Range/Arrays and those Valuse are stored in variable of Same datatype of array in Every iterating

     cout << "\nModern C++ Technoque Range Based for loop";
     for (int x : arr) {
         //auto x is Better
        
         cout <<x << endl;
     }


}
