#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <string.h>

using namespace std;

int main(){
  
//   double size;
//     for (size = 0; getchar() != EOF; ++size)
//        printf("%.0f\n", size);



char command[30] ;
printf("Type Your OS Command Here (Maximmum 30 character) :");
scanf("%s" ,command);
system(command);



int i  ;
cout << "Type Your Command Legnth :" ;
scanf("%i",&i);
char *commandptr = (char *) malloc(i);
printf("Type Your OS Command Here (with castom limit) :");
scanf("%s" ,commandptr);
system(commandptr);
free(commandptr);

return 0;

}