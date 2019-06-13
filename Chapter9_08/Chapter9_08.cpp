#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

void printInt(const int &value)
{
	cout << value << endl;
}

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) : m_dollars(input)	{}

	int getDollar() { return m_dollars; }
	void setDollar(int dollar) { m_dollars = dollar; }


	operator Cents()
	{
		return Cents(m_dollars * 100);
	}
};

int main()
{
	Dollar dol(2);

	Cents cents(dol);

	printInt(cents);

	return 0;
}