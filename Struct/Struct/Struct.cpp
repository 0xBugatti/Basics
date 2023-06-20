// Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>
using namespace std;
struct User
{
	int ID = 0;
	char Category;
	string Password;
};
int main()
{
	// Struct :is User Defined DataType Consists of set of data Have Fubdemental Types
	//Implmemnting it

	//Using It:
	User user1019;
	user1019.ID= 41452;
	user1019.Category = 'C';
	user1019.Password = "ADRWXCEC@Y1241";
	cout << "User :" << user1019.ID << "\nCategory is: " << user1019.Category << "\nPassword is: " << user1019.Password;

	//Pointer to Struct Can Be Used To  Intialize New Struct and Access its Elemnts  but by -> not . and this will be done automatically or by (*structpte).ID = 5;
	struct User user4745;
	struct User* structptr = &user4745;
	structptr->ID = 872532;
	cout << "\nNew Struct's ID (was set by Using Pointer to This struct) is : "<< structptr->ID << endl;
}


