#include <bits/types/FILE.h>
#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main (int argc , char *argv[]) {
         FILE * Filep;
         printf("\nHello This Is File Sizer\n \n");  
                  Filep = fopen(argv[1] , "a" );
                  printf("\nFile %s ",argv[1]);
                  printf("Opened in Adress : %p\n\n",Filep);
                  fseek(Filep, 0, SEEK_END); // seek to end of file
                  int fsize = ftell(Filep); // get current file pointer
                  rewind(Filep);        
                  printf("File Size is :%d \n\n" , fsize);                           
                  fclose (Filep); 
                      return 0;
}