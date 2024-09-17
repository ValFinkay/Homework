//6) Написати програму, яка переводить повний оберт планети Марс навколо Сонця в земні роки.Оберти ввести з клавіатури. 
// (Марс робить повний оберт навколо Сонця за 686 земних днів)

#include <iostream>

int main()
{
	const int DAYS_TURN_MARS = 686;
	const int DAY_IN_EATH_YEAR = 365;

	std::cout << "How many circles has Mars made?" << std::endl;
	int mars;
	std::cin >> mars;

	double years = mars * static_cast<double>(DAYS_TURN_MARS) / DAY_IN_EATH_YEAR;
	//static_cast<double>(_) - зробили приводження типу, аби функція виводила дробне число

	std::cout << "This is " << years << " earth years" << std::endl;
	return 0;
}
