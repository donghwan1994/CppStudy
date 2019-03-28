#include <iostream>
#include "MyConstants.h"

using namespace std;

/*
	int g_x; // external linkage
	static int g_x; // internal likage
	const in g_x; // X

	extern int g_z;
	extern const int g_z;

	int g_y(1);
	static int g_y(1);
	const int g_y(1);

	extern int g_w(1);
	extern const int g_w(1);
*/

void doSomething();

int main()
{
	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi<< endl;

	doSomething();

	return 0;
}

