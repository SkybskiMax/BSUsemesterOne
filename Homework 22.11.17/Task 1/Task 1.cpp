#include <iostream>
#include "FuncString.h"

using namespace std;

int main()
{
	char massive[N];
	char newWords[N][N];
	int k = 0;
	cout << "Input string: \n";
	cin.getline(massive, 255);

	strCreateNewArrayOfWords(massive, newWords, k);	
	for (int i = 0; i < k; i++)
	{
		cout  << newWords[i] << "\n";
	}
	system("pause");
}
