#include <iostream>;
#include <string>;
using namespace std;
int binaryNumber(signed long long int);

int main()
{
	while (true)
	{
		signed long long int inNumber = 0;
		cout << "Input number ";
		cin >> inNumber;
		cout << "Number of 1:   " << binaryNumber(inNumber) << endl;
		system("pause");
	}
}

int binaryNumber(signed long long int inNumber)
{
	int rest, outNumber = 0;
	while (inNumber)
	{
		rest = inNumber % 2;
		if (rest)
		{
			outNumber++;
		}
		inNumber /= 2;
	}
	return outNumber;
}
