#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void cprimerplus_exercise4_8()
{
	struct pizzamessage{
		string name;
		double diameter;
		double weight;
	};

	int num;
	cout << "How many pieces of pizzamessage you want to be record?";
	cin >> num;
	cin.get();

	pizzamessage *message = new pizzamessage[num];

	for (int i = 0; i < num; i++)
	{
		cout << "Please input the pizza message of the " << i + 1 << "th record:"<< endl;
		cout << "Name:";
		getline(cin,message[i].name);

		cout <<"Diameter:";
		cin >> message[i].diameter;

		cout << "Weight:";
		cin >>message[i].weight;
		cout << endl;

		cin.get();

	}

	for (int i = 0; i < num; i++)
	{
		cout << "the message of the "<< i+1 << "record is:"<< endl;
		cout << "Name:" << message[i].name << endl;
		cout << "Diameter:" << message[i].diameter << endl;
		cout << "Weight:" << message[i].weight << endl;
		cout << endl;
	}

}