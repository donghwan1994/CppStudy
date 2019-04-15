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
	const char *name = getName(); // const를 이용하여 사용가능
	const char *name2 = getName();
	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;

	cout << int_arr << endl;	// int_arr의 시작주소 출력
	cout << char_arr << endl;	// "Hello, World!" 출력 
	cout << name << endl;		// "JackJack" 출력

	char c = 'Q';
	cout << &c << endl;

	return 0;
}
