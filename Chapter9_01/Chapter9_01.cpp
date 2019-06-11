#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(const int &cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }
	friend Cents operator + (const Cents &c1, const Cents &c2); // Cents operator function can access m_cents
};

Cents add(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

Cents operator + (const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	/*Cents sum;
	add(cents1, cents2, sum);*/

	cout << add(cents1, cents2).getCents() << endl;

	cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;

	// ?: :: sizeof . .* 는 연산자 오버로딩 안됨

	return 0;
}