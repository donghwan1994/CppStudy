#include <iostream>

using std::cout;
using std::endl;

class Base
{
	//private:
protected:
	int m_value;

public:
	Base(int value) :m_value(value) {}

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

class Derived : private Base
{
public:
	Derived(int value) :Base(value) {}

	void setValue(int value)
	{
		Base::m_value = value;
	}

	void print()
	{
		//Base::print();
		cout << "I'm derived" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Derived & derived)
	{
		cout << static_cast<Base>(derived) << endl;
		out << "This is derived output";
		return out;
	}
};

int main()
{
	Base base(5);
	//base.print();
	cout << base << endl;

	Derived derived(7);
	//derived.print();
	cout << derived << endl;

	return 0;
}