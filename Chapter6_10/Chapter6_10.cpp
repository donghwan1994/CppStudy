#include <iostream>

using namespace std;

const char* getName()
{
	return "JackJack";
}

int main()
{
	//char name [] = "Jack Jack";	// Correct
	//char *name = "Jack Jack";		// Error
	const char *name = getName(); // const�� �̿��Ͽ� ��밡��
	const char *name2 = getName();
	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;

	cout << int_arr << endl;	// int_arr�� �����ּ� ���
	cout << char_arr << endl;	// "Hello, World!" ��� 
	cout << name << endl;		// "JackJack" ���

	char c = 'Q';
	cout << &c << endl;

	return 0;
}
