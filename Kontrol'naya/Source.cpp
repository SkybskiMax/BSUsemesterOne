#include <iostream>
#include "FuncArray.h"
//Variant 1
using namespace std;

int main()
{
	int const N=256;
	int A[N], pos = 0, neg = 0;
	int n = 20;
	int negPos = 0, posPos = 0;
	int newA[N];
	cout << "Input number of elements: " << endl;
	cin >> n;
	arrayGenerateRandom(A, n, 50);
	arrayDisplay(A, n);
	arrayFindMaxAndMin(A, n, pos, neg, negPos, posPos);
	getAnswer(pos, neg);
	system("pause");

	cout << "\nSum: " << arraySumFromPosToNeg(A, n, negPos, posPos) << endl;
	system("pause");

	arrayDeleteZeroElements(A, n);
	cout << "\nArray without zeros: " << endl;
	arrayDisplay(A, n);
	system("pause");

	arrayArrangeElements(A, newA, n);
	cout << "\nNew arranged array: " << endl;
	arrayDisplay(newA, n);
	system("pause");
}