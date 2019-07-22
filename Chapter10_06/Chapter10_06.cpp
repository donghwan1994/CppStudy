#include <iostream>
#include <initializer_list>
#include <cassert>

using std::cout;
using std::endl;

class IntArray
{
private:
	size_t m_length = 0;
	std::unique_ptr<int[]> m_data;

public:
	IntArray(size_t length_in)
		:m_length(length_in), m_data(new int[m_length])
	{}

	IntArray(const std::initializer_list<int> & list)
		:IntArray(list.size())
	{
		std::copy(std::begin(list), std::end(list), &m_data[0]);
	}

	void resize(const size_t length_in)
	{
		assert(m_length != length_in);
		m_data.release();
		m_length = length_in;
		m_data = std::make_unique<int[]>(m_length);
	}

	void reset()
	{
		m_data.release();
		m_length = 0;
	}

	IntArray & operator = (std::initializer_list<int> & list)
	{
		resize(list.size());
		std::copy(std::begin(list), std::end(list), &m_data[0]);
		return *this;
	}

	void insertBefore(const int & value, const int & ix)
	{
		std::unique_ptr<int[]> temp_data(new int[m_length]);
		std::copy(&m_data[0], &m_data[m_length], &temp_data[0]);
		resize(m_length + 1);
		for (size_t i = 0; i < ix; ++i)
			m_data[i] = temp_data[i];
		m_data[ix] = value;
		for (size_t i = ix + 1; i < m_length; ++i)
			m_data[i] = temp_data[i - 1];
	}
	
	void remove(const int & ix)
	{
		std::unique_ptr<int[]> temp_data(new int[m_length]);
		std::copy(&m_data[0], &m_data[m_length], &temp_data[0]);
		resize(m_length - 1);
		for (size_t i = 0; i < ix; ++i)
			m_data[i] = temp_data[i];
		for (size_t i = ix; i < m_length; ++i)
			m_data[i] = temp_data[i + 1];
	}
	
	void push_back(const int & value)
	{
		std::unique_ptr<int[]> temp_data(new int[m_length]);
		std::copy(&m_data[0], &m_data[m_length], &temp_data[0]);
		resize(m_length + 1);
		for (size_t i = 0; i < m_length - 1; ++i)
			m_data[i] = temp_data[i];
		m_data[m_length - 1] = value;
	}

	friend std::ostream & operator << (std::ostream & out, const IntArray & arr)
	{
		out << "IntArray : ";
		for (size_t i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << ", ";
		out << endl;
		return out;
	}
};

int main()
{
	IntArray my_arr{ 1, 3, 5, 7, 9 };
	cout << my_arr << endl;				// 1, 3, 5, 7, 9
	
	my_arr.insertBefore(10, 1);
	cout << my_arr << endl;				// 1, 10, 3, 5, 7, 9
	
	my_arr.remove(3);
	cout << my_arr << endl;				// 1, 10, 3, 7, 9
	
	my_arr.push_back(13);
	cout << my_arr << endl;				// 1, 10, 3, 7, 9, 13

	my_arr.reset();
	cout << my_arr << endl;

	return 0;
}