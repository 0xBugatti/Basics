#include <stdio.h>
int main(){

int size ;
printf("Enter Array Size :");
scanf("%i" , &size);
char stackarr[size] ;
printf("Address of Array is : %p\n\n\n" ,&stackarr[0]);
int c ;
for( c = 0; c < size ; c++){printf("Address of Element Number %d is : %p\n" ,c, &stackarr[c]);}


return 0 ;
}
