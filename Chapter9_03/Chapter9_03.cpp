#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(const int &cents = 0) { this->m_cents = cents; }
	int getCents() const { return this->m_cents; }
	int& getCents() { return m_cents; }

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		// !Cents(...)
		return (m_cents == 0) ? true : false;
	}

	friend std::ostream& operator << (std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);

	cout << cents1 << endl;
	cout << cents2 << endl;
	cout << -Cents(-10) << endl;

	auto temp = !cents1; // temp = false

	cout << !cents1 << " " << !cents2 << endl;

	return 0;
}