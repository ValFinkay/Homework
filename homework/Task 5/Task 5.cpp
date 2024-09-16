//5) Дано 2 числа.Порівняти числа.Вивести повідомлення виляду : ’ перше число більше(менше, рівне) другому’.

#include <iostream>

int main()
{
	int a = 7;
	int b = 7;

	if (a > b)
	{
		std::cout << "a is " << a << " > b is " << b << std::endl;

	}
	else if (a < b)
	{
		std::cout << "a is " << a << " < b is " << b << std::endl;
	}
	else 
	{
		std::cout << "a is " << a << " = b is " << b << std::endl;
	}

	return 0;
}