//4) Дано 3 числа.Вивести true, якщо серед них є додатні та парні.

#include <iostream>


int main()
{

	std::cout << "Input three numbers" << std::endl;
	int num1 = 0, num2 = 0, num3 = 0;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	int arr[] = { num1 , num2, num3 };

	for (int i : arr)
	{
		if (arr[i] >= 0 && arr[i] % 2 == 0) {
			std::cout << "true" << std::endl;

			return 0;
		}
	}

	return 0;
}
