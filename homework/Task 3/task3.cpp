//3) Дано ціна 1 хвилини та кількість хвилин.Обчислити вартість дзвінка.

#include <iostream>

int main()
{
	double cost_per_minute = 0.33;
	int  total_minute = 27.0;
	double call_cost = cost_per_minute * total_minute;

	std::cout << "The call will cost " << call_cost << std::endl;
	return 0;
}
