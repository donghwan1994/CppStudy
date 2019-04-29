#include <cassert> // assert.h
#include <array>
#include <iostream>
using namespace std;

void printValue(const std::array<int, 5> &my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);

	std::cout << my_array[ix] << std::endl;
}

int main()
{
	std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };

	printValue(my_array, 100);

	const int x = 10;

	assert(x == 5);

	static_assert(x == 5, "x should be 5");

	return 0;
}