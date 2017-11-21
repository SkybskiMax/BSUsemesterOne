#include <iostream>
#include "ArrayFunc.h"

using namespace std;

int main()
{
	char firstString[50] = "";
	char secondString[50] = "";
	bool eq = false;

	cout << "Input first string: " << endl;
	cin >> firstString;
	cout << "Input second string: " << endl;
	cin >> secondString;

	stringCheckEquality(firstString, secondString, eq);
	stringCoutEquality(eq);
	system("pause");
	return 0;
}
