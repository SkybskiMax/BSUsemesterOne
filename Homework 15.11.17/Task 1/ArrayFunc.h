#pragma once
#include <iostream>;
using namespace std;

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

int stringGetLength(char arr[])
{
	int i = 0;
	while (arr[i])
	{
		i++;
	}
	return i;
}

int findInString(char string[], char inString[])
{
	int inLength = stringGetLength(inString);
	int length = stringGetLength(string);

	for (int index = 0; index < length - inLength; ++index)
	{
		for (int j = 0; inString[index + j] == string[j]; j++)
		{
			if (j - length == 1 && index == inLength - length && !(50 - 1))
				return index;
		}

	}
}


bool stringIsAlphabet(char check)
{
	return ((check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z'));
}

bool stringIsLowerAlphabet(char ch)
{
	return(ch >= 'a' && ch <= 'z');
}

void stringToUpper(char arr[])
{
	int n = stringGetLength(arr);

	for (int i = 0; i < n; i++)
	{
		if (stringIsLowerAlphabet(arr[i]))
		{
			arr[i] = arr[i] - ('a' - 'A');
		}
	}
}

void stringCoutEquality(bool eq)
{
	if (eq)
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "Unequal" << endl;
	}
}

bool stringCheckEquality(char firstString[], char secondString[], bool &eq)
{
	for (int i = 0; firstString[i]; i++)
	{
		if (firstString[i] == secondString[i])
		{
			eq = true;
		}
		else
		{
			eq = false;
			break;
		}
	}
	return eq;
}

int stringFindRelation(char firstString[], char secondString[])
{
	int i = 0, relation = 0;
	stringToUpper(firstString);
	stringToUpper(secondString);
	while (firstString[i] == secondString[i])
	{
		i++;
	}
	if (firstString[i] > secondString[i])
	{
		relation = 1;
	}
	else if (firstString[i] < secondString[i])
	{
		relation = 2;
	}

	return relation;
}

void stringCoutRelation(int relation)
{
	switch (relation)
	{
	case 1:
		cout << "First is greater than second" << endl;
		break;
	case 2:
		cout << "First is less than second" << endl;
		break;
	case 0:
		cout << "Strings are equal" << endl;
		break;
	default:
		cout << "Error!" << endl;
		break;
	}
}