#pragma once
#include <iostream>

using namespace std;

void arrayGenerateRandom(int[], int, int);

void arrayDisplay(int[], int);

void arraySortBubble(int[], int);

void arraySortInclusion(int array[], int n);

int arrayIfLessThan(int[], int);

void arrayCountElement(int[], int);

void arraySignOfSequence(int[], int, int &, int &, int &);

void arrayTypeOfSequence(int, int, int);

void arrayFindMaxAndMin(int[], int, int&, int&, int&, int&);

int arraySumFromPosToNeg(int[], int, int, int);

void arrayDeleteZeroElements(int[], int&);

void arrayArrangeElements(int[], int[], int);

void getAnswer(int, int);

void arrayGenerateRandom(int array[], int N, int range)
{
	for (int i = 0; i < N; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}

void arrayDisplay(int array[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

void arraySortBubble(int array[], int N)
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

void arraySortInclusion(int array[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int value = array[i];
		int index = i;
		while ((index > 0) && (array[index - 1] > value))
		{
			array[index] = array[index - 1];
			index--;
		}
		array[index] = value;
	}
}

int arrayIfLessThan(int array[], int N)
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

void arrayCountElement(int array[], int N)
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

void arraySignOfSequence(int array[], int N, int &equal, int &less, int &greater)
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

void arrayTypeOfSequence(int equal, int less, int greater)
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

void arrayFindMaxAndMin(int A[], int n, int &pos, int &neg, int &negPos, int& posPos)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[j] < 0)
			{
				neg = A[j];
				negPos = j;
			}
		}
		if (A[i] > 0)
		{
			pos = A[i];
			posPos = i;
			break;
		}
	}
}

void getAnswer(int pos, int neg)
{
	if (pos == 0)
	{
		cout << "Zero positive elements!" << endl;
	}
	if (neg == 0)
	{
		cout << "Zero negative elements!" << endl;
	}
	if (pos > 0 || neg < 0)
	{
		cout << "First positive element: " << pos << endl << "Last negative element: " << neg << endl;
	}
}

int arraySumFromPosToNeg(int A[], int n, int negPos, int posPos)
{
	int sum = 0;
	for (int i = posPos + 1; i < negPos; i += 2)
	{
		if ((A[i] > 0) && (A[i] % 2 != 0))
			sum += A[i];
	}
	return sum;
}

void arrayDeleteZeroElements(int A[], int &n)
{
	int length = n;
	for (int i = 0; i < length; i++)
	{
		if (A[i] == 0)
		{
			for (int j = i; j < length; j++)
			{
				A[j] = A[j + 1];
			}
			n--;
			i--;
		}
	}
}

void arrayArrangeElements(int A[], int newA[], int n)
{
	int numberOfNegElements = 0;
	for (int k = 0; k < n; k++)
	{
		if (A[k] < 0)
		{
			numberOfNegElements++;
		}
	}
	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		if (A[i] < 0)
		{
			newA[j] = A[i];
			j++;
		}
		if (A[i] > 0)
		{
			newA[k + numberOfNegElements] = A[i];
			k++;
		}
	}
}