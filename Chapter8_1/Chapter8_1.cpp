#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Friend : name, addres, age, height, weight

class Friend
{
public: // access specifier (public, private, protected)
	string m_name;
	string m_address;
	int age;
	double height;
	double weight;

	void print()
	{
		cout << m_name << " " << m_address << " " << age << " "
			<< height << " " << weight << endl;
	}
};



void print(const string &name, const string &address, const int &age,
	const double &height, const double &weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

int main()
{
	Friend jj{ "Jack Jack", "uptown", 2, 177, 65 }; /// instanciation, instance
	cout << &jj << endl;

	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto &ele : my_friends)
		ele.print();

	return 0;
}