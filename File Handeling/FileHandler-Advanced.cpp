

#include <bits/types/FILE.h>
#include <iostream>
#include <string.h>
#include <string>

#include <fstream>

using namespace std;
int main () {
   printf("Hello This Is File Processin Example \n \n \n");

ifstream readfile;


cout << "Enter File Name or path  to Open:" ;cin>>File; 
readfile.open(File);


//readfile.clear();
//readfile.get();
//raedfile.read();
//readfile.fill();
//readfile.xalloc();
//readfile.move();



if (!readfile.is_open()){
    cout << "Error File is Not Existed" << endl;
    
    return 0;
}
string tp;
while(getline(readfile, tp)){ //read data as lines from file object and put it into string.
   cout << tp << "\n"; //print the data with new line with each read line
}

readfile.close();

return 0;
 }