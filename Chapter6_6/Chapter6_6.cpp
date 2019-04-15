#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	/*char myString[255];

	cin.getline(myString, 255);

	int ix = 0;
	while (true)
	{
		if (myString[ix] == '\0') break;

		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}*/

	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);
	// strcat() : 두 문자열 접합
	// strcmp() : 두 문자열 비교

	strcat_s(dest, source);

	cout << source << endl;
	cout << dest << endl;

	return 0;
}