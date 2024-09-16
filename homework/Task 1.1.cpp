//1) Написати програму, яка знаходить та виводить в дійсному вигляді середнє арифметичне трьох введених ЦІЛИХ чисел Запропонувати декілька варіантів розвязку.

//Варіант 1

#include <iostream>

int main()
{
	int a, b, c;
	const int n = 3.0;

	printf << "Enter number one";
	std::cin >> a;

	std::cout << "Enter number two" << std::endl;
	std::cin >> b;

	std::cout << "Enter number three" << std::endl;
	std::cin >> c;
	
	std::cout << "AVG of " << a << ' ' << b << ' ' << c << " is " << (double)(a + b + c) / n << std::endl;
	
	return 0;
}
