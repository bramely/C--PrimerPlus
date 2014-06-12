#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void cprimerplus_exercise4_6()
{
	struct CandyBar
	{
		char name[20];
		double weight;
		int calary;
	};

	CandyBar snack[3] = {
		{"Mocha Munch", 2.3, 350},\
		{"Mocha Munch", 2.3, 350},\
		{"Mocha Munch", 2.3, 350},\
	};
	for (int i = 0; i < 3; i++)
	{
		cout << "Name:" << snack[i].name << endl;
		cout << "Weight:" << snack[i].weight << endl;
		cout << "calary:" << snack[i].calary << endl;
		cout << endl;
	}
	
}