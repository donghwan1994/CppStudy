#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef int* pint;

void foo(const int &x)
{
	cout << x << endl;
}

void foo2(pint &ptr)
{
	cout << ptr << " " << &ptr << endl;
}

void addOne(int &y)
{
	cout << y << " " << &y << endl;

	y = y + 1;
}

void getSinCos(const double &degress, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592 / 180.0;
	
	const double radians = degress * pi;
	
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

void printElement(const vector<int> &arr)
{

}

int main()
{
	int x = 5;
	/*
	cout << x << " " << &x << endl;

	addOne(x);

	cout << x << " " << &x << endl;*/

	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	foo(6);

	pint ptr = &x;

	foo2(ptr);

	cout << ptr << " " << &ptr << endl;

	/*int arr[]{ 1, 2, 3, 4 };*/
	vector<int> arr{ 1, 2, 3, 4 };

	printElement(arr);

	return 0;
}