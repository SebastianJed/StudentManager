#include <iostream>
#include <string>
#include <sstream>
#include "Student.h"

// TO DO: add class to manage students (class to contain all methods mentioned below)

using namespace std;

int main()
{
	string choosenOption;
	char option;
	

	for (;;)
	{
		cout << "MAIN MENU" << endl;
		cout << "-----------------" << endl;
		cout << "1. Add Student" << endl;
		cout << "2. Sort Students by ID" << endl;
		cout << "3. Delete Student" << endl;
		cout << "4. Exit" << endl;
		fflush(stdin);
        //TO DO: add method to print list of students
		cout << endl << "Select option: ";
		getline(cin, choosenOption);
		system("clear");
        
		stringstream(choosenOption) >> option;
			
		switch (option)
		{
		case '1':
		//	TO DO: add method  to create new student record
			break;

		case '2':
		//	TO DO: add method  to sort students list by ID
			break;

		case '3':
	    // TO DO: add method to erase record
			break;
	
        case '4':
			exit(0);

		default: 
			cout << "Enter value between 1 and 4!";
			getchar();
			break;
		}
		system("clear");
	}

	return 0;
}
