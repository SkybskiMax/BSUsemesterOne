#include <iostream>;
#include <cmath>;
using namespace std;
double result;

double taskOne(int n)
{
	result = 0;
	for (int j = 1; j <= n; j++)
	{
		result += (1.0 / j);
	}
	return result;
}

double taskTwo(int n)
{
	for (int j = 1; j <= n; j++)
	{
		result = pow(2, n);
	}
	return result;
}

double taskThree(int n)
{
	result = 1;
	for (int j = 1; j <= n; j++)
	{
		result *= (1.0 + (1.0 / j / j));
	}
	return result;
}

double taskFour(int n)
{
	result = 0;
	for (int j = 1; j <= n; j++)
	{
		result += (pow(-1, j + 1) / (j*(j + 1)));
	}
	return result;
}

double taskFive(int n)
{
	result = 0;
	for (int j = 1; j <= n; j++)
	{
		result += (1.0 / pow(j, 5));
	}
	return result;
}

double taskSix(int n)
{
	result = 0;
	for (int j = 1; j <= n; j++)
	{
		result += (1.0 / pow((2 * j + 1), 2));
	}
	return result;
}

double taskSeven(int n)
{
	result = 0;
	int num = -1;
	for (int j = 3; j <= n; j += 2)
	{
		result += (double)num / j;
		num = -num;
	}
	return result;
}


int main()
{
	int n, choice;
	while (true)
	{
		cout << "Input natural n: " << endl;
		cin >> n;
		if (n >= 0)
			break;
		else
			cout << "Error! Input proper number!" << endl;
	}
	while (true)
	{
		cout << "What task shall we do? (1-7)" << endl;
		cin >> choice;
		if (choice >= 1 && choice <= 7)
			break;
		cout << "Error! Input proper number" << endl;
	}
	switch (choice)
	{
	case 1: cout << taskOne(n) << endl;
		break;
	case 2: cout << taskTwo(n) << endl;
		break;
	case 3: cout << taskThree(n) << endl;
		break;
	case 4: cout << taskFour(n) << endl;
		break;
	case 5: cout << taskFive(n) << endl;
		break;
	case 6: cout << taskSix(n) << endl;
		break;
	case 7: cout << taskSeven(n) << endl;
		break;
	}
	system("pause");
	return 0;
}