#include <iostream>

int main()
{
	using namespace std;

	//Decimal	: 0 1 3 4 5 6 7 8 9 10
	//Octal		: 0 1 2 3 4 5 6 7 10 11 12 13
	//Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	float pi = 3.14f;
	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;
	int x = 0xF; // Hexa
	int y = 0b1010; // Binary
	int num_items = 123;
	int price = num_items * 10;

	cout << d << endl;
	cout << x << endl;
	cout << y << endl;

	return 0;
}