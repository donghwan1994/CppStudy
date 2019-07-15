#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denomiator;

public:
	Fraction(char) = delete;

	explicit Fraction(const int num = 0, const int den = 1)
		:m_numerator(num), m_denomiator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) // copy constructor
		:m_numerator(fraction.m_numerator), m_denomiator(fraction.m_denomiator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Fraction & f)
	{
		cout << f.m_numerator << " / " << f.m_denomiator << endl;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	//Fraction frac1('c'); // error

	Fraction frac(7);

	doSomething(frac);

	return 0;
}