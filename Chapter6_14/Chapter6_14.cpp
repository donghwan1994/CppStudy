#include <iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

void doSomething(int &n)
{
	n = 10;
	cout << &n << endl;
	cout << "In doSomething " << n << endl;
}

int main()
{
	//int value = 5;

	//int *ptr = nullptr;
	//ptr = &value;

	//int &ref = value;
	//ref = 10; // *ptr = 10;

	//cout << value << " " << ref << endl;
	//cout << &value << endl;
	//cout << &ref << endl;
	//cout << ptr << endl;
	//cout << &ptr << endl;

	//int x = 5;
	//int &ref = x;

	//const int y = 8;
	//const int &ref = y; // const ������ const ���� ������ ���
	
	/*int n = 5;

	cout << n << endl;
	cout << &n << endl; // doSomething(int &n)������ n�� �ּҿ� main()�Լ��� n�� �ּҰ� ���� 

	doSomething(n);

	cout << n << endl;*/

	Other ot;

	int &v1 = ot.st.v1;
	v1 = 1.0; // �ӵ��� ������

	return 0;
}