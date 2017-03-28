#include <iostream>
#include <math.h>

double x;

void step(double &right_sum, double &step_sum, int &counter)
{
	counter++;

	step_sum *= x * x;
	step_sum *= -1;
	step_sum /= 2 * counter + 1;
	step_sum /= 2 * counter;

	right_sum += step_sum;
}

int main()
{
	double accuracy, left_sum, right_sum;
	right_sum = 0;

	std::cout << "Enter an accuracy: ";
	std::cin >> accuracy;
	std::cout << '\n' << "Enter ""X"" value: ";
	std::cin >> x;

	left_sum = sin(x);

	double step_sum = x;
	int counter = 0;

	do
	{
		step(right_sum, step_sum, counter);
	} while (abs(left_sum - right_sum) > accuracy);

	std::cout << "The number of members: " << counter << '\n';
	std::cout << "The sum of left part is " << left_sum << '\n';
	std::cout << "The sum of right part is " << right_sum << '\n';

	std::system("pause");

	return 0;
}
