//2) Напишіть програму, яка переводить кілометри в метри.Кілометри вводяться з клавіатури.

#include <iostream>

int main()
{
	std::cout << "Enter the number of kilometres" << std::endl;
	double kilometres;
	std::cin >> kilometres;

	const int met_in_km = 1000.0;
	int meters = kilometres * met_in_km;

	std::cout << "This is " << meters << " meters" << std::endl;
	
	return 0;
}

