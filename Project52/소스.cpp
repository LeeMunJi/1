#include <iostream>
using namespace std;

int main()
{
	char ch;
	int vowel = 0, consonant = 0;
	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

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

	cout << "���� ���� : " << consonant << endl;
	cout << "���� ���� : " << vowel << endl;

	return 0;
}

