#include <iostream>
#include "FuncString.h"

using namespace std;

int main()
{
	char massive[N];
	char newMassive[N] = "";
	int l;
	cout << "Input string: \n";
	cin.getline(massive, 255);
	cout << "Input word length: \n";
	cin >> l;
	strDeleteWordByLength(massive, l);
	cout << massive << endl;
	system("pause");
	return 0;
}