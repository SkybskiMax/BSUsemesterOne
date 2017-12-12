#pragma once
#include <iostream>

using namespace std;

int strGetLength(char[]);

bool strIsAlphabet(char);

bool strIsLowerAlphabet(char);

void strToUpper(char[]);

void strCoutEquality(bool);

bool strCheckEquality(char[], char[], bool &);

int strFindRelation(char[], char[]);

void strCoutRelation(int);

void strCopy(char[], char[], int, int);

int strFindIndex(char *, char *, int =0);

void strReplace(char[], char[], char[]);

void strConCat(char[], char[], int);

void strReplaceBySymbol(char[], char, int, int);

void strDel(char[], char[]);


int strGetLength(char arr[])
{
	int i = 0;
	while (arr[i])
	{
		i++;
	}
	return i;
}

bool strIsAlphabet(char check)
{
	return ((check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z'));
}

bool strIsLowerAlphabet(char ch)
{
	return(ch >= 'a' && ch <= 'z');
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
	int const N = 256;
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
	int const N = 256;
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