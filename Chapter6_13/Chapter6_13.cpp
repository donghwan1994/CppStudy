#include <iostream>

using namespace std;

int main()
{
	int value1 = 5;
	const int *ptr = &value1;

	const int value = 5;
	const int *ptr = &value;
	//*ptr = 6 // error

	int value2 = 8;
	int *const cptr = &value2; // �ʱ�ȭ �ݵ�� �ʿ�
	//cptr = &value1; // error

	cout << *ptr << endl;

	return 0;
}