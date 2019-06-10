#include <iostream>
#include <string>
using namespace std;

class Something
{
public:
	int m_value = 0;

	Something()
	{

	}

	// Copy Constructor
	Something(const Something& st_in)
	{
		m_value = st_in.getValue();

		cout << "Copy Constructor " << m_value << endl;
	}

	void setValue(int value) { m_value = value; }
	int  getValue() const { return m_value; }
};

class Anything
{
public:
	string m_value = "default";

	const string& getValue() const
	{
		cout << "const version" << endl;
		return m_value;
	}
	string& getValue()
	{
		cout << "non-const version" << endl;
		return m_value;
	}
};

void print(const Something &st) // 최적화 (Something st)보다 효율적
{
	cout << &st << endl;

	cout << st.getValue() << endl;
}

int main()
{
	Something something;
	//error
	//something.setValue(3);

	//cout << something.getValue() << endl;

	cout << &something << endl;

	print(something);

	Anything anything1;
	anything1.getValue() = 10;

	const Anything anything2;
	anything2.getValue();

	return 0;
}