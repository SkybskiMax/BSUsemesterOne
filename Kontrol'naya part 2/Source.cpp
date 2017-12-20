#include "MatrixExtension.h"

using namespace std;

//Variant 1 (3 tasks done)

int main()
{
	int matrix[N][N] = { 0 };
	int n = 6, m = 8, k = 10;
	int row = 0;

	RandomMatrix(matrix, n, m, k);
	system("cls");
	cout << "Source matrix" << endl;
	displayMatrix(matrix, n, m);

	cout << "New matrix" << endl;
	swapMax(matrix, n, m);
	displayMatrix(matrix, n, m);

	cout << "Sorted matrix" << endl;
	matrixSortRest(matrix, n, m);
	displayMatrix(matrix, n, m);

	cout << "Symmetry matrix" << endl;
	matrixDiagonalSymmetry(matrix, n, m);
	displayMatrix(matrix, n, m);

	system("pause");
}