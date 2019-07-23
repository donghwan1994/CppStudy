#include <iostream>
#include <string>

class Mother
{
public:
	int m_i;

	Mother(const int & i_in = 0) 
		: m_i(i_in) 
	{
		std::cout << "Mother constructor " << std::endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		:Mother(), m_d(1.0)
	{
		std::cout << "Child constructor " << std::endl;
	}
};

class A
{
public:
	A()
	{
		std::cout << "A constructor" << std::endl;
	}
};

class B : public A
{
public:
	B()
	{
		std::cout << "B constructor" << std::endl;
	}
};

class C : public B
{
public:
	C()
	{
		std::cout << "C constructor" << std::endl;
	}
};

int main()
{
	//Child c1;

	C c;

	return 0;
}