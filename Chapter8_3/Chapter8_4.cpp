#include <iostream>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int& numerator_input = 0, const int& denominator_input = 1)
	{
		m_numerator = numerator_input;
		m_denominator = denominator_input;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class First
{
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

class Second
{
	First fir;

public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

int main()
{
	Fraction frac;

	frac.print();

	Fraction one_third{ 1, 3 }; 
	//Fraction one_third( 1.0, 3 );
	one_third.print();

	Second sec;

	return 0;
}