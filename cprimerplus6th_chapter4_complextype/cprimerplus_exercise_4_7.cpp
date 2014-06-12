#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void cprimerplus_exercise4_7()
{
	struct pizzamessage{
        string name;
		double diameter;
		double weight;
	};

	pizzamessage message;
	cout << "Please input the message of pizza!"<<endl;
	cout << "Name:";
	getline( cin, message.name);
	
	cout <<"Diameter:";
	cin >> message.diameter;

	cout << "Weight:";
	cin >> message.weight;

	cout << "the message of the record is:"<< endl;
	cout << "Name:" << message.name;
	cout << "Diameter:" << message.diameter;
	cout << "Weight:" << message.weight;
}