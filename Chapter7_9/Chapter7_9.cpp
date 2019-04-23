#include <iostream>
#include <array>
#include <functional>
using namespace std;

int func(int x)
{
	return 5;
}

int goo(int x)
{
	return 10;
}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 == 1) return true;
	else return false;
}

//typedef bool(*check_fcn_t)(const int&);

using check_fcn_t = bool(*)(const int&);

void printNumbers(const array<int, 10> &my_array, std::function<bool(const int&)> check_fcn = isEven)
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element << " ";
	}
	cout << endl;
}

int main()
{
	//int(*fcnptr)(int) = func;

	//cout << fcnptr(1) << endl;

	//fcnptr = goo; // 파라미터입력이 비슷한 함수만 가능

	//cout << fcnptr(3) << endl;

	std::array<int, 10> my_array{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::function<bool(const int&)> fcnptr = isEven;

	printNumbers(my_array, fcnptr);

	fcnptr = isOdd;

	printNumbers(my_array, fcnptr);

	return 0;
}