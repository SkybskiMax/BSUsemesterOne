#include <iostream>
#include <string>
using namespace std;

string simple(int);

int main()
{
	while (true)
	{
		int x = 0;
		cout << "Input x>0 ";
		cin >> x;
		cout << simple(x) << endl;
		system("pause");
		system("cls");
	}
	return 0;
}

string simple(int x)
{
	for (int i = 2; i <= x - 1; ++i)
	{
		if (x%i == 0)
			return "Not simple!";
			break;

	}
	return "Simple!";
}