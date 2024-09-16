//7) Дано трьохцифрове число.Визначити чи число має однакові першу і останню цифри(131, 272 і т.д.)

#include <iostream>
#include <string>


int main()
{
	std::cout << "Input your number" << std::endl;

	int n;
	std::cin >> n;

	std::string strNumber = std::to_string(n);
	int part_first = strNumber.front() - '0';
	int part_last = strNumber.back() - '0';


	if (part_first == part_last)
	{
		std::cout << "The first and last digit in the number are the same " << std::endl;
	}
	else
	{
		std::cout << "The first and last digit in the number aren`t the same " << std::endl;
	}
}

