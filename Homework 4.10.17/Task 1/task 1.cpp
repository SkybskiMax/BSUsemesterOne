#include<iostream>
#include<cmath>
using namespace std;

double func(double, double);

int main()
{
	double x, eps;
	cout << "Input x>0 "; 
	cin >> x;
	system("cls");
	cout << "Input accuracy: ";
	cin >> eps;
	system("cls");

	cout << func(x,eps) << endl;
	cout << sqrt(x) << endl;


	system("pause");
	return 0;
}

double func(double x, double eps)
{
	double y_next = x, y_prev = 1;
	for (int k = 1; fabs(y_prev-y_next) > eps; k++)
	{
		y_prev = y_next;
		y_next = (y_prev + x / y_prev) / 2;
	}
	return y_next;
}
