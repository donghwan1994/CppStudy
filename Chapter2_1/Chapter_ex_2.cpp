#include <iostream>

int main()
{
	using namespace std;
		
	bool bValue = false;
	char chValue = 65; // 'A'¿Í µ¿ÀÏ
	float fValue = 3.141592f;
	double dValue = 3.141592;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	int i = (int)3.1415;	// copy initialization
	int a(123);				// direct initialization
	int b{ 123 };			// uniform initialization

	int k, l, m = 123;

	cout << bValue << endl;
	cout << (int)chValue << endl;
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValue << endl;
	cout << aValue2 << endl;

	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;

	cout << sizeof(bool) << endl;

	cout << a << endl;
	cout << b << endl;

	return 0;
}