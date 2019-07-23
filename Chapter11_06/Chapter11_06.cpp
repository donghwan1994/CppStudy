class Base
{
//private:
protected:
	int m_value;

public:
	Base(int value) :m_value(value) {}
};

class Derived : private Base
{
public:
	Derived(int value) :Base(value) {}

	void setValue(int value)
	{
		Base::m_value = value;
	}
};

int main()
{
	return 0;
}