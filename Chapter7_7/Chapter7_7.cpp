#include <iostream>
#include <string>

using namespace std;

void getRandom(int &x) {}
void getRandom(double &x) {}

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

typedef int my_int;

// 동일 합수 취급
void print(int x) {}
void print(my_int x) {}

void print(unsigned int value) {}
void print(float value) {}

int main()
{
	add(1, 2);
	add(3.0, 4.0);

	int x; 
	getRandom(x);

	print((unsigned int)'a');
	print(0u);
	print(3.14159f);

	return 0;
}