#include <iostream>

using namespace std;

int main()
{
	enum class Color
	{
		RED,
		BLUE,
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	/*if (static_cast<int>(color) == static_cast<int>(fruit))
		cout << "Color is fuit ? " << endl;*/

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;

	if (color1 == color2)
		cout << "Same Color " << endl;
	else
		cout << "Different Color " << endl;
	
	return 0;
}
