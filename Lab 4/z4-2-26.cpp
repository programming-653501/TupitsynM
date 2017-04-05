#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <cstring>

int enter(std::string &Template)
{
	char letter;

	for(;;)
	{
		letter = getche();

		if (strchr("QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm_", letter)) Template.push_back(std::toupper(letter));
			else
			{
				if (letter == '\r')
				{
					std::cout << '\n';
					return 0;
				}
					else
					{
						Template.clear();
						std::cout << "Incorrect input. Try again.\n";
						return 1;
					}
			}
	}
}

int main()
{
	std::string str_Template;

	int fail;
	int isFound = 0;

	do
	{
		std::cout << "Enter a template: \n";
		fail = enter(str_Template);
	} while (fail);

	ifstream file("dictionary.txt");

	std::string str_Word;

	if (file.is_open())
	{
		while(!file.eof())
		{
			getline(file, str_Word);
			if (str_Word.length() == str_Template.length())
			{
				int counter;
				for (counter = 0; counter < str_Word.length(); counter++)
				{
					if (str_Word.at(counter) != str_Template.at(counter) && str_Template.at(counter) != '_') break;
				}
				if (counter == str_Word.length())
				{
					for (counter = 0; counter < str_Word.length(); counter++) std::cout << str_Word.at(counter);
					std::cout << '\n';
					isFound = 1;
				}
				str_Word.clear();
			}
				else
				{
					str_Word.clear();
					continue;
                }
		}
		file.close();
	}
		else
		{
			std::cout << "Dictionary not found! \n";
		}

    if (!isFound) std::cout << "Words not found!\n";

	std::system("pause");

	std::exit(0);
}
