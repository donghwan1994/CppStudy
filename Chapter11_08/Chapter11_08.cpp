#include <iostream>

using std::cout;
using std::endl;

class Base
{
	//private:
protected:
	int m_i;
	
public:
	Base(int value) :m_i(value) {}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Base & base)
	{
		out << "This is base output";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived(int value) :Base(value) {}

	void setValue(int value)
	{
		Base::m_i = value;
	}

	friend std::ostream & operator << (std::ostream & out, const Derived & derived)
	{
		cout << static_cast<Base>(derived) << endl;
		out << "This is derived output";
		return out;
	}

	using Base::m_i;
private:
	//void print() = delete;
};

int main()
{
	Base base(5);
	base.print();

	Derived derived(7);

	derived.m_i = 1024;
	derived.print();

	return 0;
}