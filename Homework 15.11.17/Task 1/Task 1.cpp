#include <iostream>
#include "ArrayFunc.h"

using namespace std;

int main()
{
	const int n = 10;
	int range = 100;
	int array[n];

	arrayGenerateRandom(array, n, range);
	cout << "Unsorted array: ";
	arrayDisplay(array, n);
	cout << "Sorted array: ";
	arraySortInclusion(array, n);
	arrayDisplay(array, n);
	system("pause");
	return 0;
}