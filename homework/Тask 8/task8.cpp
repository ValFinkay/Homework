//8)Дано витрати машиною пального на 100 км, ціну 1 л пального, а також шлях, який потрібно проїхати водію.
//Обчислити та вивести на екран скільки потрібно витратити грошей водію, щоб проїхати вказаний шлях

#include <iostream>
int main()
{
	std::cout << "How much fuel does a car consume per 100 km?" << std::endl;
	double fuel_per_100km;
	std::cin >> fuel_per_100km;

	std::cout << "How much does a liter of fuel cost?" << std::endl;
	double costFuel;
	std::cin >> costFuel;

	std::cout << "How many kilometers did the car travel?" << std::endl;
	double distance;
	std::cin >> distance;

	double tripCost = (fuel_per_100km / 100) * distance * costFuel;

	std::cout << "The trip will cost  " << tripCost << " $" << std::endl;
	return 0;
}
