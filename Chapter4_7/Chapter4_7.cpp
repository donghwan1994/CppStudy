#include <iostream>
#include <typeinfo>

// 열거형 크래스의 멤버들도 전역변수로 작용. 중복된 네임 X
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

	//Color my_color = color_id; // 정수형 값을 열거형 객체에 대입하는 것은 안됨 
	Color my_color = static_cast<Color>(3); // 캐스팅은 가능

	cout << my_color << " " << COLOR_BLACK << endl;

	//cin >> my_color; // 안됨
	int in_number;
	cin >> in_number;
	
	if (in_number == COLOR_BLACK) my_color = COLOR_BLACK;
	// ...

	return 0;
}

