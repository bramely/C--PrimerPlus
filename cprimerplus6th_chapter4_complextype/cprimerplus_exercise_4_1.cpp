#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void cprimerplus_exercise4_1()
{
	string firstname, lastname;
	char lettergrade;
	int age;
	cout << "What is you first name?";
	getline( cin, firstname);

	cout << "What is your last name?";
	getline(cin ,lastname);

	cout <<  "What letter grade do you deserve?";
	cin >> lettergrade;

	cout << "What is your age?";
	cin >> age;

	cout << "Name:" << lastname << "," << firstname << endl;
	cout << "Grade:"<< char (lettergrade + 1) << endl;
	cout << "Age:" << age << endl;
}