#include <iostream>
#include "FuncString.h"

using namespace std;

void strReplaceByWord(char str[], char replaceStr[], int n);

int main()
{
	char str[N] = { "dummy text written here" };
	char replaceStr[N] = { "GOOOOD" };
	int n = 4;
	cout << str << endl;
	strReplaceByWord(str, replaceStr, n);
	cout << str << endl;
	system("pause");
	return 0;
}

void strReplaceByWord(char str[], char replaceStr[], int n)
{
	int strLength = strGetLength(str);
	int strReplaceLength = strGetLength(replaceStr);
	int q = 0, k = 0, m = 0;
	char result[N] = "";
	
	str[strLength] = ' ';
	str[strLength + 1] = '\0';
	strLength++;

	while (q != -1 && m != -1)
	{
		q = strFindAlphabet(str, m - k);
		m = strFindNotAlphabet(str, q);

		if (m - q == n)
		{
			strCopy(str, result, m, strLength);
			strConCat(str, replaceStr, q);
			strConCat(str, result, q + strReplaceLength);
			strReplaceBySymbol(result, '\0', 0, strGetLength(result));
			k = n - strReplaceLength;
		}
		else k = 0;
	}
}