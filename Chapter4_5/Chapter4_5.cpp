#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	// numeric conversion
	int i = 30000;
	char c = i;
	double d = 0.123456789;
	float f = d;
	int a = static_cast<int>(4.0); // ����� �� ��ȯ�� ����

	cout << std::setprecision(12) << d << endl;
	cout << std::setprecision(12) << f << endl;
	cout << static_cast<int>(c) << endl; // char ���� integer �� ���� ũ�Ⱑ �۾� �ǵ�ġ ���� ����� ����
	cout << 5u - 10 << endl;

	// numeric promotion
	/*float a = 1.0f;
	double d = a; */
	//cout << typeid(a).name << endl;

	return 0;
}