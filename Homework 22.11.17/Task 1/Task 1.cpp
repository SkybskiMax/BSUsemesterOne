#include <iostream>
#include "FuncString.h"

using namespace std;

int main()
{
	char massive[N];
	char newMassive[N] = "";

	cout << "Input string: \n";
	cin.getline(massive, 255);

	strCreateNewArray(massive, newMassive);
	cout << "New string:  \n" << newMassive << endl;
	system("pause");
}