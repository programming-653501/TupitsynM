#include <iostream>
#include <conio.h>
#define RANGE 2147483647

using namespace std;

int length = 1;

void sum(bool *massiv)                                                          /*Добавляем единицу к двоичной записи числа*/
{                                                                               /*записанной в массиве с конца*/
	int i;
	int error = 0;
	for (i = 0; i < length; i++)
	{
		if (massiv[i])                                                          /*Обнуляем разряд если в нем 1 и идем дальше по числу*/
		{
		massiv[i] = 0;
		continue;
		}
			else                                                                /*Добавляем 1 если в разряде 0 и устанавливаем флаг*/
			{
			massiv[i] += 1;
			error = 1;
			break;
			}
	}
	if (length == i && !error)                                                  /*Перенос 1 в новый разряд если флаг не установлен*/
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
		cin >> maxzn;                                                           // Вводим максимальное число
		if (maxzn > RANGE || maxzn <= 0)                                        /* Проверяем, лежит ли оно в */
		{                                                                       /* в установленном нами диапазоне */
			cout << "Out of range. Try again. (0..2147483647) \n";              /* и выдаем ошибку с повторным вводом */
		}                                                                       /* в противном случае */
	} while (maxzn <= 0 || maxzn > RANGE);

	bool chislo[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < maxzn; i++)
	{
		sum(chislo);

		bool error;

		for (int j = 0; j < length / 2; j++)                                    /*Проверяем симметричность двоичной записи числа*/
		{                                                                       /*и устанавливаем флаг, если оно не симметрично*/
			if (chislo[j] != chislo[length - j - 1])
			{
				error = 1;
				break;
			}
		}

		int sum = 0;
		int step = 1;

		if (!error)                                                             /*Если флаг не установлен, выводим двоичную*/
			{                                                                   /*запись числа и попутно считаем десятичную*/
				for (int j = 0; j < length; j++)                                /*Переводим с начала числа, т.к. оно симметрично*/
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
