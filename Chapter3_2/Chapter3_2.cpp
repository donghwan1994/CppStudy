#include <iostream>

int main()
{
	using namespace std;

	int x = 7;
	int y = 4;
	//int z = x % y;
	int z = x;
	z += y;

	cout << z << endl;
	//cout << x / y << " " << z << endl;
	
	cout << x / y << endl;
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	cout << -5 % 2 << endl; // ������ ���� ��ȣ�� ������ ��ȣ�� ��� ���

	

	return 0;
}