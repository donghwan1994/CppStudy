#include <iostream>
#include <cassert>
using namespace std;

class Fraction 
{
private:
	int m_numerator;
	int m_denomiator;

public:
	Fraction(int num = 0, int den = 1)
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

Fraction doSomething()
{
	Fraction temp(1, 2);

	return temp;
}

int main()
{
	Fraction frac(3, 5);

	//Fraction fr_copy(frac);			// copy constructor
	//Fraction fr_copy = frac;			// copy constructor
	Fraction fr_copy(3, 10);	//

	cout << frac << fr_copy << endl;

	Fraction result = doSomething();

	cout << result << endl;

	return 0;
}