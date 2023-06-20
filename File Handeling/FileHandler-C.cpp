
#include <bits/types/FILE.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <string.h>

using namespace std;
// void reader(FILE *fptr){
//    int readb ;
//    std::cout << "EnterSize of Bytes To Read:";
//    std::cin>>readb;
//    char Bytes[readb] ;
//    fread(Bytes,readb,1,fptr);
//    int b;
//    for (b=0; b<readb;b++) {
//    std::cout<<Bytes[b];
//    }

int mode ;

void PerfectReader(FILE *ffptr,int size) {
                           char Bytes[size] ;
                           fread(Bytes,size,1,ffptr);
                           int b;
                           //std::cout<<Bytes[b]; 

                           if (mode==1)
                           
                           {

                           printf("Bytes in Hex\n\n");   
                           for (b=0; b<size;b++){
                               printf("%x ",Bytes[b]);
                               if (b%50==0 && b !=0){ printf("\n");}}   
                           }
                           if (mode==2)
                           {

                           printf("File Read\n\n");   
                           for (b=0; b<size;b++){printf("%c",Bytes[b]);}
                        
                           }
                           

}

int Sizer(FILE *sfptr) {

                       fseek(sfptr, 0, SEEK_END); // seek to end of file
                       int size = ftell(sfptr); // get current file pointer
                       rewind(sfptr);
                      // printf("\n\nSize Of File is : %d Bytes\n\n" ,size);
                       return size;
}


int main (int argc , char *argv[]) {
         FILE * Filep;
         printf("\nHello This Is File Processin Example \n \n \n");

          printf("Choose Read Mode\n");
          printf("Type 1 For ByteHex Read \n");
          printf("Type 2 For Normal Read \n") ;
          printf("Type 3 For Write \n\nmode:") ;
          scanf("%i",&mode);
            
    

  
 if (mode==3) {
                   Filep = fopen(argv[1] , "a" );
                  
                  printf("\nFile Opened in Adress : %p\n\n",Filep);

                  char *str ;
                  printf("\n\twrite:\t\n");
                  scanf("%s",str);               
                   
                  //  char *str = "newline";

                   //string str = "NewLine";

                  //  std::string str ;
                  //printf("\n\twrite:\t\n")
                  //  std::cin>>str;
                  
                   fprintf(Filep , "%s\n" , str);                           
                   fclose (Filep); } 
                   else{
                          Filep = fopen(argv[1] , "r" );
                          printf("\nFile Opened in Adress : %p\n\n",Filep);

                          int fsize = Sizer(Filep);
                          printf("\n\nSize Of File is : %d Bytes\n\n" ,fsize);
                          PerfectReader(Filep,fsize); }



return 0;
}
//File Data Read By Pointer Rwlated To DataType of variable Which Store read file data , Breaked By Spaces
/*
In C You Can easly understand this process

Why Pointers 

Easy Answer
----------------
You Start with Pointer To The of file [To Recognize it in the after loading memory] 
FILE* Fptr ;//File is struct (assume it as data type)
            //Intialize the Pointer 
Fptr = fopen("/etc/hosts" , "r" );  //Load File (Sequance of Bytes ends with eof)in memmory and assign the File in The intialized Pointer
                                    //I Act with  Pointer of fil e Becasue it defined For me To act with Pointer (RamSpace)
                                    //r	opens a text file in read mode
                                    //w	opens a text file in write mode
                                    //a	opens a text file in append mode
                                    //r+ opens a text file in read and write mode
                                    //w+ opens a text file in read and write mode
                                    //a+ opens a text file in read and write mode
                                    //rb opens a binary file in read mode
                                    //wb opens a binary file in write mode
                                    //ab opens a binary file in append mode
                                    //rb+ opens a binary file in read and write mode
                                    //wb+ opens a binary file in read and write mode
                                    //ab+ opens a binary file in read and write mode




fclose (Fptr);
fread(ArrayofChars(Bytes) to StoreReadData of Every Byte of File on it ,NumberOfBytesToReadfromEachElement,NumberofElements,FILE Pointer which define File to read its Bytes From memory);
fraed(Bytes[],FileBytesSize,1,FPTR) //all FileSizeofBytes as  1 Elemnt
fraed(Bytes[],1,FileBytesSize,FPTR) //Read Every File Byte as 1 Elemnt until Elements = FileSizeofBytes



fwrite(ArrayofChars(Bytes) to ReadData and Store Every Byte of it on File ,NumberOfBytesToReadfromEachElement,NumberofElements,FILE Pointer which the dataread from array will be wrote on it);
fseek()	   sets the file pointer to Specific Byte Of File Bytes
rewind()   sets the file pointer to the First Byte  of the file





operators   
OOP MemAlooc
Arrays
Telegram

fputc()	writes a character into the file
fgetc()	reads a character from file
fgets()
fputs()
fputw()	writes an integer to file
fgetw()	reads an integer from file
fscanf()	reads data from the file





fprintf(FILE Pointer which define File with address of first Byte to Read From it  , "Format" , variable)	write data of Variable  into the file 











    //   //to_string
        //     atof(const char *__nptr)
        //       atoi(const char *__nptr)
        //       atoll(const char *__nptr);
            
        //     atol(const char *__nptr)
  

fclose()	closes the file


 bool var = feof(ffptr);
 printf("\n\n%d \n" , var);
 int var2 = ftell(ffptr);
 printf("\n\n%d \n" , var2);










Hard Answer
-----------
File is array (Pointer) Of Bytes ENds with eof
fopen Function Return Pointer data type Beacuse its Input is (File name == string  == Array == Pointer)




Data Hierarchy

Bit < Byte (Group of bits == char )< Fileld (Group of chars meaning something) < Record (Group of related Fildes) < File (Group of related Records) < Database (Group of related Files) 



*/