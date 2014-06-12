#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void cprimerplus_exercise4_4()
{
	string firstname;
	string lastname;

	cout << "Enter your first name:";
	getline(cin, firstname);

	cout << "Enter your last name:";
	getline(cin, lastname);

	cout << "Here is the information in a single string:"\
		<<lastname + "," + firstname << endl;
}