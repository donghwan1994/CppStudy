#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double *ptr)
{
	cout << "address of pointer variable in doSomething() " << &ptr << endl;;

	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double *ptr{ nullptr }; // modern c++

	doSomething(ptr);
	
	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	cout << "address of pointer variable in main() " << &ptr << endl;

	return 0;
}