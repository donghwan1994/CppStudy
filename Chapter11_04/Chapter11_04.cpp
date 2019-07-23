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
	float m_d;

public:
	Child()
		:Mother(), m_d(1.0f)
	{
		std::cout << "Child constructor " << std::endl;
	}
};

class A
{
public:
	A(int a)
	{
		std::cout << "A : " << a << std::endl;
	}

	~A()
	{
		std::cout << "Destructor A" << std::endl;
	}
};

class B : public A
{
public:
	B(int a, double b):A(a)
	{
		std::cout << "B : " << b << std::endl;
	}

	~B()
	{
		std::cout << "Destructor B" << std::endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c):B(a, b)
	{
		std::cout << "C : " << c << std::endl;
	}

	~C()
	{
		std::cout << "Destructor C" << std::endl;
	}
};

int main()
{
	/*Child c1;

	std::cout << sizeof(Mother) << std::endl;
	std::cout << sizeof(Child) << std::endl;*/

	C c(1024, 3.14, 'a');

	return 0;
}