#include <iostream>
#include "FuncString.h"

using namespace std;

int main()
{
	double number;
	int base;
	int accuracy;
	char intPartString[N] = "";
	char fracPartString[N] = "";

	cout << "Input number: " << endl;
	cin >> number;
	system("cls");
	while (true)
	{
		cout << "Input base to convert: " << endl;
		cin >> base;
		if ((2 <= base &&  base <= 16)) break;
		system("cls");
		cout << "Sorry, base should be from 2 to 16! Try again! " << endl;
	}
	system("cls");
	cout << "Input accuracy: " << endl;
	cin >> accuracy;
	system("cls");
	cout << "Number in decimal system: " << number << endl << "Number in " << base << "-system: ";

	convertToBase(intPartString, fracPartString, number, base, accuracy);
	system("pause");
	return 0;
}