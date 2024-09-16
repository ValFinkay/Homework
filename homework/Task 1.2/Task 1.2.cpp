//1) Написати програму, яка знаходить та виводить в дійсному вигляді середнє арифметичне трьох введених ЦІЛИХ чисел Запропонувати декілька варіантів розвязку.

//Варіант 2

#include <iostream>

int main() 
{
    int a, b, c;

    float average;

    std::cout << "Enter three numbers separated by a space " << std::endl;
    std::cin >> a >> b >> c;
    
    float sum = a + b + c;

    average = sum / 3;

    std::cout << "Average of the three numbers: " << average << std::endl;
 
	return 0;
}