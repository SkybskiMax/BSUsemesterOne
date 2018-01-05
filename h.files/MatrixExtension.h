#pragma once
#define N 100
#include <iostream>

using namespace std;

void EnterMatrix(int[][N], int, int);

void displayMatrix(int[][N], int, int);

void RandomMatrix(int[][N], int, int, int);

void GenerateMatrixA(int[][N], int, int, int);

void Swap(int&, int&);

void centralSymmetry(int[][N], int);

void swapSquares(int[][N], int);

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
	//по строкам быстрее

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
//i - строка, j - столбец
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
	b = a;
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

void swapSquares(int matrix[][N], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			swap(matrix[i][j], matrix[i][j + 2]);
		}
	}
}