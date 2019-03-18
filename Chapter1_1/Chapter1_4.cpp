#include <iostream> // cout, cin, endl , ...
#include <cstdio> // printf


int main(void)
{
	using namespace std;

	int x = 1;

	cout << "Before your input, x was " << x << endl;

	cin >> x;

	cout << "Your input is " << x <<  endl;

	cout << "\a";

	return 0;
}