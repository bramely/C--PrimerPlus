#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void cprimerplus_exercise4_3()
{
	char firstname[20];
	char lastname[20];
	cout << "Enter your first name:";
	cin.getline( firstname, 20);

	cout << "Enter your last name:";
	cin.getline(lastname, 20);

	cout << "Here is the information in a single string:" << strcat(strcat( firstname,","), lastname ) << endl;
}