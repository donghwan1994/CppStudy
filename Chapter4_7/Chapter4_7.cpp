#include <iostream>
#include <typeinfo>

// ������ ũ������ ����鵵 ���������� �ۿ�. �ߺ��� ���� X
enum Color // user-defined data types
{
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

enum Feeling
{
	HAPPY,
	JOY, 
	TIRED,
};

int main()
{
	using namespace std;

	int color_id = COLOR_RED;

	//Color my_color = color_id; // ������ ���� ������ ��ü�� �����ϴ� ���� �ȵ� 
	Color my_color = static_cast<Color>(3); // ĳ������ ����

	cout << my_color << " " << COLOR_BLACK << endl;

	//cin >> my_color; // �ȵ�
	int in_number;
	cin >> in_number;
	
	if (in_number == COLOR_BLACK) my_color = COLOR_BLACK;
	// ...

	return 0;
}

