#include <iostream>
using namespace std;

//Ввести с клавиатуры целое десятичное число(long long).Определить сколько цифр 0, 1, …, 9 содержит это число.
//Найти наибольшую и наименьшую цифры числа.

int digits(long long int);
int main()
{
	while (true)
	{
		int number, i;
		cout << "Input number: " << endl;
		cin >> number;
		cout << digits(number) << endl;
		system("pause");
		system("cls");
	}
}
int digits(long long int number)
{
	int i;
	for (i = 0; number >= 1; ++i)
	{
		number /= 10;
	}
	return i;
}