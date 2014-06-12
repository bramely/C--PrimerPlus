#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void cprimerplus_exercise4_2()
{
	string name;
	string dessert;
	cout << "Enter your name:" << endl;
	getline( cin, name);

	cout << "Enter your favourite dessert:" << endl;
	getline(cin ,dessert);

	cout << "I have some delicious " << dessert << " for you," << name << endl;

}