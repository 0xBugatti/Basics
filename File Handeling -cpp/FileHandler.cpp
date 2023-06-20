#include <bits/types/FILE.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main () {
   printf("Hello This Is File Processin Example \n \n \n");

ifstream readfile;
ofstream writefile;

cout << "Enter File Name or path  to Open:" ;cin>>File; 





readfile.open(File);
if (!readfile.is_open()){
    cout << "Error File is Not Existed" << endl;
    
    return 0;
}
cin.
char ch;

while (!readfile.eof()){
readfile >> ch;
cout <<ch;
}
readfile.close();
return 0;
 }
 /*
Files is a sequance of Bytes ends with eof (End Of File Marker) Like String (sequance of Bytes ends with null terminator)

is_open
end_of_file

write {Edit,Creation} 
ofstream var("Path", ios::app );
var << "write in File  \n";
var.close(); //Unload From memory

or

ofstream outfile;



if(outfile.is_open())
outfile.close();
outfile << "write in File  \n";
outfile.open("file.dat", ios::app ); //load to memory
//cchain rules : outfile.open("file.dat", ios::out | ios::app );
	
ios::ate :Open a file for output and move the read/write control to the end of the file. RW
ios::in :Open a file for reading. R
ios::out:Open a file for writing. W
ios::app:Append mode. All output to that file to be appended to the end.
ios::trunc:If the file already exists, its contents will be truncated before opening the file. Default


read
ifstream readfile;
outfile.open("file.dat");
*/
