/*13)���� �����(�) �� � ��������(� - ����� �����).�������� 2 ������(� � �),
����������� � ����� � ����� �������� ������ �, � ����� � � ����� �������� ������ �.*/

#include <iostream>
using namespace std;

int main()
{
	const int n = 6;
	int arrA[n] = { 1, 2, 3, 4, 5, 6 };

	int arrB[n / 2] = {};
	int arrC[n / 2] = {};
	int i = 0;

	for (i = 0; i < (n / 2); ++i)
	{
		arrB[i] = arrA[i];
	}
	for (; i < n; ++i)
	{
		arrC[i - (n / 2)] = arrA[i];
	}


	cout << "ArrayB: " << endl;
	for (int i = 0; i < (n / 2); i++)
	{
		cout << arrB[i] << ' ';
	}

	cout << endl;

	cout << "ArrayC: " << endl;
	for (int i = 0; i < (n / 2); i++)
	{
		cout << arrC[i] << ' ';
	}
}

