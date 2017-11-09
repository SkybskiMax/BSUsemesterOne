#include <iostream>
using namespace std;

//Palindrome
int palindrome(int);

int main()
{
	int number = 0;
	palindrome(number);
	//if (palindrome(number))
	//	cout << number << " " << "is palindrome!";
	//else cout << number << " " << "is not palindrome!";
	system("pause");
	return 0;
}

//int palindrome(int number)
//{
//	int i, digit;
//	cout << "Input number " << endl;
//	cin >> number;
//	for (i = 0; number > 0; ++i)
//	{
//		digit = number % 10;
//		cout << digit;
//		number /= 10;
//	}
//	return 0;
//}

int palindrome(int number)
{
	int i,digit;
	cout << "Input number " << endl;
	cin >> number;
	for (i = 0; number > 0; ++i)
	{
		digit = number % 10;
		cout << digit;
		number /= 10;
	}
	return ;
}