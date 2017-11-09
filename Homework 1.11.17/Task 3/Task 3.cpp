#include <iostream>
using namespace std;

int hexadecimal(char);
void countSymbol(long long int&, char);

int main()
{
	long long int number;
	char symbol;
	cout << "Enter number ";
	cin >> number;
	cout << "Enter symbol: ";
	cin >> symbol;
	countSymbol(number, symbol);
	system("pause");
}

int hexadecimal(char symbol)
{
	int hexNum;
	while (true)
	{
		switch (symbol)
		{
		case '1':
			hexNum = 1;
			break;
		case '2':
			hexNum = 2;
			break;
		case '3':
			hexNum = 3;
			break;
		case '4':
			hexNum = 4;
			break;
		case '5':
			hexNum = 5;
			break;
		case '6':
			hexNum = 6;
			break;
		case '7':
			hexNum = 7;
			break;
		case '8':
			hexNum = 8;
			break;
		case '9':
			hexNum = 9;
			break;
		case 'A':
			hexNum = 10;
			break;
		case 'B':
			hexNum = 11;
			break;
		case 'C':
			hexNum = 12;
			break;
		case 'D':
			hexNum = 13;
			break;
		case 'E':
			hexNum = 14;
			break;
		case 'F':
			hexNum = 15;
			break;
		default:
			hexNum = 100;
		}
		if (hexNum < 1 || hexNum>15)
		{
			cout << "Input proper symbol! " << endl;
			system("pause");
			system("cls");
		}
		else
			break;
	}
	return hexNum;
}

void countSymbol(long long int &number, char symbol)
{
	int i = 0;
	int rest10;
	int hexNum = hexadecimal(symbol);
	while (number)
	{
		rest10 = number % 16;
		if (rest10 == hexNum)
			i += 1;
		number /= 16;
	}
	cout << "Number of symbol " << symbol << " : " << i << endl;
}
