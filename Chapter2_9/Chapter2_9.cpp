#include <iostream>
#include "My_CONSTANTS.h"

using namespace std;

void printNumber(int my_number)
{
	cout << my_number << endl;
}

int main()
{
	const int price_per_item = 30;

	int num_item = 123;

	int price = num_item * price_per_item;

	constexpr int my_const(123);

	int number;
	cin >> number;

	const int special_number(number);

	printNumber(123);

	const double gravity{ 9.8 }; // 반드시 초기화 필요

	double radius;

	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;
	
	return 0;
}