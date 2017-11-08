#include <iostream>
using namespace std;

void hex();

int main()
{
	hex();
	system("pause");
}

void hex()
{
	int rest10, hex, i = 0;
	char symbol;
	long long int number;
	while (true)
	{
		cout << "Enter number ";
		cin >> number;
		cout << "Enter symbol: ";
		cin >> symbol;
		switch (symbol)
		{
		case '1':
			hex = 1;
			break;
		case '2':
			hex = 2;
			break;
		case '3':
			hex = 3;
			break;
		case '4':
			hex = 4;
			break;
		case '5':
			hex = 5;
			break;
		case '6':
			hex = 6;
			break;
		case '7':
			hex = 7;
			break;
		case '8':
			hex = 8;
			break;
		case '9':
			hex = 9;
			break;
		case 'A':
			hex = 10;
			break;
		case 'B':
			hex = 11;
			break;
		case 'C':
			hex = 12;
			break;
		case 'D':
			hex = 13;
			break;
		case 'E':
			hex = 14;
			break;
		case 'F':
			hex = 15;
			break;
		default:
			hex = 100;
		}
		if (hex < 1 || hex>15)
		{
			cout << "Input proper symbol! " << endl;
			system("pause");
			system("cls");
		}
		else
			break;
	}
	while (number)
	{
		rest10 = number % 16;
		if (rest10 == hex)
			i += 1;
		number /= 16;
	}
	cout << "Number of symbol " << symbol << " : " << i << endl;
}

