#include <iostream>;
#include "ArrayFunc.h";
using namespace std;

int main()
{
	const int N = 100;
	int array[N];
	int range = 100;
	int equal = 0, greater = 0, less = 0;
	GenerateRandomArray(array, N, range);
	DisplayArray(array, N);
	SignOfSequenceArray(array, N, equal, less, greater);
	TypeOfSequenceArray(equal, less, greater);
	system("pause");
	return 0;
}
