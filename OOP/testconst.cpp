#include <stdio.h>
#include <iostream>
using namespace std;





class sample {
   int val;
   int editable;
   public:
   static const int constvar = 10;

   sample(int x) {
      val = x;
   }



   int CgetValue()  const {
      return val;
   }

   int NgetValue()   {
      return val;
   }
   int Nedit()  {
    editable = 100;
    //constvar = 10;//Error
    //Const Variable cant be Edited

    cout << "Testing Edit Ability editable = " ;
    return editable;
    }
    int Cedit() const {
    // editable = 100; //Error
    //Const Function Cant Edit Class members

    cout << "Testing Edit Ability editable = " ;
    return editable;
    }

};






int main(){




 const sample s(20);
sample s1(20);



//s.constvar = 20;//Error
//Const Variable cant be Edited




//cout << s.Nedit() << endl;
//Const Object Cant Call Not Const Function 

cout << s1.Nedit() << endl;
//Normal Object execute a Normal Function that Edit Value  of Class member
cout << "The value using Const object to Call Const Function: " << s.CgetValue();
//Const Object cant Call Normal Functions can pnly Call Const Function
//   cout << "The value using Const object  : " << s.NgetValue(); // Error
cout << "\nThe value using Normal object  to Call Const Function: " << s1.CgetValue();
cout << "\nThe value using Const object  to Call Const Function: " << s.CgetValue();
//const Function Can Be accessed with Normal Object And Const Object



   
return 0;



   //Constant Function : Read Only Function Cant edit Class  member Can Be accessed with Normal Object And Const Object
   //Constant Object : Object that Can only access Const Methods (Which cant edit Class members) So Const Object  cant Edit Class Members  
   //Syntax of const function : int func()  const {}
   //Syntax of const Object  :    const className obj(20);   
   //Const Object cant Call Normal Functions can only Call Const Function

}





