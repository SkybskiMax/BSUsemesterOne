#include<iostream>
using namespace std;

double cosx(double, double);

int main()
{
	double x, eps;
	while (true)
	{
		while (true)
		{
			cout << "Enter x>0" << endl;
			cin >> x;
			system("cls");
			cout << "Enter eps " << endl;
			cin >> eps;
			system("cls");
			if (eps > 0 && eps < 1 && x>0)
			{
				break;
			}
			cout << "Invalid data! Try again!";
			system("pause");
			system("cls");
		}
		cout << "\tsum" << "\t" << "Cos" << endl << "\t" << x << "\t" << cos(x) << endl;
		system("pause");
		system("cls"); 
		
	}
	return 0;
}

double cosx(double eps, double x)
{
	double sum = 0, term = 1;
	for (int i = 0; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term*x*x / (2 * i + 1) / (2 * i + 2);
	}
	return sum;
}