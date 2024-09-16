//9) Дано символ.Визначити чи символ є цифрою.

#include <iostream>
#include <ctype.h>

int main()
{
	std::cout << "Enter a single character or number " << std::endl;
	char yourNumber = 0;
	std::cin >> yourNumber;

	if (isdigit(yourNumber))

		std::cout << "You have entered a digits" << std::endl;
	else
	
		std::cout << "You have entered a character" << std::endl;

	return 0;
}