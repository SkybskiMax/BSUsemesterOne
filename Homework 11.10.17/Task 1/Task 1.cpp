#include <iostream>
using namespace std;

//������ � ���������� ����� ���������� �����(long long).���������� ������� ���� 0, 1, �, 9 �������� ��� �����.
//����� ���������� � ���������� ����� �����.

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