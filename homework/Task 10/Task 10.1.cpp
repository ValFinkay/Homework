//10) Дано 2 числа.Якщо перше число більше другого поміняти місцями значення змінних.Вивести значення змінних на екран.

#include <iostream>

int main()
{
	int a = 2, b = 5, box = 0;

	if (a > b)
	{
		box = a;
		a = b;
		b = box;
	
	}

	std::cout << "a = " << a << " and b = " << b << std::endl;

	return 0;
}
