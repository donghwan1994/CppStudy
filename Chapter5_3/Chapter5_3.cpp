#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors color)
{
	/*if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;
	else if (color == Colors::RED)
		cout << "RED" << endl;*/

	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
	case 1:
		cout << "Whilte" << endl;
		break;
	}
}

int main()
{
	printColorName(Colors::BLACK);

	int x;
	cin >> x;

	switch (x)
	{
		int a;
		//int b = 5; // ������ ���������� ������ �Ұ�
	case 0:

		a = 1;
		int y;

		cout << a << endl;
		break;

	case 1:

		y = 5;

		cout << y << endl;

	default:

		cout << "Undefined input " << x << endl;
		//break; // �Ƚᵵ �������
	}

	return 0;
}