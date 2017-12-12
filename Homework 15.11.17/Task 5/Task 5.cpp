#include <iostream>
#include "FuncString.h"

using namespace std;

int main()
{
	int const N = 256;
	char substring[N] = "Hello";
	char replace[N] = "Good";
	char result[N] = "";
	char source[N] = "  ,, Hello, world hello omg asfgewgwecv+, Hello";
	char symbol = 'X';
	strReplace(source, substring, replace);
	cout << source << endl;
	system("pause");
}