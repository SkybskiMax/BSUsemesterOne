#include <iostream>;
#include "ArrayFunc.h";
using namespace std;

int main()
{
	const int N = 100;
	int array[N];
	int range = 100;
	GenerateRandomArray(array, N, range);
	SortBubbleArray(array, N);
	DisplayArray(array, N);
	system("pause");
	return 0;
}