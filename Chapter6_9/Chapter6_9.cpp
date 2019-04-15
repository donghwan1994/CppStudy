#include <iostream>

using namespace std;

int main()
{
	/*double value = 7.;
	double *ptr = &value;

	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;*/

	int array[] = { 9, 7, 5, 3, 1 };
	int *pt = array;

	for (int i = 0; i < 5; ++i)
	{
		//cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		cout << *(pt + i) << " " << (uintptr_t)(pt + i) << endl;
	}

	char name[] = "Jack Jack";

	const int n_name = sizeof(name) / sizeof(char);

	char *ptr = name;

	for (int i = 0; i < n_name; i++) 
	{
		//cout << *(name + i);
		cout << *(ptr + i);
	}
	cout << endl;

	char *p = name;

	while (true)
	{
		if (*p == '\0') 
			break;
		cout << (*p++);
	}

	return 0;
}