#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	short		s = 1; // 2 bytes = 2 * 8 bits = 16 bits
	int			i = 1;
	long		l = 1;
	long long	ll = 1;

	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;

	s = s + 1; // overflow

	cout << s << endl;

	s = std::numeric_limits<short>::min();

	cout << "min() " << s << endl;

	s = s - 1;

	cout << " " << s << endl;

	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	unsigned int ui = -1;

	cout << ui << endl;

	cout << 22 / 4 << endl;
	cout << (float)22 / 4 << endl;

	return 0;
}