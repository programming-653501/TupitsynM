#include <iostream>
#include <conio.h>
#define RANGE 2147483647

using namespace std;

int length = 1;

void sum(bool *massiv)                                                          /*��������� ������� � �������� ������ �����*/
{                                                                               /*���������� � ������� � �����*/
	int i;
	int error = 0;
	for (i = 0; i < length; i++)
	{
		if (massiv[i])                                                          /*�������� ������ ���� � ��� 1 � ���� ������ �� �����*/
		{
		massiv[i] = 0;
		continue;
		}
			else                                                                /*��������� 1 ���� � ������� 0 � ������������� ����*/
			{
			massiv[i] += 1;
			error = 1;
			break;
			}
	}
	if (length == i && !error)                                                  /*������� 1 � ����� ������ ���� ���� �� ����������*/
		{
			massiv[length] += 1;
			length++;
		}
}

void main()
{
	int maxzn;

	cout << "Enter the maximum number: ";
	do
	{
		cin >> maxzn;                                                           // ������ ������������ �����
		if (maxzn > RANGE || maxzn <= 0)                                        /* ���������, ����� �� ��� � */
		{                                                                       /* � ������������� ���� ��������� */
			cout << "Out of range. Try again. (0..2147483647) \n";              /* � ������ ������ � ��������� ������ */
		}                                                                       /* � ��������� ������ */
	} while (maxzn <= 0 || maxzn > RANGE);

	bool chislo[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < maxzn; i++)
	{
		sum(chislo);

		bool error;

		for (int j = 0; j < length / 2; j++)                                    /*��������� �������������� �������� ������ �����*/
		{                                                                       /*� ������������� ����, ���� ��� �� �����������*/
			if (chislo[j] != chislo[length - j - 1])
			{
				error = 1;
				break;
			}
		}

		int sum = 0;
		int step = 1;

		if (!error)                                                             /*���� ���� �� ����������, ������� ��������*/
			{                                                                   /*������ ����� � ������� ������� ����������*/
				for (int j = 0; j < length; j++)                                /*��������� � ������ �����, �.�. ��� �����������*/
				{
				cout << chislo[j];
				sum += (chislo[j] * step);
				step *= 2;
				}
				cout << " " << sum << '\n';
			}
		error = 0;
	}

	while (!kbhit());
}
