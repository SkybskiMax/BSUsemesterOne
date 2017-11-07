#include <iostream>;
using namespace std;

//Найти наименьшее трехзначное из чисел Фибоначчи

int fib(int i)
{
	if (i < 1) return 0;
	if (i == 1) return 1;
	return fib(i - 1) + fib(i - 2);
}
int main()
{
	int i = 0;
	while (i < 50)
	{
		cout << fib(i) << endl;
		i++;
		if (i == 12)
			cout << "\t\t This one!  ";
	}
	system("pause");
	return 0;
}