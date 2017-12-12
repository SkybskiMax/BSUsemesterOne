#include <iostream>
#include "FuncString.h"

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

	int relation = strFindRelation(firstString, secondString);
	strCoutRelation(relation);

	system("pause");
	return 0;
}