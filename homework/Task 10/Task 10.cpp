//10.�������� ����������� �����������.�������� ���� �� ���� ����������� �������� �������� � ���������� ����(�������� � �����������, ������� ����).
//� ������� ����������� ��������� �������(������ �� ���� � �.�.).������� �� ������� ���� � �������� �� �������!!!

#include <iostream>

int main()
{
	char op = 0;
	float num1{ 0 }, num2{ 0 };

	std::cout << "Please, enter your numbers  " << std::endl;
	std::cin >> num1;
	std::cin >> num2;

	std::cout << "Choose operator: " << std::endl;
	std::cout << "+, -, * or /" << std::endl;
	std::cin >> op;

	if (num2 == 0) 
	{
		if (op == '/')
		std::cout << "You cannot divide by zero" << std::endl;
	}

	switch (op)
	{
	case '+':
		std::cout << "Your answer is: " << num1 + num2;
		break;

	case '-':
		std::cout << "Your answer is: " << num1 - num2;
		break;

	case '*':
		std::cout << "Your answer is: " << num1 * num2;
		break;

	case '/':
		std::cout << "Your answer is: " << num1 / num2;
		break;

	default:
		std::cout << "Error! operator is not correct" << std::endl;

	}
	
	return 0;
}
