#include <iostream>
#include <string>

using namespace std;

struct  Person
{
	double	height;
	float	weight;
	int		age;
	string	name;

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name << endl;
	}
};

void printPerson(Person ps)
{
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name << endl;
}

struct Family
{
	Person me, mom, dad;
};

struct Employee		// 2 + (2)(padding) + 4 + 8 = 14
{
	short	id;		// 2 bytes
	int		age;	// 4 bytes
	double	wage;	// 8 bytes
};

Person getMe()
{
	Person me{ 2.0, 100.0, 20, "Jack Jack" };

	return me;
}

int main()
{
	Person me{ 2.0, 100.0, 20, "Jack Jack" };
	Person me2;
	
	me2 = me;
	me2.print();

	printPerson(me);

	me.print();
	
	Person me_from_func = getMe();
	me_from_func.print();

	Employee emp1;
	
	cout << sizeof(Employee) << endl;

	return 0;
}