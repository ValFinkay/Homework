//7)Напишіть програму, яка обраховує квадрат та куб довільного введеного числа

#include <iostream>
#include <cmath>
//підключаємо бібліотеку математичних формул

int main()
{
	std::cout << "Enter the number" << std::endl;
	double number;
	std::cin >> number;

	double square = pow(number,2);
	double cube = pow(number, 3);

	std::cout << "Your number squared is = " << square << std::endl;
	std::cout << "Your number cubed is = " << cube << std::endl;
	return 0;
}
