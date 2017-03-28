#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int ch = 0;
int zn = 0;

char menu(bool data_exist)                                                                     /*Менюшка*/
{
	cout << "Choose one of the options: \n";
	cout << "1.Input the fraction \n";
	cout << "2.Output the fraction \n";
	cout << "3.Output the contrary fraction \n";
	cout << "4.Output the shortened fraction \n";
	cout << "5.Information \n";
	cout << "6.Quit \n";
	cout << endl;
	cout << "Enter your choice: ";

	char choice = getch();
	cout << endl;
	cout << choice;
	cout << endl;

	while (!strchr("123456", choice))                                           /*Пока не введено число из 1..6 выдаем ошибку*/
	{
		cout << "Incorrect input. Try again. \n";
		choice = getch();
		cout << choice;
		cout << endl;
	}

	if (strchr("234", choice) && data_exist == 0)                                                        /*Закрыть доступ к функциям, если нет данных*/
	{
		cout << "No data. You must input chislitel and znaminatel before using this function. \n \n";
		return 'F';
	}

	cout << endl;
	return choice;
}

void enter(bool &data_exist)                                                    /*Ввод чисел*/
{
	data_exist = 1;
	cout << "Enter chislitel: ";
	cin >> ch;
	cout << "Enter znamenatel: ";
	cin >> zn;

	cout << "\n";
}

void all_types_output()                                                          /*Вывод прямой дроби*/
{
	cout << "Typical: " << ch << "/" << zn << "\n";
    double des;
	des = (double) ch / zn;
	cout << "Desyatichnoe: " << des << "\n";
    int step = 0;
	while (des > 10)
	{
		des /= 10;
		step += 1;
	}
	cout << "Scientific: " << des << " * " << "10^" << step << "\n \n";
}

void contrary_output()                                                           /*Вывод обратной дроби*/
{
	cout << "Contrary fraction: \n";
	cout << "Typical: " << zn << "/" << ch << "\n";
	double des;
	des = (double) zn / ch;
	cout << "Desyatichnoe: " << des << "\n";
	int step = 0;
	while (des > 10)
	{
		des /= 10;
		step += 1;
	}
	cout << "Scientific: " << des << " * " << "10^" << step << "\n \n";
}

int nod(int a, int b)
{
	while (a && b)
	{
		if (a >= b) a %= b;
			else b %= a;
	}
	return a | b;
}

void shortened_output()                                                         /*Вывод сокращенной дроби*/
{
	cout << ch / nod(ch, zn) << "/" << zn / nod(ch, zn) << endl;
}

void info()                                                                     /*Информация*/
{
	cout << "Program Rational number \n";
	cout << "Version 1.0 \n";
	cout << "Made by Hardicon's corporation. Author Mike Tupitsyn. \n";
	cout << "Special thank's to Google Corporation. \n";
	cout << '\n';
}

int main()
{
	char choice;
	bool data_exist = 0;

	while (1)
	{
		choice = menu(data_exist);

		switch (choice)                                                             /*Вызов желаемой функции*/
		{
			case '1': enter(data_exist);
					  break;
			case '2': all_types_output();
					  break;
			case '3': contrary_output();
					  break;
			case '4': shortened_output();
					  break;
			case '5': info();
					  break;
			case '6': return 0;
			case 'F': break;
			default:  cout << "Unknown error. Press any key to quit.";              /*А вдруг косяк*/
					  while (!kbhit());
					  return 1;
		}

		cout << "Do you want to continue? (Y/N)" << endl;
		choice = getch();
		cout << choice << endl << endl;

		while (!strchr("yn", tolower(choice)))
		{
			cout << "Incorrect input. Try again. \n";
			choice = getch();
			cout << choice;
			cout << endl;
		}

		if (tolower(choice) == 'n') return 0;
	}
}
