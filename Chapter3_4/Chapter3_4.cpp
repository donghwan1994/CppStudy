#include <iostream>

int getPrice(bool onSale)
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	using namespace std;

	float a;

	cout << sizeof(float) << endl;
	cout << sizeof a << endl; // ������ ���۷���� ��밡��

	int x = 3;
	int y = 10;
	//int z = (++x, ++y); 
	//�� �Ʒ��� �ڵ�� ����
	++x;
	++y;
	int z = y;

	cout << x << " " << y << " " << z <<  endl;
	 
	a = 1;
	int b = 10;

	z = a, b; // ','���� '='�� �켱������ ���� �������̹Ƿ� z = a ���� ����

	cout << z << endl;

	z = (++a, a + b);

	cout << z << endl;

	// conditional operator (arithmetric if)
	bool onSale = true;

	//const int price = (onSale == true)? 10 : 100;
	const int price = getPrice(onSale);

	/*if (onSale)
		price = 10;
	else
		price = 100;*/

	cout << price << endl;

	x = 5;

	cout << ((x % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}