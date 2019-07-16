#include <iostream>

using namespace std;

class IntArray
{
private:
	size_t m_length = 0;
	std::unique_ptr<int[]> m_data;

public:
	IntArray(size_t length)
		: m_length(length), m_data{ new int[m_length] } {}

	IntArray(const std::initializer_list<int> &list)
		: IntArray(list.size())
	{
		/*int count = 0;
		for (auto & element : list)
		{
			m_data[count] = element;
			++count;
		}*/
		std::copy(std::begin(list), std::end(list), &m_data[0]);
	}

	//TODO: overload operator =
	IntArray& operator = (std::initializer_list<int> &list)
	{
		if (m_length != list.size())
		{
			m_data.release();
			m_length = list.size();
			m_data = std::make_unique<int[]>(m_length);
		}
		std::copy(std::begin(list), std::end(list), &m_data[0]);

		return *this;
	}


	friend ostream & operator << (ostream & out, IntArray & arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;

		return out;
	}
};

int main()
{
	int my_arr1[5] = { 1, 2, 3, 4, 5 };
	int *my_arr2 = new int[5]{ 1, 2, 3, 4, 5, };

	auto il = { 10, 20, 30 };

	IntArray int_array{ 1, 2, 3, 4, 5};
	cout << int_array << endl;

	int_array = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << int_array << endl;

	return 0;
}