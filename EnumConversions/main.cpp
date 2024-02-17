#include <iostream>

enum Color
{
	red, yellow, green, blue
};

int main()
{
	std::cout << Color::red << '\n';

	Color c = Color(2);

	std::cout << c << '\n';

	return 0;
}