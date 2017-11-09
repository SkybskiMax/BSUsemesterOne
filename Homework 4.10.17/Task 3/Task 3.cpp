#include<iostream>

using namespace std;

double sinTaylor(double, double);

int main()
{
	double x, eps, a, b;
	while (true)
	{
		cout << "Enter 0 < epsilon < 1 :";
		cin >> eps;
		if (eps > 0 && eps < 1)
		{
			break;
		}
		cout << "Invalid data! Try again!";
		system("pause");
		system("cls");
	}
	while (true)
	{
		cout << "Enter borders (a,b): " << endl;
		cin >> a >> b;
		cout << "Enter x ";
		cin >> x;
		if (x > a && x < b)
		{
			break;
		}
		cout << "Error! Input proper numbers" << endl;
	}
	system("cls");
	cout << "x" << "\t" << "sinTaylor" << "\t"<< "sin" <<endl;
	cout << x << "\t" << sinTaylor(x, eps) << "\t" << sin(x) << endl;
	system("pause");
	return 0;
}

double sinTaylor(double x, double eps)
{
	double term = x, sum = 0;
	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i) / (2 * i + 1);
	}
	return sum;
}