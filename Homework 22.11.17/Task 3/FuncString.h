#pragma once
#include <iostream>
#define N 256

using namespace std;

int strGetLength(char[]);

void strSwap(char &, char &);

void strReverse(char*);

void strDisplay(char[], int);

bool strIsAlphabet(char);

bool strIsLowerAlphabet(char);

int strFindAlphabet(char[], int);

int strFindNotAlphabet(char[], int);

void strToUpper(char[]);

void strCoutEquality(bool);

bool strCheckEquality(char[], char[], bool &);

int strFindRelation(char[], char[]);

void strCoutRelation(int);

void strCopy(char[], char[], int, int);

int strFindIndex(char *, char *, int = 0);

void strReplace(char[], char[], char[]);

void strConCat(char[], char[], int);

void strReplaceBySymbol(char[], char, int, int);

void strDel(char[], char[]);

void transFracPar(int, int, char *);

char conversionIntToChar(int);



int strGetLength(char arr[])
{
	int i = 0;
	while (arr[i])
	{
		i++;
	}
	return i;
}

void strSwap(char & a, char & b)
{
	char temp = a;
	a = b;
	b = temp;
}

void strReverse(char * source)
{
	int length = strGetLength(source);
	for (int i = 0; i < length / 2; i++)
	{
		swap(source[i], source[length - 1 - i]);
	}
}


void strDisplay(char massive[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << massive[i];
	}
}


bool strIsAlphabet(char check)
{
	return ((check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z'));
}

bool strIsLowerAlphabet(char ch)
{
	return(ch >= 'a' && ch <= 'z');
}

int strFindAlphabet(char source[], int position)
{
	int length = strGetLength(source);

	for (int i = position; i < length; i++)
	{
		if (strIsAlphabet(source[i])) return i;
	}

	return -1;
}

int strFindNotAlphabet(char source[], int position)
{
	int length = strGetLength(source);

	for (int i = position; i < length; i++)
	{
		if (!strIsAlphabet(source[i])) return i;
	}

	return -1;
}

void strToUpper(char arr[])
{
	int n = strGetLength(arr);

	for (int i = 0; i < n; i++)
	{
		if (strIsLowerAlphabet(arr[i]))
		{
			arr[i] = arr[i] - ('a' - 'A');
		}
	}
}

void strCoutEquality(bool eq)
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

bool strCheckEquality(char firstStr[], char secondStr[], bool &eq)
{
	for (int i = 0; firstStr[i]; i++)
	{
		if (firstStr[i] == secondStr[i])
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

int strFindRelation(char firstStr[], char secondStr[])
{
	int i = 0, relation = 0;
	strToUpper(firstStr);
	strToUpper(secondStr);
	while (firstStr[i] == secondStr[i])
	{
		i++;
	}
	if (firstStr[i] > secondStr[i])
	{
		relation = 1;
	}
	else if (firstStr[i] < secondStr[i])
	{
		relation = 2;
	}

	return relation;
}

void strCoutRelation(int relation)
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

void strCopy(char source[], char destination[], int from, int to)
{
	if (from < 0) from = 0;
	if (to > strGetLength(source)) to = strGetLength(source);

	for (int i = from, j = 0; i < to; i++, j++)
	{
		destination[j] = source[i];
	}
}

int strFindIndex(char *arr, char * find, int position)
{
	char value = find[0];
	int n = strGetLength(find), length = strGetLength(arr), p = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == value)
		{
			while (p <= n - 1)
			{
				p++;
				if (arr[i + p] != find[p]) break;

			}
			if (p == n) return i;
			else p = 0;
		}
	}
	return -1;
}

void strReplace(char source[], char str[], char replace[])
{
	int n = strFindIndex(source, str);
	int l = strGetLength(str);
	int k = strGetLength(replace);
	char result[N] = "";
	while (n != -1)
	{
		strCopy(source, result, n + l, strGetLength(source));
		strConCat(source, str, n);
		strConCat(source, result, n + k);
		n = strFindIndex(source, str, n + k);
		strReplaceBySymbol(result, '\0', 0, strGetLength(result));
	}
}

void strConCat(char source[], char str1[], int index)
{

	int n = strGetLength(source), l = strGetLength(str1);
	if (index > n) index = n;
	if (n - 1 + index > 0)
	{
		strReplaceBySymbol(source, '\0', index, n);
	}
	for (int i = index, j = 0; j < l; i++, j++)
	{
		source[i] = str1[j];
	}

}

void strReplaceBySymbol(char source[], char symbol, int from, int to)
{
	int n = strGetLength(source);

	for (int i = from; i <= to; i++)
	{
		source[i] = symbol;
	}

}

void strDel(char source[], char str[])
{
	int n = strFindIndex(source, str);
	char result[N] = "";
	while (n != -1)
	{
		strCopy(source, result, n + strGetLength(str), strGetLength(source));
		strConCat(source, result, n);
		n = strFindIndex(source, str, n);
		strReplaceBySymbol(result, '\0', 0, strGetLength(result));
	}
}

char conversionIntToChar(int temp)
{
	char symbol;
	switch (temp)
	{
	case 1:
		symbol = '1';
		break;
	case 2:
		symbol = '2';
		break;
	case 3:
		symbol = '3';
		break;
	case 4:
		symbol = '4';
		break;
	case 5:
		symbol = '5';
		break;
	case 6:
		symbol = '6';
		break;
	case 7:
		symbol = '7';
		break;
	case 8:
		symbol = '8';
		break;
	case 9:
		symbol = '9';
		break;
	case 0:
		symbol = '0';
		break;
	case 10:
		symbol = 'A';
		break;
	case 11:
		symbol = 'B';
		break;
	case 12:
		symbol = 'C';
		break;
	case 13:
		symbol = 'D';
		break;
	case 14:
		symbol = 'E';
		break;
	case 15:
		symbol = 'F';
		break;
	}
	return symbol;
}

void transFracPar(int intPart, int base, char *intPartString)
{
	for (int i = 0; intPart; i++)
	{
		intPartString[i] = conversionIntToChar(intPart%base);
		intPart /= base;
	}
}

void convertToBase(char *intPartString, char *fracPartString, double &number, int base, int accuracy)
{
	int rest;
	int intPart = (int)number;
	double fracPart = (number - intPart);
	int i = 0;

	transFracPar(intPart, base, intPartString);
	strReverse(intPartString);

	fracPartString[i] = ',';
	i++;

	for (; i < accuracy; i++)
	{
		fracPartString[i] = conversionIntToChar((int)((fracPart*base)));
		fracPart *= base;
		fracPart -= (int)fracPart;
	}
	strConCat(intPartString, fracPartString, N);
	strDisplay(intPartString, N);
}