#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void cprimerplus_exercise4_9()
{
	struct CandyBar
	{
		char name[20];
		double weight;
		int calary;
	};

	cout << "How many do you want to create?";
	int num;
	cin >> num;
	cin.get();

	CandyBar *candies = new CandyBar[num];

	for (int i = 0; i < num; i++ )
	{
		cout << "please input the message:" << endl;
		cout << "name:";
		cin >> candies[i].name;

		cout << "weight:";
		cin >> candies[i].weight;

		cout << "calary:";
		cin >> candies[i].calary;
	}
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		cout << "the message:" << endl;
		cout << "name:" << candies[i].name << endl;
		cout << "weight:" << candies[i].weight << endl;
		cout << "calary:" << candies[i].calary << endl;

		cout << endl;
	}
}