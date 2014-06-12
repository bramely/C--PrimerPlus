#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void cprimerplus_exercise4_10()
{
	cout << "How many times do you want to record?"<< endl;
	int num;
	cin >> num;
	
	double * times = new double[num];

	for (int i = 0; i < num; i++)
	{
		cout << i+1 << " th input:" << endl;
		cin >> times[i];
	}

	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum +=times[i];
	}

	cout << "you have " << num << "records" << endl;
	cout << " your average score is " << sum / num << endl;
}