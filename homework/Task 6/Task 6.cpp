//6) ���� ����������� �����.������ ��������� �� ��������� �������� ������ �� ������� �� � ����� ������.

#include <iostream>
using namespace std;

int main()
{
	int numbers[7];
	int i = 0;

	srand(time(NULL));
	for (i = 0; i < 7; i++)
	{
		numbers[i] = -14 + rand() % 50;

	}

	cout << "Array numbers : " << endl;

	for (i = 0; i < 7; i++)
	{
		cout << numbers[i] << endl;

	}

	int max = 0;
	int save_max = 0;
	
	max = numbers[0];

	for (i = 1; i < 7; i++)
		if (max < numbers[i])
		{
			max = numbers[i]; 
			save_max = i; 
		}

	cout << "Maximum value = " << max << endl;


	int m�nim = 0;
	int save_m�nim = 0;

	m�nim = numbers[0];

	for (i = 1; i < 7; i++)
		if (m�nim > numbers[i])
		{
			m�nim = numbers[i];
			save_m�nim = i;
		}

	cout << "Minimum value = " << m�nim << endl;

	swap(numbers[save_m�nim], numbers[save_max]);

	cout << "Array numbers : " << endl;

	for (i = 0; i < 7; i++)
	{
		
		cout << numbers[i] << endl;

	}

	return 0;

}