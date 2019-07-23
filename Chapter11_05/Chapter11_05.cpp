#include <iostream>

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public = 123;
		Base::m_protected = 123;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_public;
	}
};

int main()
{
	Base base;

	base.m_public = 123;

	Derived derived;
	derived.m_public = 1024;

	return 0;
}