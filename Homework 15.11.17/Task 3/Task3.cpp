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

	int relation = stringFindRelation(firstString, secondString);
	stringCoutRelation(relation);

	system("pause");
	return 0;
}