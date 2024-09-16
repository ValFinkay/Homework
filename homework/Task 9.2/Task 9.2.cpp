//9) Дано символ.Визначити чи символ є цифрою.

#include <iostream>

int main()
{
	std::cout << "Enter a single character or number " << std::endl;
	char yourNumber = 0;
	std::cin >> yourNumber;

	if (yourNumber >= '0' && yourNumber <= '9')
	{
		std::cout << "You have entered a digits" << std::endl;
	}
	else
		std::cout << "You have entered a character" << std::endl;

	return 0;
}