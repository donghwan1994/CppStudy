#include <iostream> // cout, cin, endl , ...W

using namespace std;

void print()
{
	cout << "Hello World!" << endl;
}

int addTwoNumbers(int a, int b)
{
	return a + b;
}

int main(void)
{
	int sum = addTwoNumbers(1, 2);

	return 0;
}