#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <ctype.h>

struct Way
{
	char starting_point[15];
	char waypoint1[15];
	char waypoint2[15];
	char endpoint[15];
};

struct Days
{
	int hours;
	int minutes;
	int days[7];
};

struct Flight
{
	unsigned int flight_number;
	char airplane_type[20];
	Way way;
	Days days;
	int seats_number;
	int free_seats[7];
};

struct Ticket
{
	char name[15];
	char surname[15];
	char passport[15];
	int flight_number;
	int day;
	int hours;
	int minutes;
	Ticket *next;
};

struct Orders
{
	Ticket *head;
	Ticket *last;
	int amount;
};

void SearchFlightNumber(std::vector <Flight *> all_flights)
{
	system("cls");
	std::cout << "1.1 Search flight number\n";

	for(;;)
	{
		std::cout << "Enter flight number: ";
		int number;
		std::cin >> number;
		while (!std::cin)
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Incorrect input. Try again.\n";
			std::cout << "Enter flight number: ";
			std::cin >> number;
		}

		bool found = false;
		int k = 0;
		for (int i = 0; i < all_flights.size(); i++)
		{
			if (all_flights[i] -> flight_number == number)
			{
				if (found == false)
				{
					std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
					std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
					std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
					found = true;
				}

				k++;
				printf("|%d:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", k, all_flights[i] -> flight_number, all_flights[i] -> airplane_type, all_flights[i] -> days.hours, all_flights[i] -> days.minutes, all_flights[i] -> seats_number);

				for (int j = 0; j < 71; j++) std::cout << '\b';
				int rewind = 0;
				if (all_flights[i] -> days.days[0])
				{
					std::cout << "Monday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[1])
				{
					std::cout << "Tuesday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[2])
				{
					std::cout << "Wednesday ";
					rewind += 10;
				}
				if (all_flights[i] -> days.days[3])
				{
					std::cout << "Thusday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[4])
				{
					std::cout << "Friday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[5])
				{
					std::cout << "Saturday ";
					rewind += 9;
				}
				if (all_flights[i] -> days.days[6])
				{
					std::cout << "Sunday";
					rewind += 6;
				}

				for (int j = 0; j < rewind; j++) std::cout << '\b';

				for (int j = 0; j < 79; j++) std::cout << '\b';
				std::cout << all_flights[i] -> way.starting_point << " - ";
				if (strcmp(all_flights[i] -> way.waypoint1, "NULL")) std::cout << all_flights[i] -> way.waypoint1 << " - ";
				if (strcmp(all_flights[i] -> way.waypoint2, "NULL")) std::cout << all_flights[i] -> way.waypoint2 << " - ";
				std::cout << all_flights[i] -> way.endpoint;
				std::cout << '\n';

				std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
			}

		}

		if (found == false) std::cout << "Flight number " << number << " not found.\n";

		std::cout << "Do you want to continue your search? (Y/N)\n";
		char choice;
		choice = getch();
		while (tolower(choice) != 'n' && tolower(choice) != 'y')
		{
			std::cout << "Invalid command. Try again.\n";
			choice = getch();
		}
		if (tolower(choice) == 'n') return;
	}
}
void SearchAirplaneType(std::vector <Flight *> all_flights)
{
	system("cls");
	std::cout << "1.1 Search airplane type\n";

	for(;;)
	{
		std::cout << "Enter airplane type: ";
		char type[20];
		std::cin >> type;
		while (!std::cin)
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Incorrect input. Try again.\n";
			std::cout << "Enter airplane type: ";
			std::cin >> type;
		}

		bool found = false;
		int k = 0;
		for (int i = 0; i < all_flights.size(); i++)
		{
			if (!strcmp(all_flights[i] -> airplane_type, type))
			{
				if (found == false)
				{
					std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
					std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
					std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
					found = true;
				}

				k++;
				printf("|%d:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", k, all_flights[i] -> flight_number, all_flights[i] -> airplane_type, all_flights[i] -> days.hours, all_flights[i] -> days.minutes, all_flights[i] -> seats_number);

				for (int j = 0; j < 71; j++) std::cout << '\b';
				int rewind = 0;
				if (all_flights[i] -> days.days[0])
				{
					std::cout << "Monday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[1])
				{
					std::cout << "Tuesday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[2])
				{
					std::cout << "Wednesday ";
					rewind += 10;
				}
				if (all_flights[i] -> days.days[3])
				{
					std::cout << "Thusday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[4])
				{
					std::cout << "Friday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[5])
				{
					std::cout << "Saturday ";
					rewind += 9;
				}
				if (all_flights[i] -> days.days[6])
				{
					std::cout << "Sunday";
					rewind += 6;
				}

				for (int j = 0; j < rewind; j++) std::cout << '\b';

				for (int j = 0; j < 79; j++) std::cout << '\b';
				std::cout << all_flights[i] -> way.starting_point << " - ";
				if (strcmp(all_flights[i] -> way.waypoint1, "NULL")) std::cout << all_flights[i] -> way.waypoint1 << " - ";
				if (strcmp(all_flights[i] -> way.waypoint2, "NULL")) std::cout << all_flights[i] -> way.waypoint2 << " - ";
				std::cout << all_flights[i] -> way.endpoint;
				std::cout << '\n';

				std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
			}

		}

		if (found == false) std::cout << "Airplane type " << type << " not found.\n";

		std::cout << "Do you want to continue your search? (Y/N)\n";
		char choice;
		choice = getch();
		while (tolower(choice) != 'n' && tolower(choice) != 'y')
		{
			std::cout << "Invalid command. Try again.\n";
			choice = getch();
		}
		if (tolower(choice) == 'n') return;
	}
}
void SearchRoute(std::vector <Flight *> all_flights)
{
	system("cls");
	std::cout << "1.3 Search route\n";

	for(;;)
	{
		std::cout << "Enter route(From - To): ";
		char from[15];
		char to[15];
		while(scanf("%s - %s", &from, &to) != 2)
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Incorrect route. Try again.\n";
			std::cout << "Enter route(From - To): ";
		}

		bool found = false;
		int k = 0;
		for (int i = 0; i < all_flights.size(); i++)
		{
			int suitable_from = 0;
			int suitable_to = 0;

			if (!strcmp(all_flights[i] -> way.starting_point, from))
			{
				suitable_from = 1;
				if(!strcmp(all_flights[i] -> way.waypoint1, to)) suitable_to = 1;
				if(!strcmp(all_flights[i] -> way.waypoint2, to)) suitable_to = 1;
				if(!strcmp(all_flights[i] -> way.endpoint, to)) suitable_to = 1;
			}
			if (!strcmp(all_flights[i] -> way.waypoint1, from))
			{
				suitable_from = 1;
				if(!strcmp(all_flights[i] -> way.waypoint2, to)) suitable_to = 1;
				if(!strcmp(all_flights[i] -> way.endpoint, to)) suitable_to = 1;
			}

			if (!strcmp(all_flights[i] -> way.waypoint2, from))
			{
				suitable_from = 1;
				if(!strcmp(all_flights[i] -> way.endpoint, to)) suitable_to = 1;
			}

			if (suitable_from && suitable_to)
			{
				if (found == false)
				{
					std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
					std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
					std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
					found = true;
				}

				k++;
				printf("|%d:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", k, all_flights[i] -> flight_number, all_flights[i] -> airplane_type, all_flights[i] -> days.hours, all_flights[i] -> days.minutes, all_flights[i] -> seats_number);

				for (int j = 0; j < 71; j++) std::cout << '\b';
				int rewind = 0;
				if (all_flights[i] -> days.days[0])
				{
					std::cout << "Monday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[1])
				{
					std::cout << "Tuesday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[2])
				{
					std::cout << "Wednesday ";
					rewind += 10;
				}
				if (all_flights[i] -> days.days[3])
				{
					std::cout << "Thusday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[4])
				{
					std::cout << "Friday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[5])
				{
					std::cout << "Saturday ";
					rewind += 9;
				}
				if (all_flights[i] -> days.days[6])
				{
					std::cout << "Sunday";
					rewind += 6;
				}

				for (int j = 0; j < rewind; j++) std::cout << '\b';

				for (int j = 0; j < 79; j++) std::cout << '\b';
				std::cout << all_flights[i] -> way.starting_point << " - ";
				if (strcmp(all_flights[i] -> way.waypoint1, "NULL")) std::cout << all_flights[i] -> way.waypoint1 << " - ";
				if (strcmp(all_flights[i] -> way.waypoint2, "NULL")) std::cout << all_flights[i] -> way.waypoint2 << " - ";
				std::cout << all_flights[i] -> way.endpoint;
				std::cout << '\n';

				std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
			}

		}

		if (found == false) std::cout << "Route " << from << " - " << to << " not found.\n";


		std::cout << "Do you want to continue your search? (Y/N)\n";
		char choice;
		choice = getch();
		while (tolower(choice) != 'n' && tolower(choice) != 'y')
		{
			std::cout << "Invalid command. Try again.\n";
			choice = getch();
		}
		if (tolower(choice) == 'n') return;
	}
}
void SearchArrivalTime(std::vector <Flight *> all_flights)
{
	system("cls");
	std::cout << "1.4 Search arrival time\n";

	for(;;)
	{
		std::cout << "Enter arrival time(hh:mm): ";
		int hours;
		int minutes;
		while(scanf("%d:%d", &hours, &minutes) != 2)
		{
            std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Incorrect time. Try again.\n";
			std::cout << "Enter arrival time(hh:mm): ";
		}

		bool found = false;
		int k = 0;
		for (int i = 0; i < all_flights.size(); i++)
		{
			if (all_flights[i] -> days.hours == hours && all_flights[i] -> days.minutes == minutes)
			{
				if (found == false)
				{
					std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
					std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
					std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
					found = true;
				}

				k++;
				printf("|%d:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", k, all_flights[i] -> flight_number, all_flights[i] -> airplane_type, all_flights[i] -> days.hours, all_flights[i] -> days.minutes, all_flights[i] -> seats_number);

				for (int j = 0; j < 71; j++) std::cout << '\b';
				int rewind = 0;
				if (all_flights[i] -> days.days[0])
				{
					std::cout << "Monday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[1])
				{
					std::cout << "Tuesday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[2])
				{
					std::cout << "Wednesday ";
					rewind += 10;
				}
				if (all_flights[i] -> days.days[3])
				{
					std::cout << "Thusday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[4])
				{
					std::cout << "Friday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[5])
				{
					std::cout << "Saturday ";
					rewind += 9;
				}
				if (all_flights[i] -> days.days[6])
				{
					std::cout << "Sunday";
					rewind += 6;
				}

				for (int j = 0; j < rewind; j++) std::cout << '\b';

				for (int j = 0; j < 79; j++) std::cout << '\b';
				std::cout << all_flights[i] -> way.starting_point << " - ";
				if (strcmp(all_flights[i] -> way.waypoint1, "NULL")) std::cout << all_flights[i] -> way.waypoint1 << " - ";
				if (strcmp(all_flights[i] -> way.waypoint2, "NULL")) std::cout << all_flights[i] -> way.waypoint2 << " - ";
				std::cout << all_flights[i] -> way.endpoint;
				std::cout << '\n';

				std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
			}

		}

		if (found == false) std::cout << "Arrival time " << hours << ":" << minutes << " not found.\n";


		std::cout << "Do you want to continue your search? (Y/N)\n";
		char choice;
		choice = getch();
		while (tolower(choice) != 'n' && tolower(choice) != 'y')
		{
			std::cout << "Invalid command. Try again.\n";
			choice = getch();
		}
		if (tolower(choice) == 'n') return;
	}
}
void SearchArrivalDay(std::vector <Flight *> all_flights)
{
	system("cls");
	std::cout << "1.5 Search arrival day\n";

	for(;;)
	{
		std::cout << "Choose day to search:\n";
		std::cout << "\t1. Monday\n";
		std::cout << "\t2. Tuesday\n";
		std::cout << "\t3. Wednesday\n";
		std::cout << "\t4. Thusday\n";
		std::cout << "\t5. Friday\n";
		std::cout << "\t6. Saturday\n";
		std::cout << "\t7. Sunday\n";

		char day;
		day = getch();
		while (day != '1' && day != '2' && day != '3' && day != '4' && day != '5' && day != '6' && day != '7')
		{
			std::cout << "\nInvalid command. Try again\n";
			day = getch();
		}

		bool found = false;
		int k = 0;
		for (int i = 0; i < all_flights.size(); i++)
		{
			if (all_flights[i] -> days.days[atoi(&day) - 1])
			{
				if (found == false)
				{
					std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
					std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
					std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
					found = true;
				}

				k++;
				printf("|%d:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", k, all_flights[i] -> flight_number, all_flights[i] -> airplane_type, all_flights[i] -> days.hours, all_flights[i] -> days.minutes, all_flights[i] -> seats_number);

				for (int j = 0; j < 71; j++) std::cout << '\b';
				int rewind = 0;
				if (all_flights[i] -> days.days[0])
				{
					std::cout << "Monday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[1])
				{
					std::cout << "Tuesday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[2])
				{
					std::cout << "Wednesday ";
					rewind += 10;
				}
				if (all_flights[i] -> days.days[3])
				{
					std::cout << "Thusday ";
					rewind += 8;
				}
				if (all_flights[i] -> days.days[4])
				{
					std::cout << "Friday ";
					rewind += 7;
				}
				if (all_flights[i] -> days.days[5])
				{
					std::cout << "Saturday ";
					rewind += 9;
				}
				if (all_flights[i] -> days.days[6])
				{
					std::cout << "Sunday";
					rewind += 6;
				}

				for (int j = 0; j < rewind; j++) std::cout << '\b';

				for (int j = 0; j < 79; j++) std::cout << '\b';
				std::cout << all_flights[i] -> way.starting_point << " - ";
				if (strcmp(all_flights[i] -> way.waypoint1, "NULL")) std::cout << all_flights[i] -> way.waypoint1 << " - ";
				if (strcmp(all_flights[i] -> way.waypoint2, "NULL")) std::cout << all_flights[i] -> way.waypoint2 << " - ";
				std::cout << all_flights[i] -> way.endpoint;
				std::cout << '\n';

				std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
			}

		}

		if (found == false)
		{
			std::cout << "Arrival day ";
			switch(day)
			{
				case '1': std::cout << "Monday";
						  break;
				case '2': std::cout << "Tuesday";
						  break;
				case '3': std::cout << "Wednesday";
						  break;
				case '4': std::cout << "Thusday";
						  break;
				case '5': std::cout << "Friday";
						  break;
				case '6': std::cout << "Saturday";
						  break;
				case '7': std::cout << "Sunday";
						  break;
            }
			std::cout << " not found.\n";
		}

		std::cout << "Do you want to continue your search? (Y/N)\n";
		char choice;
		choice = getch();
		while (tolower(choice) != 'n' && tolower(choice) != 'y')
		{
			std::cout << "Invalid command. Try again.\n";
			choice = getch();
		}
		if (tolower(choice) == 'n') return;
	}
}
void SearchClosestFlight(std::vector <Flight *> all_flights)
{
	system("cls");
	std::cout << "1.6 Search closest flight\n";

	for(;;)
	{
		std::cout << "Enter route(From - To): ";
		char from[15];
		char to[15];
		while(scanf("%s - %s", &from, &to) != 2)
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Incorrect route. Try again.\n";
			std::cout << "Enter route(From - To): ";
		}

		std::cout << "What day is it today?\n";
		std::cout << "\t1. Monday\n";
		std::cout << "\t2. Tuesday\n";
		std::cout << "\t3. Wednesday\n";
		std::cout << "\t4. Thusday\n";
		std::cout << "\t5. Friday\n";
		std::cout << "\t6. Saturday\n";
		std::cout << "\t7. Sunday\n";

		char day;
		day = getch();
		while (day != '1' && day != '2' && day != '3' && day != '4' && day != '5' && day != '6' && day != '7')
		{
			std::cout << "\nInvalid command. Try again\n";
			day = getch();
		}

		std::cout << "Enter current time(hh:mm): ";
		int hours;
		int minutes;
		while(scanf("%d:%d", &hours, &minutes) != 2)
		{
            std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Incorrect time. Try again.\n";
			std::cout << "Enter arrival time(hh:mm): ";
		}

		bool found = false;
		all_flights.push_back(NULL);
		all_flights.back() = new Flight;
		int min_closeness = 8;
		for (int i = 0; i < all_flights.size(); i++)
		{
			int suitable_from = 0;
			int suitable_to = 0;

			if (!strcmp(all_flights[i] -> way.starting_point, from))
			{
				suitable_from = 1;
				if(!strcmp(all_flights[i] -> way.waypoint1, to)) suitable_to = 1;
				if(!strcmp(all_flights[i] -> way.waypoint2, to)) suitable_to = 1;
				if(!strcmp(all_flights[i] -> way.endpoint, to)) suitable_to = 1;
			}
			if (!strcmp(all_flights[i] -> way.waypoint1, from))
			{
				suitable_from = 1;
				if(!strcmp(all_flights[i] -> way.waypoint2, to)) suitable_to = 1;
				if(!strcmp(all_flights[i] -> way.endpoint, to)) suitable_to = 1;
			}

			if (!strcmp(all_flights[i] -> way.waypoint2, from))
			{
				suitable_from = 1;
				if(!strcmp(all_flights[i] -> way.endpoint, to)) suitable_to = 1;
			}

			int current_closeness = 9;
			if (suitable_from && suitable_to)
			{
				for (int j = 0; j < 7; j++)
				{
					if (all_flights[i] -> days.days[j])
					{
						if(atoi(&day) > j + 1) current_closeness = 8 - atoi(&day) + j;
						if(atoi(&day) < j + 1) current_closeness = j + 1 - atoi(&day);
						if(atoi(&day) == j + 1)
						{
							if (all_flights[i] -> days.hours > hours) current_closeness = 0;
								else current_closeness = 7;
						}

						if (current_closeness < min_closeness)
						{
							all_flights.back() = all_flights[i];
							found = true;
							min_closeness = current_closeness;
						}
						if ((current_closeness == min_closeness) && (all_flights.back() -> days.hours > all_flights[i] -> days.hours))
						{
							all_flights.back() = all_flights[i];
							found = true;
							min_closeness = current_closeness;
						}
						if ((current_closeness == min_closeness) && (all_flights.back() -> days.hours = all_flights[i] -> days.hours) && (all_flights.back() -> days.minutes = all_flights[i] -> days.minutes))
						{
							all_flights.back() = all_flights[i];
							found = true;
							min_closeness = current_closeness;
						}
					}
				}
			}
		}



		if (found == false) std::cout << "Route " << from << " - " << to << " not found.\n";
			else
			{
				std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
				std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
				std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
				printf("|1:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", all_flights.back() -> flight_number, all_flights.back() -> airplane_type, all_flights.back() -> days.hours, all_flights.back() -> days.minutes, all_flights.back() -> seats_number);

				for (int j = 0; j < 71; j++) std::cout << '\b';
				int rewind = 0;
				if (all_flights.back() -> days.days[0])
				{
					std::cout << "Monday ";
					rewind += 7;
				}
				if (all_flights.back() -> days.days[1])
				{
					std::cout << "Tuesday ";
					rewind += 8;
				}
				if (all_flights.back() -> days.days[2])
				{
					std::cout << "Wednesday ";
					rewind += 10;
				}
				if (all_flights.back() -> days.days[3])
				{
					std::cout << "Thusday ";
					rewind += 8;
				}
				if (all_flights.back() -> days.days[4])
				{
					std::cout << "Friday ";
					rewind += 7;
				}
				if (all_flights.back() -> days.days[5])
				{
					std::cout << "Saturday ";
					rewind += 9;
				}
				if (all_flights.back() -> days.days[6])
				{
					std::cout << "Sunday";
					rewind += 6;
				}

				for (int j = 0; j < rewind; j++) std::cout << '\b';

				for (int j = 0; j < 79; j++) std::cout << '\b';
				std::cout << all_flights.back() -> way.starting_point << " - ";
				if (strcmp(all_flights.back() -> way.waypoint1, "NULL")) std::cout << all_flights.back() -> way.waypoint1 << " - ";
				if (strcmp(all_flights.back() -> way.waypoint2, "NULL")) std::cout << all_flights.back() -> way.waypoint2 << " - ";
				std::cout << all_flights.back() -> way.endpoint;
				std::cout << '\n';

				std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
			}


		all_flights.pop_back();
		std::cout << "Do you want to continue your search? (Y/N)\n";
		char choice;
		choice = getch();
		while (tolower(choice) != 'n' && tolower(choice) != 'y')
		{
			std::cout << "Invalid command. Try again.\n";
			choice = getch();
		}
		if (tolower(choice) == 'n') return;
	}
}
void OrderTickets(Orders &orders, std::vector <Flight *> all_flights)
{

	system("cls");
	std::cout << "3.1 Order tickets\n";

	std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
	std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
	std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
	for (int i = 0; i < all_flights.size(); i++)
	{
		printf("|%d:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", i + 1, all_flights[i] -> flight_number, all_flights[i] -> airplane_type, all_flights[i] -> days.hours, all_flights[i] -> days.minutes, all_flights[i] -> seats_number);

		for (int j = 0; j < 71; j++) std::cout << '\b';
		int rewind = 0;
		if (all_flights[i] -> days.days[0])
		{
			std::cout << "Monday ";
			rewind += 7;
		}
		if (all_flights[i] -> days.days[1])
		{
			std::cout << "Tuesday ";
			rewind += 8;
		}
		if (all_flights[i] -> days.days[2])
		{
			std::cout << "Wednesday ";
			rewind += 10;
		}
		if (all_flights[i] -> days.days[3])
		{
			std::cout << "Thusday ";
			rewind += 8;
		}
		if (all_flights[i] -> days.days[4])
		{
			std::cout << "Friday ";
			rewind += 7;
		}
		if (all_flights[i] -> days.days[5])
		{
			std::cout << "Saturday ";
			rewind += 9;
		}
		if (all_flights[i] -> days.days[6])
		{
			std::cout << "Sunday";
			rewind += 6;
		}

		for (int j = 0; j < rewind; j++) std::cout << '\b';

		for (int j = 0; j < 79; j++) std::cout << '\b';
		std::cout << all_flights[i] -> way.starting_point << " - ";
		if (strcmp(all_flights[i] -> way.waypoint1, "NULL")) std::cout << all_flights[i] -> way.waypoint1 << " - ";
		if (strcmp(all_flights[i] -> way.waypoint2, "NULL")) std::cout << all_flights[i] -> way.waypoint2 << " - ";
		std::cout << all_flights[i] -> way.endpoint;
		std::cout << '\n';

		std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
	}

    for(;;)
	{
		std::cout << "\nWhich flight you want to order tickets to? \n";
		char number[4];
		std::cin >> number;
		while (atoi(number) < 1 || atoi(number) > all_flights.size())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Invalid choice. Try again.\n";
			std::cin >> number;
		}

		std::cout << "\nChoose day to search:\n";
		std::cout << "\t1. Monday\n";
		std::cout << "\t2. Tuesday\n";
		std::cout << "\t3. Wednesday\n";
		std::cout << "\t4. Thusday\n";
		std::cout << "\t5. Friday\n";
		std::cout << "\t6. Saturday\n";
		std::cout << "\t7. Sunday\n";

		char day[2];
		day[0] = getche();
		for(;;)
		{
			while (day[0] != '1' && day[0] != '2' && day[0] != '3' && day[0] != '4' && day[0] != '5' && day[0] != '6' && day[0] != '7')
			{
				std::cout << "\nInvalid command. Try again\n";
				day[0] = getche();
			}
			if (all_flights.at(atoi(number) - 1) -> days.days[(atoi(day) - 1)]) break;
				else
				{
					std::cout << "\nNo race that day. Try another one.\n";
					day[0] = getch();
				}
		}

		if (all_flights.at(atoi(number) - 1) -> free_seats[atoi(day) - 1])
		{
			all_flights.at(atoi(number) - 1) -> free_seats[atoi(day) - 1] -= 1;
			Ticket *p;
			p = new Ticket;
			orders.amount += 1;
			if (orders.head == NULL)
			{
				orders.head = p;
				orders.last = p;
				p -> next = NULL;
			}
				else
				{
					orders.last -> next = p;
					orders.last = p;
					p -> next = NULL;
				}
			std::cout << "\nEnter your personal data(Be carefull! Any mistake - and your are not flying anywhere!!!):\n";
			std::cout << "Name: ";
			char str[16];
			std::cin >> str;
			strcpy(p -> name, str);
			std::cout << "Surname: ";
			std::cin >> str;
			strcpy(p -> surname, str);
			std::cout << "Passport series and number(e.g. AB6763287): ";
			std::cin >> str;
			strcpy(p -> passport, str);
			p -> flight_number = all_flights.at(atoi(number) - 1) -> flight_number;
			p -> day = atoi(day);
			p -> hours = all_flights.at(atoi(number) - 1) -> days.hours;
			p -> minutes = all_flights.at(atoi(number) - 1) -> days.minutes;
			std::cout << "\nYour ticket successfully ordered! \n";
		}
			else
			{
				std::cout << "No free seats available. \n";
			}

		std::cout << "Do you want to order one more ticket? (Y/N)\n";
		char choice;
		choice = getch();
		while (tolower(choice) != 'n' && tolower(choice) != 'y')
		{
			std::cout << "Invalid command. Try again.\n";
			choice = getch();
		}
		if (tolower(choice) == 'n') return;
	}
}
void ReturnTickets(Orders &orders)
{
	for (;;)
	{
		system("cls");
		std::cout << "3.3 Return tickets \n";
		Ticket *p;
		p = orders.head;
		int counter = 1;
		if (p)
		{
			std::cout << " __________________________________________________________________________________________________\n";
			std::cout << "| Name:             | Surname:       | Passport:      | Flight number: | Day:              | Time: |\n";
			std::cout << "|___________________|________________|________________|________________|___________________|_______|\n";

			while(p)
			{
				printf("|%d:%17s|%16s|%16s|%16d|                   | %02d:%02d |", counter, p -> name, p -> surname, p -> passport, p -> flight_number, p -> hours, p -> minutes);
				for (int j = 0; j < 27; j++) std::cout << '\b';
				std::cout << "Nearest ";
				if (p -> day == 1)
				{
					std::cout << "Monday\n";
				}
				if (p -> day == 2)
				{
					std::cout << "Tuesday\n";
				}
				if (p -> day == 3)
				{
					std::cout << "Wednesday\n";
				}
				if (p -> day == 4)
				{
					std::cout << "Thusday\n";
				}
				if (p -> day == 5)
				{
					std::cout << "Friday\n";
				}
				if (p -> day == 6)
				{
					std::cout << "Saturday\n";
				}
				if (p -> day == 7)
				{
					std::cout << "Sunday\n";
				}
				std::cout << "|___________________|________________|________________|________________|___________________|_______|\n";

				p = p -> next;
				counter++;
			}


			std::cout << "Which ticket you want to return? \n";
			char number[4];
			std::cin >> number;
			while (atoi(number) < 1 || atoi(number) > orders.amount)
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				std::cout << "Invalid choice. Try again.\n";
				std::cin >> number;
			}

			orders.amount -= 1;
			p = orders.head;
			for (int j = 0; j < (atoi(number) - 2); j++) p = p -> next;
			Ticket *for_delete;
			if(atoi(number) != 1)
			{
				for_delete = p -> next;
				if (p -> next -> next == NULL) orders.last = p;
				p -> next = p -> next -> next;
				delete [] for_delete;
			}
				else
				{
					for_delete = p;
					orders.head = p -> next;
					delete [] for_delete;
                }
			std::cout << "You ticket successfully returned\n";

			std::cout << "Do you want to return one more ticket? (Y/N)\n";
			char choice;
			choice = getch();
			while (tolower(choice) != 'n' && tolower(choice) != 'y')
			{
				std::cout << "Invalid command. Try again.\n";
				choice = getch();
			}
			if (tolower(choice) == 'n') return;
		}
			else
			{
				std::cout << "You don't order any tickets.\n";
				std::cout << "Tap anywhere to return. \n";
				getch();
				return;
			}
	}
}
void ShowTickets(Orders orders, std::vector <Flight *> all_flights)
{
	system("cls");
	Ticket *p;
	p = orders.head;
	std::cout << "3.2 View my orders\n";
	int counter = 1;
	if (p)
	{
		std::cout << " __________________________________________________________________________________________________\n";
		std::cout << "| Name:             | Surname:       | Passport:      | Flight number: | Day:              | Time: |\n";
		std::cout << "|___________________|________________|________________|________________|___________________|_______|\n";
	}
		else
		{
			std::cout << "You don't order any tickets.\n";
		}
	while(p)
	{
		printf("|%d:%17s|%16s|%16s|%16d|                   | %02d:%02d |", counter, p -> name, p -> surname, p -> passport, p -> flight_number, p -> hours, p -> minutes);
		for (int j = 0; j < 27; j++) std::cout << '\b';
		std::cout << "Nearest ";
		if (p -> day == 1)
		{
			std::cout << "Monday\n";
		}
		if (p -> day == 2)
		{
			std::cout << "Tuesday\n";
		}
		if (p -> day == 3)
		{
			std::cout << "Wednesday\n";
		}
		if (p -> day == 4)
		{
			std::cout << "Thusday\n";
		}
		if (p -> day == 5)
		{
			std::cout << "Friday\n";
		}
		if (p -> day == 6)
		{
			std::cout << "Saturday\n";
		}
		if (p -> day == 7)
		{
			std::cout << "Sunday\n";
		}
		std::cout << "|___________________|________________|________________|________________|___________________|_______|\n";

		p = p -> next;
		counter++;
	}

	std::cout << "Tap anywhere to return...\n";

	getch();
}
void PrintSearchMenu(std::vector <Flight *> all_flights)
{
	for (;;)
	{
		system("cls");
		std::cout << "1.Search\n";
		std::cout << "\t1.1 Search flight number\n";
		std::cout << "\t1.2 Search airplane type\n";
		std::cout << "\t1.3 Search route\n";
		std::cout << "\t1.4 Search arrival time\n";
		std::cout << "\t1.5 Search arrival day\n";
		std::cout << "\t1.6 Search closest flight\n";
		std::cout << "\t1.7 Return\n";

		char choice;
		choice = getch();
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != '7')
		{
			std::cout << "\nInvalid command. Try again\n";
			choice = getch();
		}
		std::cout << '\n';

		switch(atoi(&choice))
			{
				case 1: SearchFlightNumber(all_flights);
						break;
				case 2: SearchAirplaneType(all_flights);
						break;
				case 3: SearchRoute(all_flights);
						break;
				case 4: SearchArrivalTime(all_flights);
						break;
				case 5: SearchArrivalDay(all_flights);
						break;
				case 6: SearchClosestFlight(all_flights);
						break;
				case 7: return;
			}
	}
}
void PrintTimetable(std::vector <Flight *> all_flights)
{
	system("cls");
	std::cout << "2. Show timetable \n";
	std::cout << " ____________________________________________________________________________________________________________________________________________________________________________________________\n";
	std::cout << "|Flight number: | Airplane Type:      | Way:                                                                 | Time: | Days:                                                   | Seats:      |\n";
	std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
	for (int i = 0; i < all_flights.size(); i++)
	{
		printf("|%d:%13d| %-20s|                                                                      | %02d:%02d |                                                         | %-12d|", i + 1, all_flights[i] -> flight_number, all_flights[i] -> airplane_type, all_flights[i] -> days.hours, all_flights[i] -> days.minutes, all_flights[i] -> seats_number);

		for (int j = 0; j < 71; j++) std::cout << '\b';
		int rewind = 0;
		if (all_flights[i] -> days.days[0])
		{
			std::cout << "Monday ";
			rewind += 7;
		}
		if (all_flights[i] -> days.days[1])
		{
			std::cout << "Tuesday ";
			rewind += 8;
		}
		if (all_flights[i] -> days.days[2])
		{
			std::cout << "Wednesday ";
			rewind += 10;
		}
		if (all_flights[i] -> days.days[3])
		{
			std::cout << "Thusday ";
			rewind += 8;
		}
		if (all_flights[i] -> days.days[4])
		{
			std::cout << "Friday ";
			rewind += 7;
		}
		if (all_flights[i] -> days.days[5])
		{
			std::cout << "Saturday ";
			rewind += 9;
		}
		if (all_flights[i] -> days.days[6])
		{
			std::cout << "Sunday";
			rewind += 6;
		}

		for (int j = 0; j < rewind; j++) std::cout << '\b';

		for (int j = 0; j < 79; j++) std::cout << '\b';
		std::cout << all_flights[i] -> way.starting_point << " - ";
		if (strcmp(all_flights[i] -> way.waypoint1, "NULL")) std::cout << all_flights[i] -> way.waypoint1 << " - ";
		if (strcmp(all_flights[i] -> way.waypoint2, "NULL")) std::cout << all_flights[i] -> way.waypoint2 << " - ";
		std::cout << all_flights[i] -> way.endpoint;
		std::cout << '\n';

		std::cout << "|_______________|_____________________|______________________________________________________________________|_______|_________________________________________________________|_____________|\n";
	}

	std::cout << "Tap any key to return...";

	getch();
}
void PrintTicketsMenu(Orders &orders, std::vector <Flight *> all_flights)
{
	for (;;)
	{
        system("cls");
		std::cout << "3.Tickets\n";
		std::cout << "\t3.1 Order tickets\n";
		std::cout << "\t3.2 View my orders\n";
		std::cout << "\t3.3 Return tickets\n";
		std::cout << "\t3.4 Return\n";

        char choice;
		choice = getch();
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4')
		{
			std::cout << "\nInvalid command. Try again\n";
			choice = getch();
		}
		std::cout << '\n';

        switch(atoi(&choice))
			{
				case 1: OrderTickets(orders, all_flights);
						break;
				case 2: ShowTickets(orders, all_flights);
						break;
				case 3: ReturnTickets(orders);
						break;
				case 4: return;
			}
	}
}
int PrintMainMenu()
{
	system("cls");
	std::cout << "Welcome to BelAvia electronic ticket window!\n";
	std::cout << "Choose one of the options (enter it number): \n";
	std::cout << "1. Search\n";
	std::cout << "2. Show timetable\n";
	std::cout << "3. Tickets\n";
	std::cout << "4. Quit\n";

	char choice;
	choice = getch();
	while (choice != '1' && choice != '2' && choice != '3' && choice != '4')
	{
		std::cout << "\nInvalid command. Try again\n";
		choice = getch();
	}
	std::cout << '\n';

	return atoi(&choice);
}
void OrdersSave(Orders orders)
{
	Ticket *p;
	p = orders.head;
    FILE *tickets;
	tickets = fopen("tickets.txt", "w");

	while(p)
	{
		fprintf(tickets, "%s %s %s %d %d %d %d\n", p -> name, p -> surname, p -> passport, p -> flight_number, p -> day, p -> hours, p -> minutes);
        p = p -> next;
	}

	fclose(tickets);
}

int main()
{
	std::cout << "Loading...";

	FILE *timetable;
	timetable = fopen("timetable.txt", "r");

	if (timetable == NULL)
	{
		std::cout << "Server error. Try again later.";
		getch();
		return 1;
	}

	std::vector <Flight *> all_flights(0);
    int counter = 0;


	while (!feof(timetable))
	{
		all_flights.push_back(NULL);
		all_flights[counter] = new Flight;
		fscanf(timetable, "%d %s %s %s %s %s %d %d %d %d %d %d %d %d %d %d\n", &(all_flights[counter] -> flight_number), &(all_flights[counter] -> airplane_type), &(all_flights[counter] -> way.starting_point), &(all_flights[counter] -> way.waypoint1), &(all_flights[counter] -> way.waypoint2), &(all_flights[counter] -> way.endpoint), &(all_flights[counter] -> days.hours), &(all_flights[counter] -> days.minutes), &(all_flights[counter] -> days.days[0]), &(all_flights[counter] -> days.days[1]), &(all_flights[counter] -> days.days[2]), &(all_flights[counter] -> days.days[3]), &(all_flights[counter] -> days.days[4]), &(all_flights[counter] -> days.days[5]), &(all_flights[counter] -> days.days[6]), &(all_flights[counter] -> seats_number));
		for (int j = 0; j < 7; j++)
		{
			all_flights[counter] -> free_seats[j] = all_flights[counter] -> seats_number;
		}
		counter++;
	}

	fclose(timetable);

	FILE *tickets;
	tickets = fopen("tickets.txt", "r");

	Orders orders;
	orders.head = NULL;
	orders.last = NULL;
	orders.amount = 0;
	if (tickets != NULL)
	{
		if(getc(tickets) != EOF)
		{
            rewind(tickets);
			while (!feof(tickets))
			{
				Ticket *p;
				p = new Ticket;
				orders.amount += 1;
				if (orders.head == NULL)
				{
					orders.head = p;
					orders.last = p;
					p -> next = NULL;
				}
					else
					{
						orders.last -> next = p;
						orders.last = p;
						p -> next = NULL;
					}
				fscanf(tickets, "%s %s %s %d %d %d %d\n", p -> name, p -> surname, p -> passport, &(p -> flight_number), &(p -> day), &(p -> hours), &(p -> minutes));
			}
		}
	}

	fclose(tickets);

    system("cls");
	for(;;)
	{
		int choice;
		choice = PrintMainMenu();

		switch(choice)
		{
			case 1: PrintSearchMenu(all_flights);
					break;
			case 2: PrintTimetable(all_flights);
					break;
			case 3: PrintTicketsMenu(orders, all_flights);
					break;
			case 4: OrdersSave(orders);
					return 0;
		}
	}
}
