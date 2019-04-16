#include <iostream>

using namespace std;

int main()
{
	/*int *ptr = new (std::nothrow) int{ 7 };
	int *ptr2 = ptr;

	delete ptr;
	ptr = nullptr;*/

	/*if (ptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
		cout << "Could not allocate memory" << endl;
	
	delete ptr;*/

	// memory leak
	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr; // 누수방지. 느림.
	}

	return 0;
}