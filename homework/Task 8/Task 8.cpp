//8) Дано сторони прямокутника.Визначити чи прямокутник є квадратом.

#include <iostream>

int main()
{
	std::cout << "Enter four sides" << std::endl;
	int a, b, c, d;
	std::cin >> a >> b >> c >> d ;


	if (a + b == c + d)
	{
		std::cout << "This is a square " << std::endl;

	}
	else
		std::cout << "This is not a square " << std::endl;

	return 0;
}
