#pragma once
#include <iostream>;
using namespace std;

void GenerateRandomArray(int array[], int N, int range)
{
	for (int i = 0; i < N; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}

void DisplayArray(int array[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

void SortBubbleArray(int array[], int N)
{
	bool swap = true;
	for (int k = 1; (k <= N) && swap; k++)
	{
		swap = 0;
		int temp;
		for (int j = 0; j < (N - 1); j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
			}
		}
	}
	return;
}

int ifLessThanArray(int array[], int N)
{
	int p, numberOf = 0;
	cout << "Input number: " << endl;
	cin >> p;
	for (int k = 0; k <= (N - 1); k++)
	{
		if (array[k] < p)
		{
			++numberOf;
		}
	}
	return numberOf;
}

void ElementArray(int array[], int N)
{
	int zero = 0, plus = 0, minus = 0;
	for (int k = 0; k <= N - 1; k++)
	{
		if (array[k] > 0)
			++plus;
		else
			if (array[k] < 0)
				++minus;
			else
				++zero;
	}
	cout << "Number of positive integers: " << plus << endl;
	cout << "Number of negative integers: " << minus << endl;
	cout << "Number of zero: " << zero << endl;
	return;
}

void SignOfSequenceArray(int array[], int N, int &equal, int &less, int &greater)
{
	for (int k = 0; k <= N - 1; ++k)
	{
		if (array[k] < array[k + 1])
			++less;
		else
			if (array[k] > array[k + 1])
				++greater;
			else
				++equal;
	}
}

void TypeOfSequenceArray(int equal, int less, int greater)
{
	if (less > 0 && greater == 0)
		if (equal == 0)
			cout << "Strictly decreasing sequence" << endl;
		else
			cout << "Non-strictly decreasing sequence" << endl;
	if (less == 0 && greater > 0)
		if (equal == 0)
			cout << "Strictly increasing sequence" << endl;
		else
			cout << "Non-strictly increasing sequence" << endl;
	if (less > 0 && greater > 0)
		cout << "Not a sequence" << endl;
}