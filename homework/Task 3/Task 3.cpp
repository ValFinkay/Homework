//3. ���� ��(����� ����).��������� �� �� ����������.
//г� ����������, ���� ����� ���� ���� ������� ������ �� 4 � �� ������� �� 100(��������� ����������� � 1996, 1992 ����).
//����� ����, ����� ���� �� �� ������ � ����� ���(����� �� ������� �� 100), 
//����������� � � �� ������� �� 400(� - �, 1600, 1200 � ��������, � 1700, 1900 - �).

#include <iostream>

int main()
{
	std::cout << "Enter a year " << std::endl;
	short year = 0;
	std::cin >> year;

	bool determineYear(int year);
	{
		if (year % 400 == 0) {
			return true;
		}

		else if (year % 100 == 0) {
			return false;
		}

		else if (year % 4 == 0) {
			return true;
		}

		else {
			return false;
		}
	}
	
	determineYear(year) ? std::cout << "This year is leap" << std::endl	
		: std::cout << "This year is not leap";

	return 0;
}
