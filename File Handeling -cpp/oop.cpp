// The object created inside the block will be stored in the stack and Object is destroyed and removed from the stack when the function/block exits.
// But if we create the object at runtime i.e by dynamic memory allocation then the object will be stored 
//on the heap. This is done with the help of new operator. In this case, we need to explicitly destroy the object using delete operato

/*
There is new keyword in Java used very often to create a new object. But what new does is allocate memory 
for the object of class you are making and returns a reference.
That means, whenever you create an object as static or local, it gets stored in heap



All the class variable primitive or object references 
(which is just a pointer to location where object is stored i.e. heap) are also stored in heap.



static variables  are stored in a special location in heap which permanent generation.

INJava : 
Local primitive variables, local object references and method parameters are stored in stack.
Local Functions (methods) are stored in stack but static functions (methods) goes in permanent storage.
All the information related to a class like name of the class, object arrays associated with the class, internal objects
used by JVM (like Java/Lang/Object) and optimization information goes into heap in  the Permanent Generation area.

Class definitions are stored in a separate area (neither stack nor heap) called the method area. In .net the corresponding area is called the Loader Heap

*/

#include <iostream>
using namespace std;
 
class Rectangle {
    int width;
    int length;
 
public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }
 
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
 
    ~Rectangle()
    {
        cout << "Destructor of rectangle" << endl;
    }
 
    int getLength()
    {
        return length;
    }
 
    int getWidth()
    {
        return width;
    }
};

int main()
{
    // Object creation inside block
    {
 
        Rectangle r(2, 3); // r is stored on stack
        cout << "Inside Block1..." << endl;
        cout << "length of rectangle is : "
            << r.getLength() << endl;
        cout << "width of rectangle is :"
            << r.getWidth() << endl;
    }

    Rectangle* ptr2;
    {
        // object will be stored in heap
        // and pointer variable since its local
        // to block will be stored in the stack
 
        Rectangle* ptr3 = new Rectangle(5, 6);
        ptr2 = ptr3;
        cout << "********************************************"
            << endl;
        cout << "Inside Block2" << endl;
        cout << "length of rectangle is : "
            << ptr3->getLength() << endl;
        cout << "width of rectangle is :"
            << ptr3->getWidth() << endl;
 
        // comment below line of code and
        // uncomment *important line*
        // and then check the object will remain
        // alive outside the block.
 
        // explicitly destroy object stored on the heap
        delete ptr3;
    }
 
    cout << "length of rectangle is : "
        << ptr2->getLength() << endl;
 
    cout << "width of rectangle is :"
        << ptr2->getWidth() << endl;
     
    // delete ptr2; /* important line*/
 
    return 0;