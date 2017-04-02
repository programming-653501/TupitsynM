#include <iostream>
#include <vector>
#include <conio.h>
#include <cmath>

int enter(std::vector <int> &vecInt_LongNumber)                                 //Вводим длинное число, проверяем на некорректный ввод
{
	for (;;)
	{
		char digit = 'a';

		digit = getche();
		if (strchr("1234567890", digit))
		{
			vecInt_LongNumber.push_back(digit - '0');
		}
			else
			{
				if (digit == '\r')
				{
					std::cout << "\n";
					return 0;
				}
					else
					{
						vecInt_LongNumber.clear();
						std::cout << "\nIncorrect input. Try again. \n";
						return 1;
					}
			}
	}
}

int main()
{
	std::vector <int> vecInt_LongNumber1;
	std::vector <int> vecInt_LongNumber2;

	int fail;

	std::cout << "Enter a first number: ";
	do
	{
		fail = enter(vecInt_LongNumber1);
	} while (fail);

	std::cout << "Enter a second number: ";
	do
	{
		fail = enter(vecInt_LongNumber2);
	} while (fail);

	int value = vecInt_LongNumber1.size() - vecInt_LongNumber2.size();          //Находим разницу в длине чисел...
	int lengthDifference = std::abs(value);

	if (lengthDifference)                                                       //... и нивелируем ее
	{
		if (vecInt_LongNumber1.size() > vecInt_LongNumber2.size())
		{
			for (; lengthDifference; lengthDifference--)
			{
				vecInt_LongNumber2.insert(vecInt_LongNumber2.begin(), 0);
			}
		}
			else
			{
				for (; lengthDifference; lengthDifference--)
				{
					vecInt_LongNumber1.insert(vecInt_LongNumber1.begin(), 0);
				}
			}
	}

	std::vector <int> vecInt_Sum;

	int rest = 0;
	for (int counter = vecInt_LongNumber1.size() - 1; counter + 1; counter--)
	{
		vecInt_Sum.insert(vecInt_Sum.begin(), ((vecInt_LongNumber1[counter] + vecInt_LongNumber2[counter]) % 10) + rest);
		if ((vecInt_LongNumber1[counter] + vecInt_LongNumber2[counter]) >= 10) rest = 1;
			else rest = 0;
	}

	if (rest) vecInt_Sum.insert(vecInt_Sum.begin(), 1);

	std::cout << "Their sum is: ";

	for (int counter = 0; counter < vecInt_Sum.size(); counter++)
	{
		std::cout << vecInt_Sum[counter];
	}

	std::cout << '\n';

	std::system("pause");

	return 0;
}
