#pragma once
#include <iostream>
#define N 256


using namespace std;

void EnterMatrix(int[][N], int, int);

void displayMatrix(int[][N], int, int);

void RandomMatrix(int[][N], int, int, int);

void GenerateMatrixA(int[][N], int, int, int);

void Swap(int&, int&);

void centralSymmetry(int[][N], int);

void swapMax(int[][N], int, int);

int matrixFindMaxElement(int [][N], int, int, int&, int&, int);

void matrixSortRest(int [][N], int, int);

void matrixBubbleSort(int [][N], int, int, int, int);

void matrixDiagonalSymmetry(int [][N], int, int);
 
int matrixSumInRow(int [][N], int, int, int);


void EnterMatrix(int matrix[][N], int n, int m)
{
	//по строкам быстрее

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a [" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> matrix[i][j];
		}
	}
}

void displayMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void RandomMatrix(int matrix[][N], int n, int m, int k)
{
	//по строкам быстрее

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % k;
		}
	}
}


void GenerateMatrix(int matrix[][N], int n, int m, int k)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = i + 1;
		}
	}
}

void GenerateMatrixA(int matrix[][N], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			matrix[i][j] = n - i + j;
		}
	}
}

void GenerateMatrixB(int matrix[][N], int n)
{
	int k = (n % 2) ? n/2+1 : n/2;
	{

	}
	for (int i = 0; i < k; i++)
	{
		for (int j = i; j < n - i; j++)
		{
			matrix[i][j] = 1;
		}
	}
	for (int i = k; i < n; i++)
	{
		for (int j = n-1-i; j <= i; j++)
		{
			matrix[i][j] = 1;
		}
	}
}

void Transpose(int matrix[][N], int n)
//i - строка, j - столбец
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			swap (matrix[i][j], matrix[j][i]);
		}
	}
}

void Swap(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void centralSymmetry(int matrix[][N], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			swap(matrix[i][j], matrix[n - i - 1][n - j - 1]);
		}
	}
}

void swapMax(int matrix[][N], int n, int m)
{
	int iMax;
	int p = 0;
	int jMax;
	for (int i = 0, k = 0; i < n; i++)
	{
		for (int j = 0; p < i + 1; p++)
		{
			int max = matrixFindMaxElement(matrix, i, m, iMax, jMax, p);
			Swap(matrix[iMax][jMax], matrix[i][k]);
			k++;
		}
		p = 0;
		k = 0;
	}
}

int matrixFindMaxElement(int matrix[][N], int i, int m, int& iMax, int& jMax, int p)
{
	int j = p;
	int max = matrix[i][j];
	for (int k = 0; j < m; j++)
	{
		if (matrix[i][j] > max)
		{
			max = matrix[i][j];
			iMax = i;
			jMax = j;
		}
	}
	return max;
}

void matrixSortRest(int matrix[][N], int n, int m)
{
	int b = 1;
	for (int i = 0; i < n; i++)
	{
		matrixBubbleSort(matrix, n, m, i, b);
		b++;
	}
}

void matrixBubbleSort(int matrix[][N], int n, int m, int i, int b)
{
	bool swap = true;
	for (int k = 1; (k <= m) && swap; k++)
	{
		swap = 0;
		int temp;
		for (int j = b; j < m; j++)
		{
			if (matrix[i][j + 1] < matrix[i][j])
			{
				temp = matrix[i][j];
				matrix[i][j] = matrix[i][j + 1];
				matrix[i][j + 1] = temp;
				swap = 1;
			}
		}
	}
	return;
}

void matrixDiagonalSymmetry(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = (m / 2) + i; j < m; j++)
		{
			swap(matrix[i][j], matrix[n - i - 1][m - j - 1]);
		}
	}
}

int matrixSumInRow(int matrix[][N], int m, int i, int row)
{
	int sum = 0;
	for (int j = 0; j < m; j++)
	{
		sum += abs(matrix[row][j]);
	}
	return sum;
}


void matrixSwapRows(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			swap(matrix[i][j], matrix[n - i - 1][j]);
	}
}
/*void arraySortBubble(int matrix[][N], int n, int m, int row)
{
bool swap = true;
for (int k = 1; (k <= n) && swap; k++)
{
swap = 0;
int temp;

for (int i = 0; i < n; i++)
{
if (matrixSumInRow(matrix, m, i, row) < matrixSumInRow(matrix, m, i + 1, row + 1))
{
for (int i = 0; i < m; i++)
{
Swap(matrix[row][i], matrix[row + 1][i]);
}
row++;
swap = true;
}
}
}
return;
}*/