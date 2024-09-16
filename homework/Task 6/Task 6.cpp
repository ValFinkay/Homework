//6) Дано двоцифрове число.Визначити чи число має однакові цифри(11, 22 і т.д.)

#include <iostream>

int main()
{
	std::cout << "Input your number" << std::endl;
	int n;
	std::cin >> n;

	int part1 = 0, part2 = 0;

	part1 = n / 10 % 10;
	part2 = n % 10;


	if (part1 == part2)
	{
		std::cout << "Your number has the same digits " << std::endl;
	}
	else
	{
		std::cout << "Your number hasn`t the same digits " << std::endl;
	}


	return 0;
}
