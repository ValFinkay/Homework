//11) ���� ����� �.�������� ������ ������ � � ����� �(����� ������ ������� ������ � �������� �� ���� ���������� �������� ������ �, 
//������ ������� ������ � �������� �� ���� ��������������� �������� ������ � � �.�.).
//������� ������ ������ �� ������� �������� �� ����� � ������ 3 - � ��������.

#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int arrA[6] = { 1, 2, 3, 4, 5, 6 };
	int arrB[6] = {};
	int i = 0, temp = 0;

	for (int i = 0; i < 6; i += 3)
	{
		for (int j = i; j < 3 + i && j < 6; j++)
		{
			cout << "ArrayA[" << j << "] = " << arrA[j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i < 6 / 2; i++)
	{
		temp = arrA[i];
		arrA[i] = arrA[6 - i - 1];
		arrA[6 - i - 1] = temp;
	}

	for (i = 0; i < 6; i++)
		arrB[i] = arrA[i];

	for (int i = 0; i < 6; i += 3)
	{
		for (int j = i; j < 3 + i && j < 6; j++)
		{
			cout << "ArrayB[" << j << "] = " << arrB[j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
