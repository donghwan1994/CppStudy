#include <iostream>

// auto Ű����� �Լ��� �Ķ���ͷδ� ��� �Ұ�
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