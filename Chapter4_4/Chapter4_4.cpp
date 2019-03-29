#include <iostream>

// auto 키워드는 함수의 파라미터로는 사용 불가
auto add(int x, int y)
{
	return x + (double)y;
}

int main()
{
	using namespace std;

	auto a = 123;		// integer
	auto d = 123.0;		// double
	auto c = 1 + 2.0;	// double
	auto result = add(1, 2); // double

	return 0;
}