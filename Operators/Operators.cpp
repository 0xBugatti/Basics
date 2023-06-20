/*
There is to Classfications methods of Operators (Symbols shorter than code)
First  :Based on N of Operators [Unary,Binary,Ternary]
Second :Based on Role of Operators [Arethmatic,Relational,Logical,Increcment and decrement Operators,Assignment,Conditional]

Arethmatic:
+ “plus” → c = a + b
- “minus” → c = a - b
* “times” → c = a * b
/ “divided by” → c = a/b
% “modulus” → c = a % b

Logical:
|| or
&& and
!  not 

Relational:
<  
>  
≤  
≥  
==
≠
a<b<c ???
(a<b)<c



increment and decrement operators :
- x++/-- is a short cut for x=x+/-1
y=x++ is a short cut for y=x and  x=x+1 (y = 10 ,x = 11) 

++/--x is a short cut for x=x+/-1
y=++x is a short cut for x=x+1 and y=x  (y=11 , x=11)


Assignment:
a+=b --> a = a + b
a-=b --> a = a - b
a/=b --> a = a / b
a%=b --> a = a % b
a*=b --> a = a * b

*/
#include <stdio.h>
int main(){

  
  
  
  
  //Assignment
  int a ,b;
   a= 10 ;
   b = 3;
   printf("The Assignment operators Examples :\n");
   printf("a = %d, b = %d\n",a,b);
   a+=b; //a = a + b

   printf("New a  value  = %d\n",a) ;




//Relational

    int c = 20;
    
    printf("\n\nThe Relational operators Examples[0:False ,1:True] :\n");
    printf("Value of Operation can Be printed as d  format\n");

    printf("a = %d, b = %d\n\n",a,b);
    printf("Is a>b    = %d\n",a>b) ;
    printf("Is a<b    = %d\n",a<b) ;
    printf("Is a==b   = %d\n",a==b) ;
    printf("Is a!=b   = %d\n",a!=b) ;
    printf("c = %d \n",c);

    printf("Is a<b<c = Is (a<b)<c  = 1<c = %d\n",a<b<c) ;
    printf("Is a<b>c = Is (a<b)>c  = 1>c = %d\n",a<b>c) ;


  
  //increment and decrement operators
  int x = 10;
  int y = x++;
  printf("\n\nThe increment and decrement operators Examples :\n");
  printf("New inc x = %d, y = Old x value   = %d\n",x,y);
  
  x = 10;
  y = ++x;
  printf("New inc x = %d, y = New x value  = %d",x,y);





    return 0;
}