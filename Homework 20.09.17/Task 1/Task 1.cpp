#include <iostream>
using namespace std;

void markInWord();

int main()
{
	markInWord();
	system("pause");
}

void markInWord()
{
	int mark;
	while (true)
	{
		cout << "Input mark in (10) grading system: " << endl;
		cin >> mark;
		if (mark < 0 || mark>10)
		{
			cout << "Error! Input proper mark! " << endl;
			system("pause");
			system("cls");
		}
		else
			break;
	}
	switch (mark)
	{
	case 0:
	case 1:
	case 2:
		cout << "Was absent" << endl;
		break;
	case 3:
	case 4:
		cout << "Not satisfactorily" << endl;
		break;
	case 5:
	case 6:
		cout << "Satisfactorily" << endl;
		break;
	case 7:
	case 8:
	case 9:
		cout << "Good" << endl;
		break;
	case 10:
		cout << "Excellent!" << endl;
		break;
	}
}