#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <system_error>
typedef unsigned int noi;

/*
typedef struct boooks{
code;

}newname;

newname x;
*/


/*
ato functions
str functions
cin.functions





*/
using namespace std;


int ii=14;
int mi = -21251 ;
 string test = "global ex"; 




     

/*

DataType refers to Reserved Ram Size & Typeof Data To Store
NOTE : Computer only Deals With Numbers (dec|hex==>bin) Letters auto Translated to and From ASCII Table to Numbers but 
       datatypes made to make diffrence between bin of dec of ascii and bin of dec of number stored in same space

Fundamental DT

char c = 'G' ; [1] Bytes
bool takes two values 0 or 1 true or false [1] Byte (Only in C++)
int i = 547; //[4] Bytes {-2147483648:2147483647}
unsigned int ui = 454545541554 ;//[4] Bytes {0:4294967295} 
long int li = 55555555555451547;// [4] Bytes {-2147483648:2147483647 }
unsigned long int uli = 60221 //[4] Bytes {0:4294967295}  
long long int lli = 60221 //[8] Bytes {-9223372036854775808:9223372036854775807}  
unsigned long long int ulli = 60221 //[8] Bytes {0:18446744073709551615}  
short int si= 14221 //[2] Bytes {-32,768:32,767}  
unsigned short int (usi) = 60221 //[2] Bytes {0:65,535}  
float f = 1.02; [4] Bytes {1.2E-38 to 3.4E+38} (7 Decimal Digits After & Before The Point)
double d = 4548448488;[8] Bytes {1.7E-308 to 1.7E+308} (14 Decimal Digits After & Before The Point)
long double ld = 415194541551 [10] Bytes {3.4E-4932 to 1.1E+4932} (19 Decimal Digits After & Before The Point)


UserDefined DataTypes: struct , enum , class

Dreived DataTypes : Pointers , Refrences , arrays


Special aliesed DataTypes :



Biggest Type size_t ssize_t usize_t wchar_t 

Fastest Type


_Float32
_Float32x

char16_t 
char32_t

u_char
u_int8_t
u_int16_t
u_int32_t
u_int64_t

uint8_t
uint16_t
uint32_t
uint64_t

uint_fast8_t
uint_fast16_t
uint_fast32_t
uint_fast64_t

uint_least8_t
uint_least16_t
uint_least32_t
uint_least64_t

u_int

_Float64
_Float64x
__float128

usize_t
ssize_t
size_t
wchar_t

wchar_t  is A big char size [4 Byte] which ascii code Biggest than 127 (Maximmum Translated Number Can Be Stored on 1 signed Byte)




Tricks
--------
1) auto  ax = 475; The Compiler Choose A data Type Automatically {must Be Decleration And Intialization} + must Avoid CurlyBraces Decleration Way 
2) decltype(structname.member) x ; //make a same data type of passed struct member
3) Alias DataTypes : 
                      typedef long int newname  ;
                      or
                      using newname = long int;

sizeof(DataType) ==> Function Returns A size of DataType


memory floating point (Infinity Number of any float by .40f Wrong Assigning of Big float Corrected By Double)
integer overflow (while and Power 4844444424**2)

Defination : Reserved Ram Space Storing Something To Be Used


Decleration

dataType varname; or dataType varname1,datatype varname2;  //defalt : dont assign any value for the variable except for global variable will be zeros becase its default value












Intialization
varname = value ;
or

varname = {value} //
or
varname {value} ; 


arr[40] {} // all array elements will be zeros
or
varname (value) ; //cant be empty becase will be cosidered as function decleration
Varname = Function(); varname = returned Value Function ==> require casting if needed or auto 

Intialization & Decleration
dataType Varname = value;



Scope : 

Global Variable : Decleared Outside Of Every Function
                  If Variable Decleared as local in function FUNC and global local will Be Enforced To use when function FUNC executed 
                  If You Want to change this rule you can use scope resulotion  operator [::]  to Ignore Local Variable when You IN Function Func 

local Variable : Decleared in a Function or Function Parameter - Statement - Block Of Code 
                  cant be accessed outside of the Function or Block of Code 


automatic  variables is destroyed out side its scope becasue its stack memmory  automaticly deallocated (Freed) after exting variable Scope (Function or Block of Code)
[1] static variable isnt destroyed out side its scope becasue it is still allocated in the memory  after exting variable Scope (Function or Block of Code) {recommende with OOP}
[2]const : key Word  prevent reassigning variable Value








Data Type Modifiers

unsigned  : Unsigned Means Make whole Size  of Byte as Positive (0 to 255) Not Half of 255 For negative and another Half For Postive (-128 0 +127)
which allows us to increase Range Of Values Can Be stored  On the Same Size (DataType)
char c = 120;  //maximmum is 127 {-128:127}
printf("%d\n",c); 
unsigned char uc = 150; //Maximmum is 255  {0 : 255 }
printf("%d\n",uc);



signed
long 
short









Variable Can Be Assigned From (Developer - UserInput - Function Output)


Full Decleration Structure:



prefixSpecifier optionalSuffix basetype Declerator intializerBody  ;
static          const           int        *y       = &a ;     





Implicint Conversion (casting) [change Variable DataType]
----------------------------------------------------------

int newvar = (newdatatype) oldvar ; 
Functions For Casting : atoi atof atol atoll btowc be64toh be32toh

casting pointers
int *iptr ;
char *newcptr = (char *) iptr 



casting array element  

int intargv = atoi(argv[1]); 
sscanf (argv[1],"%d",&num);


int num = *arg[1] - '0'


 


 




unsigned char 
 	1 
 	0 to 255 
 	%c 
 
float 
 	4 
 	1.2E-38 to 3.4E+38	%f (7 Decimal Digits After & Before The Point)
 
double 
 	8 
 	1.7E-308 to 1.7E+308	(14 Decimal Digits After & Before The Point) %lf 
 
long double 
 	16 
 	3.4E-4932 to 1.1E+4932	(28 Decimal Digits After & Before The Point) %Lf 
 

*/
int main () {

    
     cout << "Negative int Test  " << mi + ii << endl ;

//echo | gcc -E -xc -include 'stddef.h' - | grep size_t ==> typedef long unsigned int size_t;
size_t y = 1010;

wchar_t wc = 'ط';
cout << "Value of Y Unsigned long int DT with alias name size_t is :" ;

  printf("%lu" , y);


  cout << "\ndouble Number is :" ;
  double d =  999994949494.72 ;
  printf("%0.3lf" , d);
  cout << " With Format %lf\n";
     
     
          cout << "Float Number is :" ;
          float  f =  99999.13 ;
          printf("%0.2f" , f);
          cout << " With Format %f\n";

     cout << "Long Number is :" ;
     long double  ld =  1955555555559147132 ;
     printf("%0.0Lf" , ld);
     cout << " With Format %Lf\n";


    {
//Ranged Forloop + Sockets + OOP + Operator + Casting
        //cout << "\n\n" + wc  ;
    
    test = "local ex" ; //local
    int  statictest = 80;
    cout << "use Variable declered locally is superior as language rules : " << test <<endl;
    cout << "Enforce use Global Variable and ignore Variable  Declered locally through SRO [::] : " << ::test <<endl ;
    cout << "Test Of Static Functionality : " << statictest <<endl ; 

    }


//sscanf(const char *__restrict __s, const char *__restrict __format, ...)
int *iptr = &ii;
char * cptr = (char *) iptr ;
//system("PAUSE");
  
  
    return 0;

}

//memcpy
//threading 
//mutex
//join
