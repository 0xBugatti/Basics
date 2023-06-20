#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <system_error>
//OOP Structure in Memory 
/*
Class : 
formed from methods and datamembers
as "int" DataType (niether stored nor heap or stack) Execpt Methods Stored as shared Stackframes 


Objects : instance (Refrence) of Class datamembers Can Be Stored in Heap or stack  and Methods Stored as shared Stackframes
If Object Functions And Datamembers Storage Related To the Scope of Defination in Block/Function or Global or or static or  Local 


Special Case :: You Can Execute Class Functions Without Creating instances But this Function should Be static to still saved on mem 
after Class intialization and you will need Scope resulotion to access static Function From a class



Heap Storage Mechnism (REF TO Access)
in JAVA https://youtu.be/XYZkl3mbgkk?list=PLiY06-DY3fPE0siXIiIGdrEJc0tLbp0ET
*/


using namespace std;





class Box {
   int width;
   int length;





public:

   Box(int length = 0, int width = 0) {
      this->length = length;
      this->width = width; }



   int prnt_len() {
      cout << length << endl;
      return 0;}
    
    
    
 static  int name() {
      cout << "Testing" << endl;
      return 0;
   }






};

int main() {
      //Make Special Case
      Box::name();
      
      
      



      // Object + Function Instruction will be stored in the stack 
      Box Stack_obj(2, 3); // Object will be stored in the stack
      Stack_obj.prnt_len() ;





   

     //Object Variables will be placed in the heap section, and local But Function Instruction and pointer variable *heapObj will be stored inside stack
      Box* heapObj = new Box(5, 6);
      heapObj->prnt_len() ;
      delete heapObj;
   


return 0 ; }


 