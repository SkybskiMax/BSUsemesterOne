#include <iostream>
#include "FuncString.h"

using namespace std;

int main()
{
	char firstString[50] = "";
	char secondString[50] = "";

	cout << "Input first string: " << endl;
	cin >> firstString;
	cout << "Input second string: " << endl;
	cin >> secondString;

	cout << "First index is: " << strFindIndex(firstString, secondString) << endl;
	system("pause");
	return 0;
}