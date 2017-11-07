#include <iostream>;
#include <string>;
using namespace std;
void binaryZeroOne(signed long long int, char, char);
void swap();

int main()
{
	while (true)
	{
		int inNumber = 0;
		char zero = '0', one = '1';
		cout << "Input number ";
		cin >> inNumber;
		binaryZeroOne(inNumber, zero, one);
		system("pause");
	}
}

void binaryZeroOne(signed long long int inNumber, char zero, char one)
{
	int rest;
	while (inNumber)
	{
		rest = inNumber % 2;
		if (!rest)
			cout << zero;
		if (rest)
			cout << one;
		inNumber /= 2;
	}
	return;
}


//524
//0010 0000 1100
//20C


