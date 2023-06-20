#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
int arr[] ={14,28,38,47,57,36};
int x;

try
    {
    // code  that user interact with it and Can Fail 
    cout << "Enter X:";
    cin>> x;
    /*throw (int/String) ID throwed to Be Catched By catch
    and Get it in IF or swich Or Print (Deal with it)*/
    if (x>0){}    ///No Errors
    else if (x==0) {throw 100 ; /*throw "Zero"*/}    
    else if (x<0)  {throw -100; /*throw "Negative"*/}
    else{throw 1000 ; /*throw "Not Number"*/}


    
    }
catch(int err){
    //catch(string err) or catch(char *err) id will be stored in err
        cerr << "Error Signature is " << err << '\n';
        //Use cerr instead of Cout
        //If Errors is int Not  string Try To Document it 
        //100 Error :Zero Number Inputed
        //-100 Error :Negative Number Inputed
        //1000 Error :Not Number Inputed
        }
cout << arr[x] << endl;
cout << "Code Ended" ;

    return 0;
}