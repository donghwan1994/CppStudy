#include <iostream>
#include <fstream>
#include <vector>
#include <random>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(const int& cents = 0) { this->m_cents = cents; }
	int getCents() const { return this->m_cents; }
	int& getCents() { return this->m_cents; }

	friend bool operator < (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents < c2.m_cents; // ASC
		//return c1.m_cents > c2.m_cents; // DESC
	}

	friend std::ostream& operator << (std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}

	friend bool operator == (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents != c2.m_cents;
	}
};

int main()
{
	
	Cents cents1(6);
	Cents cents2(6);

	/*if (cents1 == cents2)
		cout << "Equal " << endl;

	if (cents1 != cents2)
		cout << "Not Equal " << endl;

	cout << std::boolalpha;*/

	vector<Cents> arr(20);

	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	std::random_shuffle(begin(arr), end(arr));

	for (auto &e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto &e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}