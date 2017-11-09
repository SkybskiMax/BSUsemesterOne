#include <iostream>
using namespace std;

void whatSeason();

int main()
{
	whatSeason();
	return 0;
}

void whatSeason()
{
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
	case 2:
	case 12:
		cout << "Winter" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "Spring" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "Summer" << endl;
		break;

	case 9:
	case 10:
	case 11:
		cout << "Autumn" << endl;
		break;
	default:
		cout << "Input proper number!" << endl;
		break;
	}
	system("pause");
}