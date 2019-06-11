#include <iostream>
using namespace std;

class A
{
private:
	int m_value;

public:
	/*A()
	{
		cout << "Constructor" << endl;
	}*/

	A(const int& value)
	{
		m_value = value;
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void print()
	{
		cout << "Hello" << endl;
	}

	void printDouble()
	{
		cout << m_value * 2 << endl;
	}
};

class Cents
{
private:
	int m_cents;

public:
	Cents(const int& cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	/*A().print();
	A().print();

	A a;
	a.print();
	a.print();*/

	/*A a(1);
	a.printDouble();

	A(1).printDouble();*/

	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}