#include <iostream>
using namespace std;

int generateID()
{
	static int s_id = 0;
	return ++s_id;
}

class Something
{
public:
	static const int m_value = 1;
	//static int m_value;
};

//int Something::m_value = 1;

int main()
{
	cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;

	Something st1;
	Something st2;

	st1.m_value = 2;

	cout << &st1.m_value << " " << st1.m_value << endl;
	cout << &st2.m_value << " " << st2.m_value << endl;

	//Something::m_value = 1024;

	cout << &Something::m_value << " " << Something::m_value << endl;

	return 0;
}