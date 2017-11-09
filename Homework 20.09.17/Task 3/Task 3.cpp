#include <iostream>
using namespace std;

void numberWritten(int);

int main()
{
	int number;
	cout << "Enter number from 0 to 100: " << endl;
	cin >> number;
	numberWritten(number);
	system("pause");
	return 0;
}

void numberWritten (int number)
{
	if (number > 0 && number < 101)
	{
		int a = number / 10;
		int b = number % 10;
		switch (a)
		{
		case 0:
			break;
		case 1: switch (b)
		{
		case 0: cout << "ten" << endl;
			break;
		case 1: cout << "eleven" << endl;
			break;
		case 2: cout << "twelve" << endl;
			break;
		case 3: cout << "thirteen" << endl;
			break;
		case 4: cout << "fourteen" << endl;
			break;
		case 5: cout << "fifteen" << endl;
			break;
		case 6: cout << "sixteen" << endl;
			break;
		case 7: cout << "seventeen" << endl;
			break;
		case 8: cout << "eighteen" << endl;
			break;
		case 9: cout << "nineteen" << endl;
			break;
		}
				break;
		case 2: cout << "twenty" << " ";
			break;
		case 3: cout << "thirty" << " ";
			break;
		case 4: cout << "fourty" << " ";
			break;
		case 5: cout << "fifty" << " ";
			break;
		case 6: cout << "sixty" << " ";
			break;
		case 7: cout << "seventy" << " ";
			break;
		case 8: cout << "eighty" << " ";
			break;
		case 9: cout << "ninety" << " ";
			break;
		case 10: cout << "one hundred" << endl;
			break;
		}
		if (a != 1)
		{
			switch (b)
			{
			case 0: cout << " ";
				break;
			case 1: cout << "one" << endl;
				break;
			case 2: cout << "two" << endl;
				break;
			case 3: cout << "three" << endl;
				break;
			case 4: cout << "four" << endl;
				break;
			case 5: cout << "five" << endl;
				break;
			case 6: cout << "six" << endl;
				break;
			case 7: cout << "seven" << endl;
				break;
			case 8: cout << "eight" << endl;
				break;
			case 9: cout << "nine" << endl;
				break;
			}
		}
	}
	else
	{
		cout << "Enter proper number! " << endl;
	}
}