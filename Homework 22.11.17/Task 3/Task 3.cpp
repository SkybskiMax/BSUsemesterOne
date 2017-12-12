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
	int firstLetter = 0, k = 0, lastLetter = 0;
	char result[N] = "";
	
	str[strLength] = ' ';
	str[strLength + 1] = '\0';
	strLength++;

	while (firstLetter != -1 && lastLetter != -1)
	{
		firstLetter = strFindAlphabet(str, lastLetter - k);
		lastLetter = strFindNotAlphabet(str, firstLetter);

		if (lastLetter - firstLetter == n)
		{
			strCopy(str, result, lastLetter, strLength);
			strConCat(str, replaceStr, firstLetter);
			strConCat(str, result, firstLetter + strReplaceLength);
			strReplaceBySymbol(result, '\0', 0, strGetLength(result));
			k = n - strReplaceLength;
		}
		else k = 0;
	}
}