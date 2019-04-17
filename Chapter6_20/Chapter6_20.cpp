#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	//int array[5] = { 1, 2, 3, 4, 5 };

	std::array<int, 5> my_arr = { 1, 21, 3, 40, 5 };
	
	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.begin(), my_arr.end());	// ASC
	std::sort(my_arr.rbegin(), my_arr.rend());	// DESC

	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}