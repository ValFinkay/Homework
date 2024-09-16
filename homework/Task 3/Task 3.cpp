//3)Дано 3 цілих числа.Вивести на екран true, якщо числа впорядковані за зростанням(наприклад 1 5 7 впорядковані за зростанням, а 1 5 3 - ні), інакше вивести - false.

#include <iostream>

int main()
{
    std::cout << "Enter a three number: " << std::endl;

    int a, b, c;
    std::cin >> a >> b >> c;

    if (a < b)
    {
        if (b < c)
        std::cout << " true " << std::endl;
    }
    else
        std::cout << "false" << std::endl;

    return 0;
}
