#include <iostream>
using namespace std;

int main()
{
	char ch;
	int vowel = 0, consonant = 0;
	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	while (cin >> ch)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			cout << "Check to alphabet" << endl;
			consonant--;
		}

		switch (ch)
		{
		case 'a':
		case 'i':
		case 'e':
		case 'o':
		case 'u':
			vowel++;
			break;

		default:
			consonant++;
			break;
		}
	}

	cout << "자음 갯수 : " << consonant << endl;
	cout << "모음 갯수 : " << vowel << endl;

	return 0;
}

