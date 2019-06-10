#include <iostream>
using namespace std;

class Date
{	// access sepcifier
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int & year_input)
	{
		int m_month = month_input;
		int m_day = day_input;
		int m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	int getDay()
	{
		return m_day;
	}

	int getMonth()
	{
		return m_month;
	}

	int getYear()
	{
		return  m_year;
	}

	void copyFrom(const Date& original)
	{
		setDate(original.getMonth, original.getDay, original.getYear);
	}
};

int main()
{

	Date today; // {8, 4, 2025};
	/*today.m_month = 8;
	today.m_day = 4;
	today.m_year = 2025;*/
	today.setDate(8, 4, 2025);
	today.setMonth(10);

	Date copy;
	copy.copyFrom(today);
}