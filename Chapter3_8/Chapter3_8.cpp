#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	unsigned int a = 1024;

	cout << std::bitset<16>(a) << endl;

	unsigned int b = a << 2;

	cout << std::bitset<16>(b) << " " << b << endl;
	cout << std::bitset<16>(a << 1) << " " << (a << 1) << endl;
	cout << std::bitset<16>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<16>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<16>(a << 4) << " " << (a << 4) << endl;
	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

	// bitwise not ~a
	cout << std::bitset<16>(~a) << " " << (~a) << endl;

	a = 0b1100;
	b = 0b0110;

	cout << std::bitset<4>(a & b) << endl; // AND
	cout << std::bitset<4>(a | b) << endl; // OR
	cout << std::bitset<4>(a ^ b) << endl; // XOR

	return 0;
}