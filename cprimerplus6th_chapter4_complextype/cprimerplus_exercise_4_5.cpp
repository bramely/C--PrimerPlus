#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void cprimerplus_exercise4_5()
{
	struct CandyBar
	{
		char name[20];
		double weight;
		int calary;
	};

	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << "Name:" << snack.name << endl;
	cout << "Weight:" << snack.weight << endl;
	cout << "calary:" << snack.calary << endl;
}