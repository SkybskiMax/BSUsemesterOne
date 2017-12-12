#pragma once
#include <iostream>

using namespace std;

int  conversionCharToInt(char);

int conversionCharToInt(char find)
{
	int a;
	switch (find)
	{
	case 'A':
		a = 10;
		break;
	case 'B':
		a = 11;
		break;
	case 'C':
		a = 12;
		break;
	case 'D':
		a = 13;
		break;
	case 'E':
		a = 14;
		break;
	case 'F':
		a = 15;
		break;
	case '1':
		a = 1;
		break;
	case '2':
		a = 2;
		break;
	case '3':
		a = 3;
		break;
	case '4':
		a = 4;
		break;
	case '5':
		a = 5;
		break;
	case '6':
		a = 6;
		break;
	case '7':
		a = 7;
		break;
	case '8':
		a = 8;
		break;
	case '9':
		a = 9;
		break;
	case '0':
		a = 0;
		break;
	}
	return a;
}
