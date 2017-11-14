#include <iostream>
using namespace std;

long long int swapNumber(long long int);
void isPalindrome(long long int);

int main()
{
	long long int number;
	cout << "Input number: " << endl;
	cin >> number;
	isPalindrome(number);
	system("pause");
}

long long int swapNumber(long long int number)
{
	long long int swappedNumber=0;
	int c = 1;
	while (number)
	{
		swappedNumber = swappedNumber*c + number % 10;
		c = 10;
		number /= 10;
	}
	return swappedNumber;
}

void isPalindrome(long long int number)
{
	if (number==swapNumber(number))
		cout << "Palindrome!" << endl;
	else
		cout << "Not a palindrome!" << endl;
}