#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*std::vector<int> array;

	std::vector<int> array2 = { 1 ,2 ,3, 4, 5 };

	cout << array2.size() << endl;

	std::vector<int> array3 = { 1 ,2 ,3, };

	cout << array3.size() << endl;

	std::vector<int> array4 { 1 ,2 ,3, };

	cout << array4.size() << endl;*/

	int *my_arr = new int[5];

	vector<int> arr = { 1, 2, 3, 4, 5 };

	arr.resize(10); // change size

	for (auto &itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr.at(1) << endl;

	delete[] my_arr;

	return 0;
}